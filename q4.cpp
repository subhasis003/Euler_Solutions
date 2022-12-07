/*
Summation of primes
Problem 10

The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.

*/


#include<iostream>
using namespace std;

bool isPrime(int n){
        if(n == 1)
			return false;
		if(n==2 || n==3)
			return true;
		if(n%2 == 0 || n%3 == 0)
			return false;
		for(int i = 5;i*i<=n;i++)
			if(n%i == 0 || n%(i+2) == 0)
				return false;
		
		return true;
}
int main(){
    int num = 0, sum =0;
		for(int i = 1;i<=2000000 ;i++)
		{
			if(isPrime(i))
				sum =sum + i;
		}
		cout<<"Sum of all the primes below two million = "<<sum<<endl;
    return 0;
}
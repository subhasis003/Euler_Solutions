/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
What is the 10 001st prime number?
 */

#include<iostream>
#include<math.h>
using namespace std;

    bool isprime(int n){
        for (int i=2;i<=sqrt(n);i++){
            if (n%i==0)
                return false;
        }
        return true;
    }
    int main() {
        int count=0;
        int i=2;
        while (count!=10001){
            if (isprime(i)) {
                count++;
            }
            i++;
        }
        cout<<i<<endl;
    }

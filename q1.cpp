/* 
Sum square difference

Problem 6 :-

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

#include<iostream>
using namespace std;

int main(){
    long long int sumOfSqr = 0, sqrOfSum = 0;
    for(int i=1; i<=100; i++){
        sumOfSqr += i*i;
        sqrOfSum += i;
    }
    sqrOfSum = sqrOfSum*sqrOfSum;
    long long int difference = sqrOfSum - sumOfSqr;
    cout<<"Difference = "<<difference;
    return 0;
}
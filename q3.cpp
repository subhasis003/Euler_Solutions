/*
Factorial digit sum
Problem 20

For example, 10! = 10 × 9 × ... × 3 × 2 × 1 = 3628800,
and the sum of the digits in the number 10! is 3 + 6 + 2 + 8 + 8 + 0 + 0 = 27.

Find the sum of the digits in the number 100!

*/
#include <bits/stdc++.h>
using namespace std;


void multiply(vector<int> &v, int x)
{
	int carry = 0, res;
	int size = v.size();
	for (int i = 0 ; i < size ; i++)
	{
	
		int res = carry + v[i] * x;
		v[i] = res % 10;
		carry = res / 10;
	}
	while (carry != 0)
	{
		v.push_back(carry % 10);
		carry /= 10;
	}
}

int findSumOfDigits(int n)
{
	vector<int> v;	
	v.push_back(1); 

	for (int i=1; i<=n; i++)
		multiply(v, i);

	int sum = 0;
	int size = v.size();
	for (int i = 0 ; i < size ; i++)
		sum += v[i];
	return sum;
}


int main()
{
	int n = 100;
	cout << findSumOfDigits(n);
	return 0;
}

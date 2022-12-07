/*
Amicable numbers
Problem 21

Let d(n) be defined as the sum of proper divisors of n (numbers less than n which divide evenly into n).
If d(a) = b and d(b) = a, where a ≠ b, then a and b are an amicable pair and each of a and b are called amicable numbers.

For example, the proper divisors of 220 are 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 and 110; therefore d(220) = 284. The proper divisors of 284 are 1, 2, 4, 71 and 142; so d(284) = 220.

Evaluate the sum of all the amicable numbers under 10000.
*/

#include<iostream>
#include<math.h>
#include<unordered_set>
using namespace std;


int sumOfDivisors(int n)
{

	int sum = 1;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0) {
			sum += i;

			if (n / i != i)
				sum += n / i;
		}
	}
	return sum;
}


bool isAmicable(int a, int b)
{
	return (sumOfDivisors(a) == b && sumOfDivisors(b) == a);
}

int countPairs(int arr[], int m)
{
	unordered_set<int> s;
	int count = 0;
	for (int i = 0; i < m; i++)
		s.insert(arr[i]);

	for (int i = 0; i < m; i++)
	{
		if (s.find(sumOfDivisors(arr[i])) != s.end())
		{
			int sum = sumOfDivisors(arr[i]);
			if (isAmicable(arr[i], sum))
				count++;
		}
	}
    count /= 2;
	return count;
}

int main()
{
	int arr1[] = { 220, 284, 1184, 1210, 2, 5 };
	int m1 = sizeof(arr1) / sizeof(arr1[0]);
	cout << countPairs(arr1, m1)<< endl;
	
	int arr2[] = { 2620, 2924, 5020, 5564, 6232, 6368 };
	int m2 = sizeof(arr2) / sizeof(arr2[0]);
	cout << countPairs(arr2, m2)<< endl;
	return 0;
}

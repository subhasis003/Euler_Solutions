/*
If the numbers 1 to 5 are written out in words: one, two, three, four, five, then there are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.
If all the numbers from 1 to 1000 (one thousand) inclusive were written out in words, how many letters would be used?
NOTE: Do not count spaces or hyphens.
For example, 342 (three hundred and forty-two) contains 23 letters and 115 (one hundred and fifteen) contains 20 letters.
The use of "and" when writing out numbers is in compliance with British usage.
 */
#include<iostream>
using namespace std;

    string toWord(int n) {
        string Ones[] = {
                "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
                "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"
        };
        string Tens[]= {
                "", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"
        };
        if (0 <= n && n < 20)
            return Ones[n];
        else if (20 <= n && n < 100)
            return Tens[n / 10] + (n % 10 != 0 ? Ones[n % 10] : "");
        else if (100 <= n && n < 1000)
            return Ones[n / 100] + "hundred" + (n % 100 != 0 ? "and" + toWord(n % 100) : "");
        else if (1000 <= n && n < 1000000)
            return toWord(n / 1000) + "thousand" + (n % 1000 != 0 ? toWord(n % 1000) : "");
        return nullptr;
    }
    int main() {
        int sum = 0;
        for (int i = 1; i <= 1000; i++)
            sum += toWord(i).length();
        cout<<sum<<endl;
        return 0;
    }

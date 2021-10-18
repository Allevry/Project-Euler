/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below the entered value(s). 
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int T;
    cin >> T;
    long N, s, s3, s5, s15, n3, n5, n15;
    while (T--)
    {
        cin >> N;
        n3 = (N - 1) / 3;
        n5 = (N - 1) / 5;
        n15 = (N - 1) / 15;
        s3 = 3 * (n3 * (n3 + 1) / 2);
        s5 = 5 * (n5 * (n5 + 1) / 2);
        s15 = 15 * (n15 * (n15 + 1) / 2);
        s = s3 + s5 - s15;
        cout << s << endl;
    }
    return 0;
}

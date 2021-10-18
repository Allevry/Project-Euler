/*
Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:
1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    long long int N[T], max = 0, sum;
    for (int i = 0; i < T; i++)
    {
        cin >> N[i];
        if (max < N[i])
            max = N[i];
    }
    vector<long long int> v;
    long int a = 0, b = 2, t;
    v.push_back(2);
    while (1)
    {
        t = b;
        b = 4 * b + a;
        a = t;
        if (b > max)
            break;
        v.push_back(b);
    }
    for (int j = 0; j < T; j++)
    {
        sum = 0;
        for (int i = 0; i < v.size() && v[i] < N[j]; i++)
        {
            sum += v[i];
        }
        cout << sum << endl;
    }
    return 0;
}

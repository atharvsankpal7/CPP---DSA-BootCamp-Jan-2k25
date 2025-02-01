#include <bits/stdc++.h>
using namespace std;

int main()
{
    // input
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    bool isPerfect = (sum == n);
    cout << isPerfect;
    return 0;
}
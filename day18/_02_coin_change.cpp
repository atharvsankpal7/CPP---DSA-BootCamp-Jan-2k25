#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A;
    cin >> A;
    vector<int> coins = {1, 2, 5, 10};
    vector<int> noOfWays(A + 1);
    noOfWays[0] = 1;
    for (auto coin : coins)
    {
        for (int i = coin; i <= A; i++)
        {
            noOfWays[i] += noOfWays[i - coin];
            cout << noOfWays[i] << "\t";
        }
        cout << endl;
    }
    cout << noOfWays[A];
    return 0;
}
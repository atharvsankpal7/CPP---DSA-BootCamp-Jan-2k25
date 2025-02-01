#include <bits/stdc++.h>
using namespace std;

int main()
{
    // input
    int size;
    cin >> size;
    vector<int> v(size);
    for (int i = 0; i < size; i++)
    {
        cin >> v[i];
    }
    // main logic
    unordered_map<int, int> um;
    // iterate over array
    for (int i = 0; i < size; i++)
    {
        int currE = v[i];
        um[currE]++;
    }
    // output
    for (auto it : um)
    {
        cout << it.first << " : " << it.second << endl;
    }

    return 0;
}
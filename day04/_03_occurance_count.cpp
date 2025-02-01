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
        // grabbing current element
        int currentE = v[i];
        // if current element exists in map -->value == 1 else value == value + 1
        if (um.find(currentE) != um.end())
        {
            // um.insert({currentE, 1});
            um[currentE] = 1;
        }
        else
        {
            // um[currentE] = um[currentE] + 1;
            um[currentE]++;
        }
    }
    // output
    for (auto it : um)
    {
        cout << it.first << " : " << it.second << endl;
    }

    return 0;
}
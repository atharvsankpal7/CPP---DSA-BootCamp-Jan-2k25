#include <bits/stdc++.h>
using namespace std;

int main()
{
    // input
    int size;
    cin >> size;
    vector<int> v(size);
    for(int i = 0;i < size; i++){
        cin >> v[i];
    }

    // main logic

    int currSum = v[0];
    int maxSum = v[0];
    // iterate over the vector
    for(int i = 1;i < size; i++){
        // currSum + currE, currE
        currSum = max(currSum + v[i], v[i]);
        maxSum = max(currSum, maxSum);
    }
    cout << maxSum << endl;
    return 0;
}
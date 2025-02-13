#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // calculate the maxCount

    int maxCount = 0;
    // starting from each of the index position
    for (int i = 0; i < n; i++)
    {
        int minVal = arr[i];
        // for each ending point
        for (int j = i; j < n; j++)
        {
            minVal = min(arr[j], minVal);
            int lengthOfSubArr = j - i + 1;
            int currCount = lengthOfSubArr * minVal;
            maxCount = max(maxCount, currCount);
        }
    }
    cout << maxCount << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
// max substring with unique characters only
int main()
{
    // input
    string str;
    cin >> str;

    // main logic
    int start = 0;
    // set --> log(n)
    // unordered_set -->o(1)
    // {1, 2, 3,}
    // {1.3, 3.5} float

    int max_size_substr = 0;

    unordered_set<char> us; // will store the substring's character

    // until the end reaches the string's final character
    for (int end = 0; end < str.size(); end++)
    {
        // check if the current character is in set or not
        while (us.find(str[end]) != us.end())
        { // str[end] is in the set
            us.erase(str[start]);
            start++;
        }
        us.insert(str[end]);
        int currSize = us.size();
        max_size_substr = max(max_size_substr, currSize);
    }
    // "abcabcdea"
    cout << max_size_substr << endl;
    return 0;
}
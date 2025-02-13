#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    // convert sentence to word's array
    vector<string> v;
    string currWord;
    for (auto c : str)
    {
        if (c == ' ')
        {
            v.push_back(currWord);
            currWord.clear();
            // currWord = "";
        }
        else
        {
            currWord += c;
        }
    }
    // "Hello Good morning Welcome you"
    v.push_back(currWord); // adds the last word
    // each word's length
    int maxOddLength = 0;
    vector<string> output;
    for (auto word : v)
    {
        if (word.size() % 2 == 1)
        { // word is odd length
            if (word.size() > maxOddLength)
            {
                output.clear();
                output.push_back(word);
                maxOddLength = word.size();
            }
            else if (word.size() == maxOddLength)
            {
                output.push_back(word);
            }
        }
    }
    // print the output
    for (auto str : output)
    {
        cout << str << endl;
    }
    return 0;
}
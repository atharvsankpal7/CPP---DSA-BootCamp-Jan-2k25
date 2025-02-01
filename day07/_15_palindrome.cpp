#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int l = 0;
    int r = s.size() - 1;
    while(r >= l){
        // check if both elements are same
        if(s[l] == s[r]){
            l++;
            r--;
        }else{
            cout << "not palindrome" << endl;
            return 0;
        }
    }
    cout << "palindrome" << endl;
    return 0;
}
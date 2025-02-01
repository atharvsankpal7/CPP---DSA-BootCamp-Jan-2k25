#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    if(s.size() != t.size()){
        cout << "not anagram";
        return 0;
    }
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    
    if(s == t){
        cout << "anagram";
    }else{
        cout << "not angram";
    }
    return 0;
}
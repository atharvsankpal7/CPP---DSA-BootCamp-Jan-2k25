#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int duplicate = n;
    // will reverse the number
    int reverseNum = 0;
    while(n != 0){ // o(n)
        reverseNum *= 10;
        int rem = n % 10;
        reverseNum += rem;
        n = n / 10;
    }
    if (reverseNum == duplicate){
        cout << "palindrome" << endl;
    }else{
        cout << "not palindrome" << endl;
    }
    return 0;
}
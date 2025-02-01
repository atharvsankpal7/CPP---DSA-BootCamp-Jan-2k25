/*

output --> initalize to 0
for each digit of number (till input becomes zero)
    output-->output * 10
    output -->add the latest unit place (input % 10)
    input --> cut the unit place (input = input / 10)
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int n;
    cin >> n;
    // main logic
    int reverseNum = 0;
    while(n != 0){ // o(n)
        reverseNum *= 10;
        int rem = n % 10;
        reverseNum += rem;
        n = n / 10;
    }
    cout << reverseNum << endl; 
    // total time complexity --> o(n)
    return 0;
}
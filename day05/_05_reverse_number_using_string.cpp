#include<bits/stdc++.h>
using namespace std;

int main(){
	// input
	int n;
	cin >> n;
	// convert given number to string
	string str = to_string(n); // o(n)
	// reverse 
	reverse(str.begin(), str.end()); // o(n / 2)
	int reverseNum = stoi(str);// o(n)
	cout << reverseNum;
	//total time complexity = o(n) + o(n) + o(n) = 3 * o(n) --> o(n)
	//total space complexity = o(n)
	return 0;
}
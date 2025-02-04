#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	cin >> str;
	// convert to int
	// get each character and - '0'
	int num = 0;
	for(auto c : str){
		num *= 10;
		int currNum = c - '0';
		num += currNum; 
	}
	cout << num % 11 << endl;


	return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
	//input
	string str;
	cin >> str;
	int n = str.size();
	// sort
	sort(str.begin(), str.end());
	// get frequency of each character
	unordered_map<char,int> um;
	for(auto c : str){
		um[c]++;
	}
	// create the output string
	string output;
	for(int i = 0;i < n - 1; i++){
		// check if character is duplicate
		if(str[i] != str[i + 1]){
			output += str[i];
			output += um[str[i]] + '0';
		}
	}
	// for last character
	if(str[n - 1] != str[n - 2]){
		output += str[n - 1];
		output += um[str[n - 1]] + '0';
	}
    cout << output << endl;
	return 0;
}
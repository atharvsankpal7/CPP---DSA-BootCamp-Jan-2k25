#include <bits/stdc++.h>
using namespace std;
int main(){

	string s, t;
	cin >> s >> t;

	if(s.size() != t.size()){
		cout << "not anagram";
		return 0;
	}

	unordered_map<char, int> charCount;
	for(auto e : s){
		charCount[e]++;
	}

	// check if count of each character is matching
	for(auto e : t){
		if(charCount.find(e) == charCount.end()){
			cout << "not anagram";
			return 0;
		}

		if(charCount[e] > 0){
			charCount[e]--;
		}else{
			cout << "not anagram";
			return 0;
		}
	}
	cout << "anagram" << endl;
	return 0;
}
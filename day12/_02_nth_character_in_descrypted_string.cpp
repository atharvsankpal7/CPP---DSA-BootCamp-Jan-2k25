#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	cin >> str;
	int n;
	cin >> n;
	// get each character
	string decp;
	for(int i = 0;i < str.size(); i += 2){
		// i + 1 --> num/ freq
		// i --> char
		int freq = str[i + 1] - '0';
		for(int j = 0;j < freq; j++){ // will add char according to frequency
			decp += str[i];
		}
	}
	
	if(n > decp.size()){
		cout << -1 << endl;
	}else{
		cout << decp[n - 1] << endl;
	}
	return 0;
}
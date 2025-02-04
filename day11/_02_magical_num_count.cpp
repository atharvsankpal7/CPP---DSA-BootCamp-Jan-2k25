#include<bits/stdc++.h>
using namespace std;
bool isMagical(int n){
	// convert to binary
	string str = bitset<8>(n).to_string();

	int sum = 0;
	// check each character
	for(auto c : str){
		if(c == '1'){
			sum += 2;
		}else{ // c == '0'
			sum += 1;
		}
	}
	if(sum % 2 == 0 ){// even
		return false;
	} else { // odd
		return true;
	}
}
int main(){

	int n;
	int count = 0;
	for(int i = 1;i <= n ;i++){
		if(isMagical(i)){
			count++;
		}
	}
	cout << count;
	return 0;
}
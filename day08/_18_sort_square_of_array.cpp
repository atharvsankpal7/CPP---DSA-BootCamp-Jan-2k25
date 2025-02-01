#include<bits/stdc++.h>
using namespace std;

int main(){
	int size;
	cin >> size;
	vector<int> v(size);
	for(int i = 0;i < size; i++){
		cin >> v[i];
	}
	// main logic
	vector<int> squares(size);
	int l = 0;
	int r = size - 1;
	int k = size - 1;
	while(k > 0){
		// left element is bigger
		if(v[l] * v[l] > v[r] * v[r]){
			squares[k] = v[l] * v[l];
			l++;
			k--;
		}else{ // right element is bigger
			squares[k] = v[r] * v[r];
			r--;
			k--;
		}
	}
	for(auto e : squares){
		cout << e << " ";
	}
}
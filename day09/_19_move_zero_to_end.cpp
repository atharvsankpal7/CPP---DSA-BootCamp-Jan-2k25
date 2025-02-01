#include<bits/stdc++.h>
using namespace std;
int main(){
	//input
	// [0, 1, 0, 3, 12]
	// [1, 3, 12, 0, 0]
	int n;
	cin >> n;
	vector<int> ip(n);
	for(int i= 0;i < n; i++){
		cin >> ip[i];
	}
	// main logic
	vector<int> sol(n);
	int j = 0;
	//iterate over input
	for(int i = 0;i < n;i++){
		// check if curr element is non-zero
		if(ip[i] != 0){
			sol[j] = ip[i];
            j++;
		}
	}
	for(auto e: sol){
		cout << e << " ";
	}
	return 0;
}
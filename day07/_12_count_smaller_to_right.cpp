#include <bits/stdc++.h>
using namespace std;

int main(){

	// input
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i = 0;i < n; i++){
		cin >> v[i];
	}

	// main logic
	vector<int> countSmaller(n);
	for(int i = 0;i < n; i++){
		// iterate to right side
		for(int j = i + 1; j < n; j++){
			// check if j is smaller
			if(v[i] > v[j]){
				countSmaller[i]++;
			}
		}
	}

	// output
	for(int i = 0;i < n; i++){
		cout << countSmaller[i] << " ";
	}
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	cin >> str;
	char f;
	cin >> f;
	int k;
	cin >> k;
    int n = str.size();
	// check for each starting point form a substring of length `k`
	int maxCount = 0;
	for(int i = 0;i <= n - k; i++){
		int count = 0;
		// form a substring
		for(int j = i; j < i + k; j++){
			// for this substring count fav song occurance
			if(f == str[j]){
				count++;
			}
		}
		maxCount = max(maxCount, count);
	}
	cout << maxCount;
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, k, curr;
	bool hasOut = false;
	cin >> n >> k;
	for(int i = 0;i < n;i++){
		cin >> curr;
		if(curr == k){
			cout << i << " ";
			hasOut = true;
		}
	}
	if(!hasOut)
		cout << "-1" << endl;
	return 0;
}

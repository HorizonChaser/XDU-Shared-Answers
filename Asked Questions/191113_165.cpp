#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int in;
	int max = -65535, pos = -1;
	for(int i = 0;i < n;i++){ 
		cin >> in;
		if(max < in){
			max = in;
			pos = i;
		} 
	}
	cout << n << " " << max << " " << pos << endl; 
	return 0;
} 

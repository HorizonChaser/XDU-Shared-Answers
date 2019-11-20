#include <bits/stdc++.h>
using namespace std;

int main(){
	string in, out;
	cin >> in;
	int n = in.length();
	for(int i = 0;i < n;i++){
	if(in[i] <= 90 && in[i] >= 65)
			out += in[i];
	if(in[i] <= 122 && in[i] >= 97){
			in[i] -= 32;
			out += in[i];
		}

	}
	sort(out.begin(), out.end());
	int pos = 0;
	for(int i = 0;i < n;i++){
		if(in[i] <= 90 && in[i] >= 65){
			cout << out[pos];
			pos++;
		}
		else{
			cout << in[i];
		}
	}
	cout << endl; 
	return 0;
} 

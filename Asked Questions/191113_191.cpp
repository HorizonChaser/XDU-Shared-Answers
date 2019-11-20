#include <bits/stdc++.h>
using namespace std;

int main(){
	string in;
	cin >> in;
	for(int i = 0;i < in.length();i++){
		if(in[i] >= 65 && in[i] <= 90){
			in[i] = 26-(in[i] - 64)+1+64;
			continue;
		}
		if(in[i] >= 97 && in[i] <= 122){
			in[i] = 26-(in[i] - 96)+1+96;
			continue;
		}
	}
	cout << in;
	return 0; 
}

#include <bits/stdc++.h>
using namespace std;

bool less_int(int a,int b){
	return b<a;
}

int main(){
	int n;
	cin >> n;
	int in[n], out[n];
	int pos = 0;
	for(int i = 0;i < n;i++){
		cin >> in[i];
		}

	for(int i = 0;i < n;i++){
		if(in[i] % 2 == 0){
			out[pos] = in[i];
			pos++;
		}
	}
	
	int div = pos;
	for(int i = 0;i < n;i++){
		if(in[i] % 2 != 0){
			out[pos] = in[i];
			pos++;
		}
	}
	
	sort(out, out+div, less_int);
	sort(out+div, out+n, less_int);
	
	for(int i = 0;i < n;i++)
		cout << out[i] << " ";
	cout << endl;
	return 0;
}

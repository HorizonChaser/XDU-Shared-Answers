#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int in[n];
	for(int i = 0;i < n;i++)
		cin >> in[i];
	sort(in, in+n);
	int comDiff = in[0] - in[1];
	for(int i = 1;i < n-1;i++){
		if((in[i] - in[i+1]) != comDiff){
			cout << "no" << endl;
			return 0;
		}
	} 
	cout << abs(comDiff) << endl;
	return 0;
}

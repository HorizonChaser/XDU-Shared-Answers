#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int in[n];
	for(int i = 0;i < n;i++)
		cin >> in[i];
	sort(in, in + n);
	int numSmall = 0, numBig = 0;
	for(int a = 0;a < n;a++){
		for(int b = 0;b < n;b++){
			if(in[a] > in[b])
				numSmall++;
			if(in[a] < in[b])
				numBig++;
		}
		if(numSmall == numBig){
			cout << in[a] << endl;
			return 0;
		}
		numSmall = numBig = 0;
	}
	cout << "-1" << endl;
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	int data[n][m];
	int out[16] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	for(int a = 0;a < n;a++){
		for(int b = 0;b < m;b++){
			cin >> data[a][b];
		}
	}
	
	for(int a = 0;a < n;a++){
		for(int b = 0;b < m;b++){
			out[data[a][b]]++;
		}
	}
	
	for(int i = 0;i < 16;i++){
		if(out[i] == 0)
			continue;
		cout << i << " " << out[i] << endl;
	}
	return 0;
}

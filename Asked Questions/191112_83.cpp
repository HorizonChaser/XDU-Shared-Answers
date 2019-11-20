#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	int in[n][m];
	for(int a = 0;a < n;a++){
		for(int b = 0;b < m;b++){
			cin >> in[a][b]; 
		}
	}
	for(int a = 0;a < m;a++){
		for(int b = n-1;b >= 0;b--){
			cout << in[b][a] << " ";
		}
		cout << endl;
	}
	return 0;
}

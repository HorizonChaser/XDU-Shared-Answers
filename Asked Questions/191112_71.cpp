#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m, t, k;
	cin >> n >> m >> t >> k;
	int data[n][m];
	bool flag[t];
	
	for(int i = 0;i < t;i++)
		flag[i] = false;
	
	for(int a = 0;a < n;a++){
		for(int b = 0;b < m;b++){
			cin >> data[a][b];
		}
	}
	
	int bCol, bRow, eCol, eRow;
	bool hasBegin = false;
	for(int a = 0;a < n;a++){
		for(int b = 0;b < m;b++){
			if(data[a][b] == k && hasBegin == false){
				bCol = a;
				bRow = b;
				hasBegin = true;
			}
			if(hasBegin == true && data[a][b] == k){
				eCol = a;
				eRow = b;
			}
		}
	}
	for(int a = bCol;a <= eCol;a++){
		for(int b = bRow;b <= eRow;b++){
			if(0 <= a-1 <= n && 0 <= b <= m)
				flag[data[a-1][b] - 1] = true;
			if(0 <= a+1 <= n && 0 <= b <= m)
				flag[data[a+1][b] - 1] = true;
			if(0 <= a <= n && 0 <= b-1 <= m)
				flag[data[a][b-1] - 1] = true;
			if(0 <= a <= n && 0 <= b+1 <= m)
				flag[data[a][b+1] - 1] = true;
		}
	}
	int sum = 0;
	for(int i = 0;i < t;i++){		
		if(flag[i] == true && (i+1) != k)
			sum++;
	}
	cout << sum << endl;
	return 0;
} 

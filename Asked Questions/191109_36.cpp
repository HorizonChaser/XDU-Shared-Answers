#include <bits/stdc++.h>
using namespace std;

bool less_int(int a,int b){
	return b<a;
}

int main(){
	int m, cnt = 0;
	cin >> m;
	int in[m][m];
	int out[m*2+2];
	
	for(int a = 0;a < m;a++)
		for(int b = 0;b < m;b++)
			cin >> in[a][b];
			
	for(int a = 0;a < m;a++){
		int sum = 0;
		for(int b = 0;b < m;b++){
			sum += in[a][b];
		}
		out[cnt] = sum;
		cnt++;
	}
	
	for(int a = 0;a < m;a++){
		int sum = 0;
		for(int b = 0;b < m;b++){	
			sum += in[b][a];
		}
		out[cnt] = sum;
		cnt++;
 
	}
	
	int sum = 0;
	
	for(int c = 0;c < m;c++){
		sum += in[c][c];
	}
	out[cnt] = sum;
	cnt++;

	sum = 0;
	
	for(int c = m-1;c >= 0;c--){
		int d = m-c-1;
		sum += in[c][d];
	}
	out[cnt] = sum;
 
	sum = 0;
	cnt++;
	
	sort(out, out+m*2+2, less_int);
	
	for(int a = 0;a < cnt;a++)
		cout << out[a] << " ";
	cout << endl;
	return 0;
}

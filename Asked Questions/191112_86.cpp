#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, colBegin, rowBegin, colEnd,rowEnd;
	cin >> n;
	bool out[100][100] = {false};
	for(int i = 0;i < n;i++){
		cin >> rowBegin >> colBegin >> rowEnd >> colEnd;
		for(int a = colBegin;a < colEnd;a++){
			for(int b = rowBegin;b < rowEnd;b++){
				out[a][b] = true;
			}
		}
	}
	
	int cnt = 0;
	
	for(int a = 0;a < 100;a++){
		for(int b = 0;b < 100;b++){
		//	cout << out[a][b]<< " ";
			if(out[a][b] == true)
				cnt++;
		}
	//	cout << endl;
	}
	cout << cnt << endl;
	return 0;
}

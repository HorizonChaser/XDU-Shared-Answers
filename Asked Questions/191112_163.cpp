#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int n, sum = 0;
	cin >> n;
	int data[n][n];
	if(n == 1){
		int a;
		cin>>a;
		cout<<a<<endl;
		return 0;
	}
	
	for(int a = 0;a < n;a++){
		for(int b = 0;b < n;b++){
			cin >> data[a][b];
		}
	}
	for(int a = 0;a < n;a++){
		sum += data[a][a];
	}
	for(int a = 0;a < n;a++){
			sum += data[a][n-1-a];
	}
	if(n%2 == 1)
		sum -= data[(n+1)/2-1][(n+1)/2-1];
	cout << sum << endl;
	return 0;
}

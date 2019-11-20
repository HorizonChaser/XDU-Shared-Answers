#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	cout << b/a << " ";
	for(int i = 3;i <= 10;i++){
		a = b;
		cin >> b;
		cout << b/a << " ";
	} 
	cout << endl;
	return 0;
}

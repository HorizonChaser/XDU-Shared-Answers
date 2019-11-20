#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int n;
	cin >> n;
	long int sum = 0;
	while (n >= 10){
		while(n){
			sum += n % 10;
			n /= 10;
		}
		n = sum;
		sum = 0;
	}
	cout << n << endl;
	return 0;
}

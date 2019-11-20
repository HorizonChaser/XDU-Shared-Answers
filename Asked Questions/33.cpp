#include <bits/stdc++.h>
using namespace std;

int fab(int n);
int isPrime(int in);

int main(){
	int n;
	cin >> n;
	int res = fab(n);
	if(isPrime(res))
		cout << "yes" << endl;
	else
		cout << res << endl;
	return 0;
} 

int fab(int n){
	if(n == 1)
		return 1;
	else if(n == 2)
		return 1;
	else
		return fab(n-1)+fab(n-2);
}

int isPrime(int in){
	double up = sqrt(in+0.5);
	for(int i = 2;i <= up+1;i++){
		if(in % i == 0)
			return 0;
	}
	return 1;
}

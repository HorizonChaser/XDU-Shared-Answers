#include <bits/stdc++.h>
using namespace std;

int function(int a, int b){
	int cnt = 0;
	if(a > b){
		int t = b;
		b = a;
		a = b;
	}
	if(a < 100)
		a = 100;
	for(int i = a;i <= b;i++){
		int power = 0, temp = i, sum = 0;
		while(temp){
			temp /= 10;
			power++;
		}
		temp = i;
		while(temp){
			sum += pow(temp%10, power);
			temp /= 10;
		}
		if(i == sum)
			cnt++;
		sum = 0;
	}
	return cnt;
}

int main(){
	int a, b;
	cin >> a >> b;
	cout << function(a, b);
	return 0;
}

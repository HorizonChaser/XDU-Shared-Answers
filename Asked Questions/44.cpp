#include <bits/stdc++.h>
using namespace std;

int b(int n){
	if(n == 1)
		return 1;
	else if(n == 2)
		return 2;
	else
		return b(n-1)+b(n-2);
}

int a(int n){
	if(n == 1)
		return 2;
	else if(n == 2)
		return 3;
	else
		return a(n-1)+a(n-2);
}

int main(){
	int n;
	cin >> n;
	double sum = 0;
	for(int i = 1;i <= n;i++){
		sum += ((double)a(i))/((double)b(i));
	}
	printf("%.2f",sum);
	return 0;
} 


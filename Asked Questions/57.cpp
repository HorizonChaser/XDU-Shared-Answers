#include <bits/stdc++.h>
using namespace std;

int fib(int n){
	if(n == 0)
		return 7;
	else if(n == 1)
		return 11;
	else
		return fib(n-1)+fib(n-2);
}

int main(){
	int n;
	cin >> n;
	printf("%d",fib(n));
	return 0;
} 


#include <bits/stdc++.h>
using namespace std;

int main(){
	int len, sum = 0;
	bool flag = true;
	char a[100];
	long long int num, temp; 
	int pos = 0;
	
	gets(a);
	len = strlen(a);
	
	for(int i = 0;i < len;i++)	
		sum += a[i] - '0';
			
	if(sum == 0){
		cout << "0" << endl;
		return 0;
	}
	
	for(int i = 0;i < len/2;i++){
		if(a[i] != a[len-i-1]){
			flag = false;
			break;
		}
	}
	
	if(flag){
		cout << sum << endl;
	}
	else
		cout << "no" << endl;
	return 0;
}

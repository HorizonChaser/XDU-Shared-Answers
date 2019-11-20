#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c;
A:
	scanf("a=%d\n", &a);
	scanf("b=%d\n", &b);
	scanf("c=%d", &c);
	if(a+b <= c || a+c <= b || b+c <= a){
		cout << "Input Error!" << endl;
		goto A;
	}
	int s = a+b+c;
	double area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("area=%f",area);
	return 0;
} 

#include <bits/stdc++.h>
using namespace std;

int main(){
	int x = 10, y = 9;
	int a, b, c;
	a = (x-- == y++)? x-- : y++;
	b = x++;
	c = y;
	cout << a << " " << b << " " << c << endl;
	return 0;
} 

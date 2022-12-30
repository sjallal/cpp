#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n){
	if(n < 2) return n;

	return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input1.txt", "r", stdin);
		freopen("output1.txt", "w", stdout);
	#endif

	int n;
	cin >> n;

	cout << fibonacci(n);

	return 0;
}
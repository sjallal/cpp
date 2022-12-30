#include <bits/stdc++.h>
using namespace std;

int fact(int n){
	if(n == 1) return 1;
	return n * fact(n-1);
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input1.txt", "r", stdin);
		freopen("output1.txt", "w", stdout);
	#endif

	int n;
	cin >> n;
	cout << n << endl;

	cout << fact(n);

	return 0;
}
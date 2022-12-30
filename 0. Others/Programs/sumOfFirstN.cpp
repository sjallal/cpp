#include <bits/stdc++.h>
using namespace std;

int fun(int n){
	if(n == 0) return 0;
	return fun(n-1) + n;
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input1.txt", "r", stdin);
		freopen("output1.txt", "w", stdout);
	#endif

	int n;
	cin >> n;
	cout << fun(n);

	return 0;
}
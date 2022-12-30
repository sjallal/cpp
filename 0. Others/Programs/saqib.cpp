#include <bits/stdc++.h>
using namespace std;


void fun(int cnt, int n){
	if(cnt > n) return;
	fun(cnt + 1, n);
	cout << cnt <<"\t Saqib" << endl;
}


int main(){
	#ifndef ONLINE_JUDGE
		freopen("input1.txt", "r", stdin);
		freopen("output1.txt", "w", stdout);
	#endif

	int n, cnt = 1;
	cin >> n;

	fun(cnt, n);

	return 0;
}
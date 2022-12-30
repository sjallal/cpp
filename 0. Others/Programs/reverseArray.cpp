#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int i, int n){
	if(i >= n/2) return;

	swap(arr[i], arr[n-i-1]);

	reverse(arr, i+1, n);
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input1.txt", "r", stdin);
		freopen("output1.txt", "w", stdout);
	#endif

	int n;
	cin >> n;

	int arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];

	reverse(arr, 0, n);

	for(int i = 0; i < 6; i++) cout << arr[i] << " ";

	return 0;
}
#include <bits/stdc++.h>
using namespace std;

void subSequence(int index, vector<int> &ds, int arr[], int n){
	if(index >= n) {
		for(auto it : ds) cout << it << " ";
		if(ds.size() == 0) {
			cout << "{}";
		}
		cout << endl;
		return;
	}

	ds.push_back(arr[index]); // Pick the index.
	subSequence(index + 1, ds, arr, n);
	ds.pop_back(); 			  // Don't pick it.
	subSequence(index + 1, ds, arr, n);
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
	
	vector<int> ds;
	subSequence(0, ds, arr, n);

	return 0;
}
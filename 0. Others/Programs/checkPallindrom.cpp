#include <bits/stdc++.h>
using namespace std;

int isPallindrom(string s, int i){
	if(i >= s.size()/2) return 1;

	if(s[i] != s[s.size() - i - 1]) return 0;

	return isPallindrom(s, i+1);
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input1.txt", "r", stdin);
		freopen("output1.txt", "w", stdout);
	#endif

	string s = "MADsM";

	cout << isPallindrom(s, 0);

	return 0;
}
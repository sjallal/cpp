#include <bits/stdc++.h>
using namespace std;


vector<long long> lcmAndgcd(long long A, long long B) {
	long long lcm = 0, gcd = 0;
	if(A < B){
		long long temp = A;
		A = B;
		B = temp;
	}

	for(lcm = A; lcm <= A * B; lcm += A)
		if(lcm % B == 0) break;

	for(gcd = B; gcd >= 1; gcd--)
		if(A % gcd == 0 && B % gcd == 0) break;
		
	vector<long long> result {lcm, gcd};
	return result;
}


int main(){
	#ifndef ONLINE_JUDGE
		freopen("../../#IO/input1.txt", "r", stdin);
		freopen("../../#IO/output1.txt", "w", stdout);
	#endif

	long long A, B;
	cin >> A;
	cin >> B;

	vector<long long> result = lcmAndgcd(A, B);

	cout << result[0] << " " << result[1];

	return 0;
}
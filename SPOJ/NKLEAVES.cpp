// Status	: Accepted (0 Points) (hardzal)
// Problems	: http://www.spoj.com/submit/NKLEAVES/
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code here
	int i, j, k, N, K, sum;
	sum = 0;
	k = 0;
	cin >> N >> K;
	for(i = 0; i < N; i++) {
		cin >> j;
		sum += j*k;
		if(k == K) k = 0;
		else k++;
	}
	cout << sum << endl;
	return 0;
}

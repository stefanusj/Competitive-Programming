// Status	: Accepted (0 Points) (hardzal)
// Problems	: http://www.spoj.com/submit/SIZECON
#include<bits/stdc++.h>
using namespace std;

int main() {
	int i, j, t, sum;
	sum = 0;
	// your code here
	cin >> t;
	for(i = 0; i < t; i++) {
		cin >> j;
		if(j > 0) {
			sum += j;
		}
	}
	cout << sum << endl;
	return 0;
}

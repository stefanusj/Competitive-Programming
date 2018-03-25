// Status	: Accepted (hardzal)
// Problems	: http://www.spoj.com/problems/INTEST
 
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, m, i, j;
	cin >> n >> m;
	j = 0;
	int x[n];
	for(i = 0; i < n; i++) {
		cin >> x[i];
		if(x[i] % m == 0) j++;
	}
	cout << j << endl;
}

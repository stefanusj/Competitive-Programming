// Status	: Accepted (hardzal)
// Problems	: http://www.spoj.com/problems/CPTTRN1

#include<bits/stdc++.h>
using namespace std;

int main() {
	int x, i, j, k;
	cin >> x;
	int p[x], q[x];
	for(i = 0; i < x; i++) {
		cin >> p[i] >> q[i];
	}
	for(i = 0; i < x; i++) {
		for(j = 0; j < p[i]; j++) {
			for(k = 0; k < q[i]; k++) {
				if(j % 2 == 0) {
					if(k % 2 == 0) {
						cout << "*";
					} else {
						cout << ".";
					}
				} else {
					if(k % 2 == 0) {
						cout << ".";
					} else {
						cout << "*";
					}
				}
			}
			cout << "\n";
		}
		cout << "\n";
	}
}

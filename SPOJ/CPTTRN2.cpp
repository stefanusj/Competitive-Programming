// Status	: Accepted (hardzal)
// Problems	: http://www.spoj.com/problems/CPTTRN2

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
				if(j==0||j==p[i]-1) {
					cout << "*";
				} else {
					if(k==0||(k==q[i]-1)){
						cout << "*";
					} else {
						cout << ".";
					}
				}
			}
			cout << "\n";
		}
		cout << "\n";
	}
}

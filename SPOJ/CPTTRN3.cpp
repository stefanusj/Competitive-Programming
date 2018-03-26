// Status	: Accepted (hardzal)
// Problems	: http://www.spoj.com/problems/CPTTRN3

#include<bits/stdc++.h>
using namespace std;

int main() {
	int i, j, k, m, n, s, t, number;
	cin >> t;
	int l[t], c[t];
	for(i = 0; i < t; i++) {
		cin >> l[i] >> c[i];
	}
	for(i = 0; i < t; i++) {
		for(j = 0; j <= l[i]; j++) {
			s = (c[i]*3);
			if(j < l[i]){
				for(k = 0; k <= s; k++) {
					cout << "*";
				}
				cout << "\n";
				for(k = 0; k < 2; k++){
					for(n = 0; n <= s; n++) {
						if(n==0||n%3==0) {
							cout << "*";
						} else {
							cout << ".";
						}
					}
					cout << "\n";
				}
			} else {
				for(n = 0; n <= s; n++) {
					cout << "*";
				}
				cout << "\n";
			}
		}
		cout << "\n";
	}
}

// Status	: Accepted (hardzal)
// Problems	: http://www.spoj.com/problems/CPTTRN3
#include<bits/stdc++.h>
using namespace std;

int main() {
	int i, j, l, m, n, s, t, number;
	int p[100], q[100];
	cin >> number;
	for(i = 0; i < number; i++) {
		cin >> p[i] >> q[i];
	}
	for(i = 0; i < number; i++) {
		for(m = 0; m <= p[i]; m++) {
			s = (q[i]*3);
			if(m < p[i]){
				for(n = 0; n <= s; n++) {
					cout << "*";
				}
				cout << "\n";
				for(l = 0; l < 2; l++){
					for(j = 0; j <= s; j++) {
						if(j==0||j%3==0) {
							cout << "*";
						} else {
							cout << ".";
						}
					}
					cout << "\n";
				}
			} else {
				for(t = 0; t <= s; t++) {
					cout << "*";
				}
				cout << "\n";
			}
		}
		cout << "\n";
	}
}

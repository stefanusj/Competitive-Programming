// Status	: Accepted (hardzal)
// Problems	: http://www.spoj.com/problems/CPTTRN3
<<<<<<< HEAD
=======

>>>>>>> 09ebccf9a3028eb8a906167d9a763013e044c712
#include<bits/stdc++.h>
using namespace std;

int main() {
<<<<<<< HEAD
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
=======
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
>>>>>>> 09ebccf9a3028eb8a906167d9a763013e044c712
							cout << "*";
						} else {
							cout << ".";
						}
					}
					cout << "\n";
				}
			} else {
<<<<<<< HEAD
				for(t = 0; t <= s; t++) {
=======
				for(n = 0; n <= s; n++) {
>>>>>>> 09ebccf9a3028eb8a906167d9a763013e044c712
					cout << "*";
				}
				cout << "\n";
			}
		}
		cout << "\n";
	}
}

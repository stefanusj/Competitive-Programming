// Status	: Accepted (hardzal)
// Problems	: http://www.spoj.com/problems/CPTTRN3
<<<<<<< HEAD

=======
>>>>>>> e37daa8f08cadf385a8e3682c55a4141bf8611b0
#include<bits/stdc++.h>
using namespace std;

int main() {
<<<<<<< HEAD
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
=======
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
>>>>>>> e37daa8f08cadf385a8e3682c55a4141bf8611b0
							cout << "*";
						} else {
							cout << ".";
						}
					}
					cout << "\n";
				}
			} else {
<<<<<<< HEAD
				for(n = 0; n <= s; n++) {
=======
				for(t = 0; t <= s; t++) {
>>>>>>> e37daa8f08cadf385a8e3682c55a4141bf8611b0
					cout << "*";
				}
				cout << "\n";
			}
		}
		cout << "\n";
	}
}

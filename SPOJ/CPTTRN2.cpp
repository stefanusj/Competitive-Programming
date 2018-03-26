// Status	: Accepted (hardzal)
// Problems	: http://www.spoj.com/problems/CPTTRN2

#include<bits/stdc++.h>
using namespace std;

int main() {
	int x, i, j, k;
<<<<<<< HEAD
	cin >> x;
	int p[x], q[x];
=======
	int p[100], q[100];
	cin >> x;
>>>>>>> e37daa8f08cadf385a8e3682c55a4141bf8611b0
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

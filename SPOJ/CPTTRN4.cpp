// Status	: Accepted (hardzal)
// Problems	: http://www.spoj.com/problems/CPTTRN4

#include<bits/stdc++.h>
using namespace std;

int main() {
	int i, j, m, n, s, number;
	cin >> number;
	int l[number], c[number], h[number], w[number];
	for(i = 0; i < number; i++) {
		cin >> l[i] >> c[i] >> h[i] >> w[i];
		w[i] += 1;
	}
	for(i = 0; i < number; i++) {
		for(m = 0; m <= l[i]; m++) {
			s = (c[i]*3);
			s = s > 3 ? s + 1 : s;
			if(m < l[i]){
				for(n = 0; n < s; n++) {
					cout << "*";
				}
				cout << "\n";
				for(n = 0; n < h[i]; n++){
					for(j = 0; j < s; j++) {
						if(j==0||j % w[i] == 0) {
							cout << "*";
						} else {
							cout << ".";
						}
					}
					cout << "\n";
				}
			} else {
				for(n = 0; n < s; n++) {
					cout << "*";
				}
				cout << "\n";
			}
		}
		cout << "\n";
	}
}

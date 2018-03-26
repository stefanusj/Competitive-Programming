// Status	: Accepted (hardzal)
// Problems	: http://www.spoj.com/problems/SMPDIV 

#include<bits/stdc++.h>
using namespace std;

int main() {
	int i, j;
	int number;
	// your code here
	cin >> number;
	int n[number], x[number], y[number];
	for(i = 0; i < number; i++) {
		cin >> n[i] >> x[i] >> y[i];
	}
	for(j = 0; j < number; j++) {
		for(i = x[j]; i < n[j]; i+=x[j]) {
			if(i % y[j] != 0) {
				cout << i << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}

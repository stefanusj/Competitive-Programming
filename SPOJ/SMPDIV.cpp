// Status	: Accepted (hardzal)
<<<<<<< HEAD
// Problems	: http://www.spoj.com/problems/SMPDIV 
=======
// Problems	: http://www.spoj.com/problems/SMPDIV
>>>>>>> 09ebccf9a3028eb8a906167d9a763013e044c712

#include<bits/stdc++.h>
using namespace std;

int main() {
<<<<<<< HEAD
	int i, j, n[100], x[100], y[100];
	int number;
	// your code here
	cin >> number;
=======
	int i, j;
	int number;
	// your code here
	cin >> number;
	int n[number], x[number], y[number];
>>>>>>> 09ebccf9a3028eb8a906167d9a763013e044c712
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

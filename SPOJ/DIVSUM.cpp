// Status	: Accepted (hardzal)
// Problems	: http://www.spoj.com/problems/DIVSUM

#include <bits/stdc++.h>
using namespace std;
int main() {
	long n, i, j, y;
	cin >> n;
	if(n >= 1 && n <= 500000) {
		int x;
		for(i = 0; i < n; i++) {
			cin >> x;
			
			y = 0;
			for(j = 1; j*j < x; j++) {
				if(x % j == 0) {
					y += j + x/j;
				}
			}
			if(j*j==x) y += j;
			y-=x;
			
			cout << y << endl;
		}
	}	
}
<<<<<<< HEAD
=======
// Understand ?
// Jadi gini ceritanya 
>>>>>>> e37daa8f08cadf385a8e3682c55a4141bf8611b0

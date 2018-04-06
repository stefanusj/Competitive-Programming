#include<iostream>
using namespace std;

int main() {
	int n, i, j, k;
	cin >> n;
	k = (n*2);
	if(n>=1 && n<=20) {
		for(i = 0; i <= k; i++) {
			for(j = 0; j <= k; j++) {
				if(i == n||j==n) {
					cout << "*";
				} else {
					cout << " ";
				}
			}
			cout << "\n";
		}
	}
}

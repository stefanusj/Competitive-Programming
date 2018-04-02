// Status: Accepted (riskimidiw)
// Problem : http://www.spoj.com/problems/CHITEST1/

#include <iostream>
using namespace std;

int main() {
	int x;
	double a, b;

	cin >> x;
	for(int i=0; i<x; i++) {
		cin >> a >> b;
		cout << a+b << endl;
	}

	return 0;
}

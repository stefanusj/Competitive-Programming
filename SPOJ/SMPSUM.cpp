// Status: Accepted (riskimidiw)
// Problem : http://www.spoj.com/problems/SMPSUM/

#include <iostream>
using namespace std;

int main() {
	
	// your code here
	int a, b, sum;
	cin >> a >> b;
	
	sum = 0;
	for(int i=a; i<=b; i++) {
		sum += i*i;
	}
	cout << sum << endl;

	return 0;
}
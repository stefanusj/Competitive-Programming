// Status: Accepted (riskimidiw)
//Problem : http://www.spoj.com/problems/SMPWOW/

#include <iostream>
using namespace std;

int main() {
	
	// your code here
	int x;
	cin >> x;
	
	cout << "W";
	for(int i=0; i<x; i++) {
		cout << "o";
	}
	cout << "w" << endl;

	return 0;
}
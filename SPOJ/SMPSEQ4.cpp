// Status: Accepted (riskimidiw)
// Problem : http://www.spoj.com/problems/SMPSEQ4/

#include <iostream>
using namespace std;

int main() {
	
	// your code here
	int arrA[201] = {0};
	int arrB[201] = {0};
	int x, val;
	
	cin >> x;
	for(int i=0; i<x; i++) {
		cin >> val;
		arrA[val+100]++;
	}
	
	cin >> x;
	for(int i=0; i<x; i++) {
		cin >> val;
		arrB[val+100]++;
	}

	for(int i=0; i<201; i++) {
        if(arrA[i] == arrB[i] && arrA[i] != 0) {
			cout << i-100 << " ";
		}
	}
    cout << endl;

	return 0;
}
// Status: Accepted (riskimidiw)
// Problem : http://www.spoj.com/problems/SMPSEQ5/

#include <iostream>
#include <math.h>
using namespace std;

int main() {
	
	// your code here
	int arrA[201] = {0};
	int arrB[201] = {0};
	int x, y, val;
	
	cin >> x;
	for(int i=0; i<x; i++) {
		cin >> val;
		arrA[i] = val;
	}

    cin >> y;
    for(int i=0; i<y; i++) {
		cin >> val;
		arrB[i] = val;
	}

    for(int i=0; i<min(x, y); i++) {
        if(arrA[i] == arrB[i]) {
            cout << i+1 << " ";
        }
    }
    cout << endl;

	return 0;
}
// Status  : Accepted (riskimidiw)
// Problem : http://www.spoj.com/problems/PRIME1/

#include <iostream>
using namespace std;

bool isPrime(long x) {
    if(x < 2) return false;
    for(int i=2; i*i<=x; i++) {
        if(x % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    long m, n;
    
    cin >> t;
    for(int i=0; i<t; i++) {
        cin >> m >> n;
        for(int j=m; j<=n; j++) {
            if(isPrime(j)) {
                cout << j << endl;
            }
        }
        cout << endl;
    }
    
    return 0;
}

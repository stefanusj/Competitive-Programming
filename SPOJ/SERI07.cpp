// Status	: Accepted (riskimidiw)
// Problems	: http://www.spoj.com/problems/SERI07/

#include <iostream>
using namespace std;

bool isPrime(int n) {
    for(int i=2; i<n; i++) {
        if(n%i == 0 || n == 1) {
            return false;
        }
    }
    return true;
}

int getPrime(int n) {
    int i = 1, count = 0;
    while(count != n) {
        i++; 
        if(isPrime(i)) {
            count++;
        }
    }
    return i;
}

int main() {
    int t, n;
    
    cin >> t;
    for(int i=0; i<t; i++) {
        cin >> n;
        for(int j=0; j<n; j++) {
            int ans = 1, x = 1, y=getPrime((3*j)+1);
            while(x<=3) {
                if(isPrime(y) && x == 3) {
                    ans += y;
                    x++;
                }else if(isPrime(y)) {
                    ans *= y;
                    x++;
                }
                y++;
            }
            cout << ans << " ";
        }
        cout << endl;
    }
    
    return 0;
}

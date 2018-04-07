// Status  : Accepted
// Problem : Problem/Hex-Number.md

#include <iostream>
using namespace std;

char toChar(int n) {
    string hex = "0123456789abcdef";
    return hex[n];
}

string toHex(int n) {
    int r = n % 16;
    if(n - r == 0) {
        return string(1, toChar(n));
    }
    return toHex(n/16) + toChar(n%16);
}

int main(){
    int n, m;
    
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> m;
        cout << toHex(m) << endl;
    }
    
    return 0;
}

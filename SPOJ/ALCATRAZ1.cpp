// Status   : Accepted (riskimidiw)
// Problem  : http://www.spoj.com/problems/ALCATRAZ1

#include <iostream>
using namespace std;

int main() {
    string s;
    int sum, n;
    
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> s;
        sum = 0;
        for(int j=0; j<s.length(); j++) {
            sum += s[j]-48;
        }    
        cout << sum << endl;
    }
    
    return 0;
}

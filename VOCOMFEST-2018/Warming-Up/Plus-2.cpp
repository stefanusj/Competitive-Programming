// Status  : Accepted
// Problem : Problem/Plus.md

#include <iostream>
using namespace std;

int main() {
    int n;
    
    cin >> n;
    for(int i=0; i<2*n+1; i++) {
        for(int j=0; j<2*n+1; j++) {
            (i==n) || (j==n) ? cout << "+" : cout << " ";
        }
        cout << endl;
    }
    return 0;
}

// Status: Accepted (riskimidiw)
// Problem : http://www.spoj.com/problems/SMPCPH1/

#include <iostream>
using namespace std;

int main() {
    int n, m;
    string key, cipher[100];

    cin >> n; cin.ignore();
    getline(cin, key);

    cin >> m; cin.ignore();
    for(int i=0; i<m; i++) {
        getline(cin, cipher[i]);
        for(int j=0; j<cipher[i].length(); j++) {
            for(int k=0; k<key.length(); k++) {
                if(cipher[i][j] == key[k]) {
                    int t;
                    if(k+1<=(n-1)) {
                        t = k + 1;
                        cipher[i][j] = key[t];
                        break;
                    } else{
                        t = k % (n-1);
                        cipher[i][j] = key[t];
                        break;
                    }
                }
            }
        }
        cout << cipher[i] << endl;
    }

	return 0;
}

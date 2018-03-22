// Status: Runtime Error
// Problem: http://www.spoj.com/submit/PRIME1/

#include <iostream>

using namespace std;

main(){
    int t;
    long m, n;
    cin >> t;
    while(t--){
        cin >> m >> n;

        bool prime[n];

        for(long i=2;i<=n;i++){
            prime[i] = true;
        }

        for(long i=2;i<=n;i++){
            if(prime[i]){
                for(long j=i*2;j<=n;j+=i){
                    prime[j] = false;
                }
                if(i>=m) cout << i << endl;
            }
        }
        cout << endl;
    }
}

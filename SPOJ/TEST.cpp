// Status: Accepted (Stefanus Julianto)
// Problem: http://www.spoj.com/submit/TEST/

#include <iostream>

using namespace std;

main(){
    int n;
    bool output = true;
    while(cin >> n){
        if(output){
            if(n != 42) cout << n << endl;
            else output = false;
        }
    }
}

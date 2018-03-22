// Status: Accepted (Stefanus Julianto)
// Problem: http://www.spoj.com/submit/STRHH/

#include <iostream>
#include <string.h>

using namespace std;

main(){
    int t;
    char word[200];
    cin >> t;
    while (t--) {
        cin >> word;
        for (int i=0;i<strlen(word)/2;i++){
            if(i%2==0){
                cout << word[i];
            }
        }
        cout << endl;
    }
}

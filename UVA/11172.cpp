// Status: Accepted (Stefanus Julianto)
// Problem: https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2113

#include<iostream>

using namespace std;

main(){
    int n, a, b;
    cin >> n;
    while(n>0){
        cin >> a >> b;
        if(a<b) cout << '<' << endl;
        else if (a>b) cout << '>' << endl;
        else cout << '=' << endl;
        n--;
    }
}

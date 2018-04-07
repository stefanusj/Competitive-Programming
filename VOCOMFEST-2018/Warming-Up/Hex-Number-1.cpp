// Status  : Accepted
// Problem : Problem/Hex-Number.md

#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int b;
        cin>>b;
        arr.push_back(b);
    }

    for(int i=0; i<n; i++){
        cout<<hex<<(arr.at(i))<<endl;
    }
    return 0;
}
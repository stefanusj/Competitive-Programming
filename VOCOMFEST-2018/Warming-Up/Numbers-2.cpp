// Status  : Accepted
// Problem : Problem/Numbers.md

#include <iostream>
using namespace std;

int main() {
    int arr[3];
    
    cin >> arr[0] >> arr[1] >> arr[2];
    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {
            if(arr[j] < arr[j+1]) {
                int tmp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;
    
    return 0;
}

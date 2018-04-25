// Status   : Accepted (hardzal)
// Problem  : https://training.ia-toki.org/training/curriculums/2/courses/3/chapters/27/problems/113/
#include <iostream>
using namespace std;

bool isPrime(long long x) {
    if(x < 2) return false;
    int i = 2;
    while(i*i <= x) {
    	if(x % i == 0) return false;
    	i++;
	}
    return true;
}

int main(){
    long n;
    while(cin >> n){
    	isPrime(n) ? cout << "YA" : cout << "TIDAK";
    	cout << endl;
    }
}

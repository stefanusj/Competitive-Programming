// Status   : Accepted (hardzal)                                                                     
// Problem  : https://training.ia-toki.org/training/curriculums/2/courses/3/chapters/27/problems/112/
#include <iostream>
#include <math.h>
using namespace std;

bool isLikePrime(long x) {
    int j = 0;
    for(int i = 1; i <= sqrt(x); i++) {
    	if(x % i == 0) {
    		j += 1;
		}
	}
	if(j > 2) return false;
	return true;
}

int main(){
    long n;
    int t;
    cin >> t;
	for(int i = 1; i <= t; i++) {
    	cin >> n;
    	isLikePrime(n) ? cout << "YA" : cout << "TIDAK";
    	cout << endl;
    }
}

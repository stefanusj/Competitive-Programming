// Status   : Accepted (hardzal)
// Problem  : https://training.ia-toki.org/training/curriculums/2/courses/2/chapters/23/problems/102/

#include<iostream>
using namespace std;
long factorial(int n) {
	if(n == 1||n==0){
		return 1;
	} else{
		return(n*factorial(n-1));
	}
}
int main() {
	int x;
	cin >> x;
	if(x > 10) {
		cout << "ditolak" << endl;
	} else {
		cout << factorial(x) << endl;
	}
} 

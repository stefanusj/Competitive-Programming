// Status   : Accepted (hardzal)
// Problem  : https://training.ia-toki.org/training/curriculums/2/courses/2/chapters/19/problems/98/

#include<iostream>
using namespace std;

int main() {
	int N, i, j, k;
	cin >> N;
	for(i = N; i > 0; i--) {
		for(j = 0; j < i-1; j++) {
			cout << " ";
		}
		for(k = j; k < N; k++ ) {
			cout << "*";
		}
		cout << endl;
	}
}

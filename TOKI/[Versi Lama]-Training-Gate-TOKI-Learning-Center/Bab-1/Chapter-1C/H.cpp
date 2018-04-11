// Status   : Accepted (hardzal)
// Problem  : https://training.ia-toki.org/training/curriculums/2/courses/2/chapters/19/problems/101/

#include<iostream>
using namespace std;

int main() {
	int N, i, j, k=0;
	cin >> N;
	for(i = 1; i <= N; i++) {
		if(N % i == 0) cout << N / i << endl;
	}
	return 0;
}

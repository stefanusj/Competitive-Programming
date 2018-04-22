// Status   : Accepted (hardzal)
// Problem  : https://training.ia-toki.org/training/curriculums/2/courses/2/chapters/22/problems/101/

#include<iostream>
using namespace std;

int main() {
	int N, i;
	cin >> N;
	for(i = 1; i <= N/2; i++) {
		if(N % i == 0) cout << N / i << endl;
	}
	cout << N / N << endl;
	return 0;
}

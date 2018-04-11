// Status   : Accepted (hardzal)
// Problem  : https://training.ia-toki.org/training/curriculums/2/courses/2/chapters/19/problems/100/

#include<iostream>
using namespace std;

int main() {
	int N, K, i;
	cin >> N >> K;
	for(i = 1; i <= N; i++) {
		if(i % K == 0) cout << "* ";
		else {
			if(i == N) cout << i;
			else cout << i << " ";
		}
	}
	cout << endl;
}

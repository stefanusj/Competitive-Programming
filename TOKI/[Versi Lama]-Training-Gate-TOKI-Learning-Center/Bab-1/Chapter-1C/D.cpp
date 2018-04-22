// Status   : Accepted (hardzal)
// Problem  : https://training.ia-toki.org/training/curriculums/2/courses/2/chapters/22/problems/97/

#include<iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	for(int i = 1; i <= N; i++) {
		if(i % 10 == 0) {
			continue;
		} else if(i == 93) {
			cout << "ERROR" << endl;
			break;
		} else {
			cout << i << endl;
		}
	}
}

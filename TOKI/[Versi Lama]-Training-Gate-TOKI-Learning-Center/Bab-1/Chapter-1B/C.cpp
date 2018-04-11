// Status   : Accepted (hardzal)
// Problem  : https://training.ia-toki.org/training/curriculums/2/courses/2/chapters/19/problems/90/

#include<iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	if(N == 0) {
		cout << "nol" << endl;
	} else {
		if(N > 0) {
			cout << "positif" << endl;
		} else {
			cout << "negatif" << endl;
		}
	}
}

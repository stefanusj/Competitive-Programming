// Status   : Accepted (hardzal)
// Problem  : https://training.ia-toki.org/training/curriculums/2/courses/2/chapters/19/problems/96/

#include<iostream>
using namespace std;

int main() {
	int N, bil, jumlah;
	
	jumlah = 0;
	cin >> N;
	for(int i = 0; i < N; i++) {
		cin >> bil;
		jumlah += bil;
	}
	cout << jumlah << endl;	
}

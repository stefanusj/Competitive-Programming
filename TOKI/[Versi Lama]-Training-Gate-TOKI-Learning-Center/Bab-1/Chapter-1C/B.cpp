// Status   : Accepted (hardzal)
// Problem  : https://training.ia-toki.org/training/curriculums/2/courses/2/chapters/19/problems/95/

#include<iostream>
using namespace std;

int main() {
	int N, jumlah;
	
	jumlah = 0;
	
	while(cin >> N) {
		jumlah += N;
	}
	cout << jumlah << endl;	
}

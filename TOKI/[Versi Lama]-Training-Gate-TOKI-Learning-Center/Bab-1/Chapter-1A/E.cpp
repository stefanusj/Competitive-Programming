// Status   : Accepted (hardzal)
// Problem  : https://training.ia-toki.org/training/curriculums/2/courses/2/chapters/19/problems/87/

#include<iostream>
using namespace std;

int main() {
	int a[3], b[3], c[3];
	cin >> a[0] >> a[1] >> a[2];
	cin >> b[0] >> b[1] >> b[2];
	cin >> c[0] >> c[1] >> c[2];
	for(int i = 0; i < 3; i++) {
		cout << a[i] << " " << b[i] << " " << c[i] << endl;
	}
}

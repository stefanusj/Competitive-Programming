// Status   : Accepted (hardzal)
// Problem  : https://training.ia-toki.org/training/curriculums/2/courses/3/chapters/25/problems/111/

#include <bits/stdc++.h>
using namespace std;

int main() {
	string y;
	getline(cin, y);
	for(int i = y.length()-1; i >= 0; i--) {
		cout << y[i];
	}
	cout << endl;
}

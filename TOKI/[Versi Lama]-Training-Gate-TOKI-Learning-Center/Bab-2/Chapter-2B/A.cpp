// Status   : Accepted (hardzal)
// Problem  : https://training.ia-toki.org/training/curriculums/2/courses/3/chapters/25/problems/107/

#include<iostream>
#include<vector>
using namespace std;

int main() {
	int x, y, i, j, p;
	cin >> x >> y;
	vector< vector<int> >mtr(x);
	for(i = 0; i < x; i++) {
		for(j = 0; j < y; j++) {
			cin >> p;
			mtr[i].push_back(p);
		}
	}
	for(i = 0; i < y; i++) {
		for(j = x-1; j >= 0; j--) {
			cout << mtr[j][i];
			if(j!=0) cout << " ";
		}
		cout << endl;
	}
} 

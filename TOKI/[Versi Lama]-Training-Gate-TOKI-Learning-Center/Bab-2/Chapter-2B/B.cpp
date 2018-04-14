// Status   : Accepted (hardzal)
// Problem  : https://training.ia-toki.org/training/curriculums/2/courses/3/chapters/25/problems/108/

#include<iostream>
#include<vector>
using namespace std;

int main() {
	int x[1], y[1], i, j, p, a;
	cin >> x[0] >> y[0];
	vector< vector<int> >mtrA(x[0]);
	for(i = 0; i < x[0]; i++) {
		for(j = 0; j < y[0]; j++) {
			cin >> p;
			mtrA[i].push_back(p);
		}
	}
	cin >> x[1] >> y[1];
	vector< vector<int> >mtrB(x[1]);
	for(i = 0; i < x[1]; i++) {
		for(j = 0; j < y[1]; j++) {
			cin >> p;
			mtrB[i].push_back(p);
		}
	}
	vector<vector<int> >mtr(x[0]);
	for(i = 0; i < x[0]; i++) {
		for(j = 0; j < y[1]; j++) {
			mtr[i].push_back(0);
			for(a = 0; a < y[0]; a++) {
				mtr[i][j] = mtr[i][j] + (mtrA[i][a]*mtrB[a][j]);
			}
			cout << mtr[i][j];
			if(j < y[1]-1) cout << " ";
		}
		cout << endl;
	}
} 

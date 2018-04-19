// Status   : Accepted (hardzal)
// Problem  : https://training.ia-toki.org/training/curriculums/2/courses/3/chapters/27/problems/116/
#include <bits/stdc++.h>

using namespace std;

int main() {
	int x, i;
	double MAX, MIN, SUM;
	SUM = 0;
	cin >> x;
	vector<double> n(x);
	for(i = 0; i < x; i++) {
		cin >> n[i];
		SUM += n[i];
	}
	MAX = n[0];
	MIN = n[0];
	for(i = 1;i < x; i++) {
		if(n[i] >= MAX) {
			MAX = n[i];
		}
		
		if(n[i] <= MIN) {
			MIN = n[i];
		}
	}
	
	cout << fixed << setprecision(2) << MIN << " " << MAX << " " << SUM/x << endl;
}

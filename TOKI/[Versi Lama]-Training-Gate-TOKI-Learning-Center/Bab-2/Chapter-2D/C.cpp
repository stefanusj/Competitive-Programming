// Status   : Accepted (hardzal)
// Problem  : https://training.ia-toki.org/training/curriculums/2/courses/3/chapters/27/problems/114/
#include <bits/stdc++.h>

using namespace std;

int main() {
	int x;
	bool t;
	cin >> x;
	while(x > 1) {
		if(x % 2 == 0) {
			t = true; 
			x/=2;
		} else {
			t = false;	
			break;
		}
	}
	if(t) cout << "TRUE" << endl;
	else cout << "FALSE" << endl;
}

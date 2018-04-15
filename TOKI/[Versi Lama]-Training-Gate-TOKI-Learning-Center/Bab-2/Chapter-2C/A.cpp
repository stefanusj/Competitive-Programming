// Status   : Accepted (hardzal)
// Problem  : https://training.ia-toki.org/training/curriculums/2/courses/3/chapters/25/problems/109/

#include<iostream>
#include<vector>
using namespace std;

int main() {
	int i, x, res;
	cin >> x; 
	vector<int>word(x);
	for(i = 0; i < x; i++){	
		cin >> word[i];
	}
	for(i = 0; i < x; i++){	
		res = 0;
		while(word[i]!=0) {
			res = res*10;
			res = res+word[i]%10;
			word[i] = word[i]/10;
		}
		cout << res << endl;
	}
} 

#include<iostream>
// Status   : Accepted (hardzal)
// Problem  : https://training.ia-toki.org/training/curriculums/2/courses/3/chapters/24/problems/105/

#include<vector>
using namespace std;
int main () {
	vector<int> arr;
	int p;
	while(cin >> p) {
		arr.push_back(p);
	}
	for(int i = arr.size()-1; i >=0; i--) {
		cout << arr[i] << endl;
	}
	
}

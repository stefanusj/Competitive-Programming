// Status   : Accepted (hardzal)
// Problem  : https://training.ia-toki.org/training/curriculums/2/courses/2/chapters/19/problems/92/

#include<iostream>
#include<math.h>
using namespace std;

int main() {
	long int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	cout << abs(x1-x2)+abs(y1-y2) << endl;	
}

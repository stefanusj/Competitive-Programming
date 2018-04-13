// Status   : Accepted (hardzal)
// Problem  : https://training.ia-toki.org/training/curriculums/2/courses/2/chapters/19/problems/104/

#include<iostream>
using namespace std;
void swap(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main() {
	int x, y;
	cin >> x >> y;
	swap(x, y);
	cout << x << " " << y << endl;
} 

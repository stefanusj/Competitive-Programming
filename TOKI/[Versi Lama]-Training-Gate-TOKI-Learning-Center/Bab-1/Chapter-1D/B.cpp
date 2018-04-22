// Status   : Accepted (hardzal)
// Problem  : https://training.ia-toki.org/training/curriculums/2/courses/2/chapters/23/problems/103/

#include<iostream>
using namespace std;
void tulisJawaban(int n) {
	switch(n) {
		case 1 ... 9:
			cout << "satuan";
			break;
		case 10 ... 99:
			cout << "puluhan";
			break;
		case 100 ... 999:
			cout << "ratusan";
			break;
		case 1000 ... 9999:
			cout << "ribuan";
			break;
		case 10000 ... 99999:
			cout << "puluhribuan";
			break;
	}
	cout << endl;
}
int main() {
	int x;
	while(cin >> x){
		tulisJawaban(x);
	}
} 

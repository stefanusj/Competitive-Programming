#include<bits/stdc++.h>
using namespace std;
void quickSort(int *arr, int kiri, int kanan) {
	int tmp, i = kiri, j = kanan;
	int pivot = arr[(kiri+kanan)/2];
	while(i <= j) {
		while(arr[i] < pivot) {
			i++;
		}
		while(arr[j] > pivot) {
			j--;
		}
		if(i <= j) {
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			i++;
			j--;
		}
	}
	if(kiri < j) {
		quickSort(arr, kiri, j);
	}
	if(kanan > i) {
		quickSort(arr, i, kanan);
	}
}

int main() {
	int x[3], i;
	for(i = 0; i < 3; i++) {
		cin >> x[i];
	}
	quickSort(x, 0, 2);
	for(i = 2; i >= 0; i--) {
		cout << x[i] << " ";
	}
	cout << endl;
}

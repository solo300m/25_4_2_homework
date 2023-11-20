#include "gpu.h"

void display(vector<int>& ptr) {
	cout << "Вывод на консоль" << endl;
	for (int t : ptr) {
		cout << t << "\t";
	}
	cout << endl;
}
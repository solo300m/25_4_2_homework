

#include "cpu.h"

int cpuCompute(vector<int>& ptr) {
	cout << "Функция сложения";
	int sum = 0;
	if (!ptr.empty()) {
		for (int t : ptr) {
			sum += t;
		}
	}
	return sum;
}
#include "kbd.h"

vector<int> inputKbd() {
	vector<int> rez;
	cout << "Функция ввода с клавиатуры";
	int tmp = 0;
	for (int i = 0; i < 8; i++) {
		cout << "Ввод -> " ;
		cin >> tmp;
		rez.push_back(tmp);
	}
	return rez;
}
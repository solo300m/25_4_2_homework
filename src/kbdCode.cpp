#include "kbd.h"

vector<int> inputKbd() {
	vector<int> rez;
	cout << "������� ����� � ����������";
	int tmp = 0;
	for (int i = 0; i < 8; i++) {
		cout << "���� -> " ;
		cin >> tmp;
		rez.push_back(tmp);
	}
	return rez;
}
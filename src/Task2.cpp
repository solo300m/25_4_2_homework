// Task2.cpp: ���������� ����� ����� ��� ����������.
//


#include <locale.h>
#include <iostream>
#include <vector>
#include "Task2.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "������� ��������� �������" << endl;
	cout << "1-sum (���������� �����), 2-save (���������� � �����), 3-load (��������� �� �����), 4-input(������ � ����������), 5-display (������� � �������), 0-exit (����� �� ���������)" << endl;
	
	while (true)
	{
		cout << "���� ������� -> ";
		cin >> inputMy;
		switch (inputMy)
		{
		case 1: {
			sum = cpuCompute(ramPtr);
			cout << "����� �������� �����: " << sum << endl;
			break;
		}
		case 2: {
			saveCheck = saveDisk(ramPtr, path);
			break;
		}
		case 3: {
			ram = loadDisk(path);
			break;
		}
		case 4: {
			ram = inputKbd();
			break;
		}
		case 5: {
			display(ramPtr);
			break;
		}
		case 0: {
			return 0;
		}
		default:
			cout <<"������� �������� �������. ���������� ��� ���." << endl;
			break;
		}
	}
	return 0;
}

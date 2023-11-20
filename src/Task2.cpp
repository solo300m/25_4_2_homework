// Task2.cpp: определяет точку входа для приложения.
//


#include <locale.h>
#include <iostream>
#include <vector>
#include "Task2.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите следующие команды" << endl;
	cout << "1-sum (вычисление суммы), 2-save (сохранение в файле), 3-load (загрузить из файла), 4-input(ввести с клавиатуры), 5-display (вывести в консоль), 0-exit (выход из программы)" << endl;
	
	while (true)
	{
		cout << "Ввод команды -> ";
		cin >> inputMy;
		switch (inputMy)
		{
		case 1: {
			sum = cpuCompute(ramPtr);
			cout << "Сумма значений равна: " << sum << endl;
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
			cout <<"Введена неверная команда. Попробуйте еще раз." << endl;
			break;
		}
	}
	return 0;
}

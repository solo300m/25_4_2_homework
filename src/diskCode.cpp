#include "disk.h"
#include "gpu.h"


bool saveDisk(vector<int>& ptr, string path) {
	cout << "Функция сохранения данных в файл";
	ofstream file(path);
	if (file.is_open() && !ptr.empty()) {
		for (int t : ptr) {
			file << t << endl;
		}
		file.close();
		return true;
	}	
	return false;
}
vector<int> loadDisk(string path) {
	vector<int> rez;
	cout << "Функция загрузки данных из файла";
	ifstream file(path);
	if (file.is_open()) {
		 for(int i = 0; i < 8; i++)
		 {
			int tmp;
			file >> tmp;
			rez.push_back(tmp);
		 }
		file.close();		
	}
	
	return rez;
}
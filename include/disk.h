#pragma once
#include <vector>
#include <cstring>
#include <iostream>
#include <fstream>

using namespace std;

bool saveDisk(vector<int>& ptr, string path);
vector<int> loadDisk(string path);
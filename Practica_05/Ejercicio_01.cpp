#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

int i;

vector<int> loadVoltData(int n)
{
	srand(time(0));
	vector<int> array;
	for (int i = 0; i < n; i++)
	{
		array.push_back(rand % (220 - 20 + 1) + 20);
	}
	return array;	
}

vector<int> loadTempData(int z)
{
	srand(time(0));
	vector<int> array2;
	for (int i = 0; i < z; i++)
	{
		array2.push_back(rand % (100 + 1));
	}
	return array2;	
}

vector<int> loadYear(int x)
{
	srand(time(0));
	vector<int> array3;
	for (int i = 0; i < 100; i++)
	{
		array3.push_back(rand % (2025 - 1980 + 1) + 1980);
	}
	return array3;	
}

int main()
{
	srand(time(0));
	int n, z;
	cout << "Por favor, ingresa 'n': ";
	cin >> n;
	cout << "Por favor, ingresa 'z': ";
	cin >> z;
	vector
}

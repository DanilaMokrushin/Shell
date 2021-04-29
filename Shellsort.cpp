// Shellsort.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include<vector>

using namespace std;

void ShellSort(vector<int>& Vector) {
	int n = Vector.size();
	for (int gap = n / 2; gap > 0; gap /= 2)
	{
		for (int i = gap; i < n; i ++)
		{
			int v = Vector[i];
			int j = i;
			while (j >= gap && Vector[j - gap] > v) {
				Vector[j] = Vector[j - gap];
				j -= gap;
			}
			Vector[j] = v;
		}
	}
}

vector<int> shellsort_mokrushin(vector<int> arr) {
	ShellSort(arr);
	return arr;
}
int main() {
vector<int> myArr;
int index, number, input;

cout << "Enter the number of elements in the array : ";
cin >> number;

for (int index = 0; index < number; index++) {
	cin >> input;
	myArr.push_back(input);
}

ShellSort(myArr);
for (int index = 0; index < myArr.size(); index++) {
	cout << myArr[index] << " ";
}
return 0;
}
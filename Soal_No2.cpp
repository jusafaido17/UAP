#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void main() {

	int jumlahArray[10] = { 87, 45, 50, 25, 32, 10, 75, 90, 5, 8 };

	vector <int> vect(jumlahArray, jumlahArray + sizeof(jumlahArray) / sizeof(int));
	cout << "Deret sebelum di sorting : \n";
	for (int i = 0; i < vect.size(); i++) {
		cout << vect[i] << " | ";
	}

	cout << "\n";

	sort(jumlahArray, jumlahArray + 10, greater < int >());

	cout << "Deret setelah di sorting: \n";
	for (int i = 0; i < 10; i++) {
		cout << jumlahArray[i] << " | ";
	}
	cout << endl;

	float median;
	if (10 % 2 == 0) {
		median = (jumlahArray[10 / 2 - 1] + jumlahArray[10 / 2]) / 2.0;
	}
	else {
		median = jumlahArray[10 / 2];
	}

	cout << "Nilai Median : " << median << endl;

}
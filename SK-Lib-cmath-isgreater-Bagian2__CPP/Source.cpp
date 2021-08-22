#include <iostream>
#include <cmath>
#include <conio.h>

/*
	Source by GeeksForGeeks
	Modified For Learn by RK
	I.D.E : VS2019
*/

using namespace std;

int main() {
	// Take any values
	int a = 5;
	double f1 = nan("1");
	bool hasil;

	// Karena nilai f1 adalah NaN, maka dengan sembarang nilai a, fungsi selalu mengembalikan false(0)
	hasil = isgreater(f1, a);
	cout << f1 << " isgreater than " << a << ": " << hasil;

	_getch();
	return 0;
}

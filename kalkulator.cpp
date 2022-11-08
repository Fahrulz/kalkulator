#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int a, b, pilihan;
	string operasi;
	double hasil;

	cout << "Welcome to aritmatika kalkulator by fahrul" << endl;
	cout << "\n";

	cout << "1. Penjumlahan" << endl;
	cout << "2. Pengurangan" << endl;
	cout << "3. Perkalian" << endl;

	cout << "Silahakan pilih nomor yang ada di atas: ";
	cin >> pilihan;

	cout << "Enter first value: ";
	cin >> a;

	cout << "Enter second value: ";
	cin >> b;

	switch (pilihan) {
	case 1:
		hasil = a + b;
		operasi = '+';
		break;
	case 2:
		hasil = a - b;
		operasi = '-';
		break;
	case 3:
		hasil = a * b;
		operasi = '*';
		break;
	default:
		cout << "Pilihan nomor yang anda pilih tidak terdaftar!" << endl;
	}

	cout << "------------------------------" << endl;
	cout << a << operasi << b << " = " << hasil << endl;
	cout << "------------------------------" << endl;
}
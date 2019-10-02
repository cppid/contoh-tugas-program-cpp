
/**
 * @author Ammar Faizi <ammarfaizi2@gmail.com>
 *
 * [Program Perhitungan Luas dan Keliling Segitiga]
 */

#include <cmath>
#include <iostream>

int main(int argc, char const *argv[])
{
	float a, b, c, s, area;

	std::cout << "[Program Perhitungan Luas dan Keliling Segitiga]\n";
	std::cout << "Masukkan panjang sisi ke-1 : ";
	std::cin >> a;
	std::cout << "Masukkan panjang sisi ke-2 : ";
	std::cin >> b;
	std::cout << "Masukkan panjang sisi ke-3 : ";
	std::cin >> c;

	// Heron's formula
	// Ref: https://people.richland.edu/james/lecture/m116/matrices/applications.html
	//
	// Luas segitiga dapat dihitung dengan Heron's formula jika diketahui panjang ketiga sisinya.
	//
	s = (a + b + c) / 2;
	area = sqrt( s * (s - a) * (s - b) * (s - c) );

	if (std::isnan(area)) {
		// Jika sisi-sisi yang dimasukkan tidak valid.
		// Contoh: a = 1; b = 1; c = 9; (tidak dapat dibentuk menjadi segitiga)
		std::cout << "\nMohon maaf, Anda tidak dapat membuat segitiga dengan sisi-sisi tersebut!\n";
	} else {
		// Jika sisi-sisi yang dimasukkan merupakan angka yang valid.
		std::cout << "\nKeliling segitiga\t = " << (a + b + c) << "\nLuas segitiga\t\t = " << area << "\n";
	}

	return 0;
}

/**
 * @author Ammar Faizi <ammarfaizi2@gmail.com>
 *
 * [Program Perhitungan Luas dan Keliling Lingkaran]
 */

#include <iostream>

int main(int argc, char const *argv[])
{

	float r;
	const float phi =  3.14159265359;

	std::cout << "[Program Perhitungan Luas dan Keliling Lingkaran]\n";
	std::cout << "Masukkan jari-jari lingkaran: ";
	std::cin >> r;

	std::cout << "\nKeliling lingkaran\t = " << (2 * phi * r);
	std::cout << "\nLuas lingkaran\t\t = " << (phi * r * r);
	std::cout << "\n";

	return 0;
}


/**
 * @author Ammar Faizi <ammarfaizi2@gmail.com>
 *
 * [Program Perhitungan Luas dan Keliling Persegi Panjang]
 */

#include <iostream>

int main(int argc, char const *argv[])
{

	float a, b;

	std::cout << "[Program Perhitungan Luas dan Keliling Persegi Panjang]\n";
	std::cout << "Masukkan pangjang sisi ke-1 : ";
	std::cin >> a;
	std::cout << "Masukkan pangjang sisi ke-2 : ";
	std::cin >> b;

	std::cout << "\nKeliling persegi panjang\t = " << ((a + b) * 2);
	std::cout << "\nLuas persegi panjang\t\t = " << (a * b);
	std::cout << "\n";

	return 0;
}

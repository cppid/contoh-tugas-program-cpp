#include <iostream>
#include <cstring>
#include <iomanip>

int main()
{
  using namespace std;

  int a, b;
  char mk[5][5][100];
  char date[5][20] = {"SENIN", "SELASA", "RABU", "KAMIS", "JUMAT"};
  cout << endl;
  cout << "\tMasukkan Jadwal Mata Kuliah Anda\n";
  cout << "_______________________________________________\n";
  cout << endl;
  for (a = 0; a < 5; a++)
  {
    cout << date[a] << endl;

    for (b = 0; b < 5; b++)
    {
      if (b == 0)
        cout << "07.00  | ";
      else if (b == 1)
        cout << "08.50  | ";
      else if (b == 2)
        cout << "10.40  | ";
      else if (b == 3)
        cout << "13.20  | ";
      else if (b == 4)
        cout << "15.30  | ";

      cout << " ";
      cin.getline(mk[b][a], 100);
    }
    cout << " " << endl;
  }

  cout << "\n\n\n";
  cout << "|====================================================================================|\n";
  cout << "|                                                                                    |\n";
  cout << "|                  JADWAL PERKULIAHAN KELAS SISTEM INFORMASI 3 PAGI                  |\n";
  cout << "|                     TAHUN AKADEMIK 2018/2019 (SEMESTER GANJIL)                     |\n";
  cout << "|------------------------------------------------------------------------------------|\n";
  cout << "|  WAKTU  |     SENIN    |    SELASA    |     RABU     |    KAMIS     |     JUMAT    |\n";
  cout << "|------------------------------------------------------------------------------------|\n";
  for (b = 0; b < 5; b++)
  {
    cout << "|";
    if (b == 0)
      cout << "  07.00  ";
    else if (b == 1)
      cout << "  08.50  ";
    else if (b == 2)
      cout << "  10.40  ";
    else if (b == 3)
      cout << "  13.20  ";
    else if (b == 4)
      cout << "  15.30  ";

    for(a = 0; a < 5; a++) {
      cout << "|" << setiosflags(ios::left) << setw(14);
      cout << mk[b][a];
    }

    cout << "|" << endl;
  }

  cout << "======================================================================================\n";

  cout << "\n\n\n" << endl;

  return 0;
}

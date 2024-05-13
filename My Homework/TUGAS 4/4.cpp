#include <iostream>

using namespace std;

int main() {
  // Deklarasi variabel
  int baris, total = 1, ganjil;

  // Meminta input jumlah baris
  cout << "Masukkan jumlah baris: ";
  cin >> baris;

  // Perulangan untuk setiap baris
  for (int i = 1; i <= baris; i++) {
    // Menginisialisasi variabel ganjil
    ganjil = 1;

    // Menghitung dan menampilkan perkalian deret bilangan ganjil
    for (int j = 1; j <= i; j++) {
      cout << ganjil << " ";
      total *= ganjil;
      ganjil += 2;
    }

    cout << "= " << total << endl;
    total = 1; // Reset total untuk baris berikutnya
  }

  return 0;
}

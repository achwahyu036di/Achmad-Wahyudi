#include <iostream>

using namespace std;

int main() {
  // Deklarasi variabel
  int baris, total = 0, genap;

  // Meminta input jumlah baris
  cout << "Masukkan jumlah baris: ";
  cin >> baris;

  // Perulangan untuk setiap baris
  for (int i = 1; i <= baris; i++) {
    // Menginisialisasi variabel genap
    genap = 2;

    // Menghitung dan menampilkan penjumlahan deret bilangan genap
    for (int j = 1; j <= i; j++) {
      cout << genap << " ";
      total += genap;
      genap += 2;
    }

    cout << "= " << total << endl;
    total = 0; // Reset total untuk baris berikutnya
  }

  return 0;
}

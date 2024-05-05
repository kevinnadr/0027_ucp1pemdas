#include <iostream>
using namespace std;

int main() {
    const int jumlah_kandidat = 3;
    string nama[jumlah_kandidat];
    int nilai_matematika[jumlah_kandidat];
    int nilai_bahasa_inggris[jumlah_kandidat];
    string status[jumlah_kandidat];

    
    cout << "Masukkan data kandidat:" << endl;
    for (int i = 0; i < jumlah_kandidat; ++i) {
        cout << "Nama kandidat ke-" << i+1 << ": ";
        cin >> nama[i];
        cout << "Nilai Matematika: ";
        cin >> nilai_matematika[i];
        cout << "Nilai Bahasa Inggris: ";
        cin >> nilai_bahasa_inggris[i];

        
        if ((nilai_matematika[i] + nilai_bahasa_inggris[i]) / 2 >= 70 || nilai_matematika[i] > 80) {
            status[i] = "Diterima";
        } else {
            status[i] = "Tidak diterima";
        }
    }

   
    cout << "Nama\tStatus" << endl;
    for (int i = 0; i < jumlah_kandidat; ++i) {
        cout << nama[i] << "\t" << status[i] << endl;
    }

    return 0;
}



// 1. A VARIABLE DENGAN TIPE DATA INTEGER
//      int age : 15;
//    B VARIABLE DENGAN TIPE DATA STRING
//       std :: string name : evan;
//    C VARIABLE DENGAN TIPE DATA FLOAT
//       float weight : 76,2;

// 2. 

// 3. 


// 4. Prosedur
//    void greet() {
//       std::cout << "Hello, welcome!" << std::endl;
//    }
//
//    int add_numbers(int a, int b) {
//      return a + b;
//    }
//
//    int main() {
//      Panggil prosedur greet
//      greet();
//
//      Panggil fungsi add_numbers
//      int result = add_numbers(3, 5);
//      std::cout << "Result: " << result << std::endl;
//
//      return 0;
//    }

// 5. int main() {
//      Looping menggunakan for loop
//      for (int i = 0; i < 5; i++) {
//          std::cout << "Iteration " << i << std::endl;
//      }
//
//      Looping menggunakan while loop
//      int num = 0;
//      while (num < 5) {
//          std::cout << "Number: " << num << std::endl;
//          num++;
//      }
//
//      return 0;
//    }
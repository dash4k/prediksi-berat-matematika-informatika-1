// Library yang digunakan
#include <stdio.h>
#include <stdlib.h>

// Deklarasi fungsi yang digunakan
double algoritma(double x);               // Fungsi algoritma yang dihasilkan dengan metode linear regression

// Kode utama program
int main(void){
    double tinggi;                     // Deklarasi variabel tinggi badan
    system("CLS");                  // Fungsi untuk membersihkan jendela terminal
    printf("==============================================================================================================\n");
    
    // Meminta user menginput nilai variabel tinggi badan
    printf("\t\t Prediksi Berat Badan Seseorang\n");
    printf("\n\t\t Masukkan tinggi badan (inches): ");
    scanf("%lf", &tinggi);

    // Mencetak hasil prediksi dengan bantuan fungsi algoritma()
    printf("\n\t\t Berdasarkan tinggi badan orang tersebut, dengan persentase kesesuaian 47.06 persen, \n\t\t maka didapat berat badan yaitu %lf pounds", algoritma(tinggi));
    printf("\n==============================================================================================================\n\n");
}

// Inisialisasi fungsi yang digunakan

// Fungsi algoritma
double algoritma(double x){
    double hasil;                                // Inisialisasi variabel hasil untuk menyimpan dari perhitungan yang dilakukan oleh algoritma
    hasil = hasil - 213.0 + (5.031 * x);      // Menghitung nilai dari variabel hasil dengan algoritma yang telah dihasilkan dengan metode linear regression sebelumnya

    return hasil;                               // Mengembalikan nilai dari variabel hasil
}
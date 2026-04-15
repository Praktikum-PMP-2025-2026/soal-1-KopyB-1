// Modul Praktikum: 01 - Overview of C Programming
// Nama: Luis Matthew Sembiring
// NIM: 13224053
// Tanggal: 15 April 2026
// Nama File: soal1.c
// Deskripsi: Menghitung jumlah cara turun anak tangga menggunakan rekursi

# include <stdio.h>

int jalan_rusak (int jumlah, int counter){
    counter += 1;
    int n, i= 0;
    int rn[jumlah];
    if (counter <= jumlah){
        scanf("%d", &rn[i]);
        i++;
        return jalan_rusak(jumlah, counter);
    } else {
        return rn[i];

    }
}

int hitung_langkah(int N, int *rusak){ //rusak itu array
    int temp = N;
    int counter = 0;
    if (temp >= 0){
        temp = temp - 1;
        return hitung_langkah(temp, rusak);
        if (temp = rusak){
            temp = temp - 1;
            return hitung_langkah(temp, rusak);
                if (temp = rusak){
                    return counter;
            }
        } else {
            return counter;
        }
    } else {
        return counter;
    }
}

int main(){
    int N, R;
    scanf("%d,%d", &N, &R);
    int posisirusak = jalan_rusak(N, 0);
    int cara = hitung_langkah(N, posisirusak);

    printf("%d", cara);

    return 0;
}


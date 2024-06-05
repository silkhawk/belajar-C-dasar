#include <stdio.h>

int main()
{
    char nama[100]; // Deklarasi array untuk menyimpan nama dengan panjang maksimum 100 karakter

    // Meminta pengguna untuk memasukkan nama
    printf("Masukkan nama Anda: ");
    scanf("%s", nama); // Membaca masukan nama dari pengguna
    // Menampilkan nama yang dimasukkan oleh pengguna
    printf("Halo, %s! Selamat datang.\n", nama);

    return 0;
}

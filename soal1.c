#include <stdio.h>

int main(){
    int jumlah =12;
    float harga = 8.75;
    float total = jumlah * harga;
    char satuan ='$';

    printf("Harga Barang  :%c.%.3f \n",satuan,harga);
    printf("Jumlah Barang :%d \n",jumlah);
    printf("Total Barang  :%c.%.3f",satuan,total);
}
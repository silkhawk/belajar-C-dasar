#include <stdio.h>

int main(){
    int max_score = 100;
    int user_score = 76;
    float score = (float) user_score/max_score * 100;
    char satuan ='%';

    printf("Pencapaian user %.2f %c",score,satuan);
    return 0; 
}

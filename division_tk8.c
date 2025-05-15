#include <stdio.h>
#include <math.h> 

float divide(float a, float b) {
    if (b == 0) {
        printf("Error: Tidak bisa dibagi dengan nol.\n");
        return NAN;
    }
    return a / b;
}

int main() {
    float num1, num2, hasil;

    printf("Masukkan angka pertama: ");
    scanf("%f", &num1);

    printf("Masukkan angka kedua: ");
    scanf("%f", &num2);

    hasil = divide(num1, num2);

    if (!isnan(hasil)) {
        printf("Hasil: %.2f\n", hasil);
    }

    return 0;
}

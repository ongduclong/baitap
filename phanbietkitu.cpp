#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char a;
    int b;
    printf("Nhap 1 ki tu: ");
    a = getchar();
    b = a;
    if ((b >= 33 && b <= 47) || (b >= 58 && b <= 64) || (b >= 64 && b <= 91) || (b >= 123 && b <= 126)) {
        printf("Day la ki tu dac biet");
    } else if (b >= 48 && b <= 57) {
        printf("Day la ki tu so");
    } else if (b == 32) {
        exit(0);
    } else {
        printf("Day la ki tu chu");
    }
    return 0;
}

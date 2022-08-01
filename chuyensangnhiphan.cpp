#include <stdio.h>

int main() {
    int n;
    int a[1000];
    int count=0;
    nhapn:
    printf("Nhap 1 so: ");
    scanf("%d", &n);
    if (n>0 && n<31) {
        for (int i = 1; n != 0; i++) {
            a[i]= n%2;
            n = n / 2;
            count++;
        }
        for (int i = count; i > 0; i--) {
            printf("%d", a[i]);
        }
    } else {
        printf("Nhap lai: \n");
        goto nhapn;
    }
    return 0;
}



#include <stdio.h>

int main() {
    int i;
    int f[1000];
    int n;
    f[0] = 0;
    f[1] = 1;
    nhapn:
        printf("nhap so nguyen: ");
        scanf("%d", &n);
        if (n <= 0) {
            printf("Nhap lai: \n");
            goto nhapn;
        } else if (n == 1) {
            printf("%d ", f[0]);
        } else if (n == 2) {
            printf("%d ", f[0]);
            printf("%d ", f[1]);
        } else {
            printf("%d ", f[0]);
            printf("%d ", f[1]);
            for (i = 2; i < n; i++) {
                f[i] = f[i - 1] + f[i - 2];
                if(f[i] >= n{
                    break;
                }
                printf("%d ", f[i]);
            }
        }
    }



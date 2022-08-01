// chuong trinh in bang cuu chuong.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    int n;
    int a = 0;
    for (;;) {
            bangcuuchuong:
            printf("Nhap 1 so : ");
            scanf("%d", &n);
        if(n>0 && n<10) {
            printf("Bang cu chuong cua %d :\n", n);
            for (int i = 0; i <= 9; i++) {
                a = n * i;
                printf("%d * %d = %d\n",n,i,a);
            }
        } else {
            printf("Nhap lai: ");
            goto bangcuuchuong;
        }
        char ch;
        printf("Do you want to continue? (Y/N)\n");
        scanf("%s", &ch);
        switch (ch) {
            case 'Y':
                goto bangcuuchuong;
            case 'y':
                goto bangcuuchuong;
            case 'N':
                exit(0);
            case 'n':
                exit(0);
            default:
                printf("Error! End the program!");
                exit(0);
        }
    }
    return 0;
}


#include <stdio.h>
// chuong trinh tinh tong cac chu so cua mot so nguyen duong bat ki nhap vao tu ban phim
int main() {
    int a;
    do
	{
		printf("nhap vao so nguyen duong :");
        scanf("%d", &a);
	}
	while(a <= 0 && printf("day khong phai so nguyen duong, nhap lai\n"));
    int tong = 0;
    for( ;a!=0; ){
        int b = a%10;
        tong = tong + b;
        a = a/10;
    } printf("tong cac chu so = %d", tong);
    return 0;
}



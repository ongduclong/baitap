// chuong trinh tinh giai thua cua so nguyen n.
#include <stdio.h>

int main()
{
	int n, i;
	printf("Nhap : ");
	scanf("%d", &n);
	int a = 1;
	for (i = 1;i <= n; i++){
		a = a*i;
	}
	printf("Giai thua cua %d la : %d: ",n,a);
	return 0;
}



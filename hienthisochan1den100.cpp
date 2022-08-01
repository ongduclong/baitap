#include<stdio.h>
// chuong trinh hien thi ra cac so chan tu 1 den 100.
int main()
{
	int n;
	for ( int i = 1; i <= 100;i++){
		if(i % 2 == 0){
			printf("%d ", i);
		}
	}
	return 0;
}


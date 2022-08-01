#include<stdio.h>
// code theo luu do.
int main()
{
	int n;
	int result = 0;
	
do
  {
    printf("nhap n: ");
    scanf("%d", &n);
    result++;
  }while((n >= 0 && n < 100) && printf("%d\n", result));
  printf("Display result:");
	return 0;
}



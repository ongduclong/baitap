#include <stdio.h>
int main() {
    int a[1000];
    int n, i;
    printf("Nhap so phan tu : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Nhap vao phan tu a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    int max = a[0];
    for(i=0;i<n;i++){
    	if(a[i]>max){
    		max = a[i];
		}
	}
	printf("max = %d",max);
	int min = a[0];
	for(i=0;i<n;i++){
		if(a[i]<min){
			min=a[i];
		}
	}
	printf("\nmin = %d",min);
	
    return 0;
}


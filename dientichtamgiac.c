// chuong trinh tinh dien tich tam giac.
#include<stdio.h>
#include<math.h>
int main(void){
	float a,b,c,C,p,s;
	printf("nhap vao ba canh cua tam giac :");
	scanf("%f%f%f", &a,&b,&c);
	if((a+b)>c && (a+c)>b && (b+c)>a){
	C=a+b+c;
	p=C/2;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("dien tich : %f", s);
	}
	else{
		printf("tam giac khong hop le");
	}
	return 0;
}


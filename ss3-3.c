#include<stdio.h>

int main(){
	// khai bao bien
	float chuvi, dientich, bankinh;
	float pi = 3.14;
	
	// nhap ban kinh tu ban phim
	printf("Ban hay nhap ban kinh cua hinh tron ");
	scanf("%f", &bankinh);
	
	// tinh toan va in 
	chuvi = 2 * pi * bankinh;
    printf("Chu vi cua hinh tron do la: %.2f \n", chuvi);
    
	dientich = pi * bankinh * bankinh;
	printf("Dien tich cua hinh tron la: %.2f \n", dientich);
	
	return 0;
}

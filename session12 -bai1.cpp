#include<stdio.h>

	int tinhtong( int a, int b){
		int tong=0;
		tong =a+b;
		return tong;
	}
	
	int main(){
	int a,b;
	int tong=0;
	printf("Nhap So thu nhat: ");
	scanf("%d",&a);
	printf("Nhap so thu hai: ");
	scanf("%d",&b);
	int tinhtong(int a, int b);
	tong = tinhtong(a,b);
	printf("Tong cua hai so la: %d ",tong);
	
	return 0;
	
}	

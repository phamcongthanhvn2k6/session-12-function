#include <stdio.h>

int giaithua(int n){
	if(n < 0){
		return -1;
	}
	if( n ==0 || n == 1){
		return 1;
	}
	return n* giaithua(n-1);
}

int main(){
	int d;
	printf("Nhap mot so nguyen n bat ky : ");
	scanf("%d",&d);
	long long ketqua= giaithua(d);
	if( ketqua== -1){
		printf("Giai thua Khong xac dinh so am!");
	} 
	else{
		printf(" Giai thua cua %d la:  %d",d,ketqua);
	}
	
	return 0;
}

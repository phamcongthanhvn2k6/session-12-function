#include<stdio.h>
#include<stdbool.h>

bool kiemtrasonguyento(int n){
	if(n<=1){
		return false;
	}
	for(int i=2;i*i<=n;i++){
		if(n %i ==0){
			return false;
		}
	}
	return true;
}

int main(){
	int so1,so2;
	
	printf("Nhap so nguyen thu nhat: ");
	scanf("%d",&so1);
	printf("Nhap so nguyen thu hai: ");
	scanf("%d",&so2);
	
	if(kiemtrasonguyento(so1)){
		printf("%d la so nguyen to. \n",so1);
	}
	else{
		printf("%d khong phai so nguyen to \n",so1);
	}
	
	if(kiemtrasonguyento(so2)){
		printf("%d la so nguyen to. \n",so2);
	}
	else{
		printf("%d khong phai so nguyen to \n",so2);
	}
}

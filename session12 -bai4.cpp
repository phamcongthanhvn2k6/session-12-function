#include<stdio.h>

 int solonnhat(int array[],int n){
 	int max = array[0];
 	for (int i=0;i<n;i++){
 		if(array[i]>max){
 			max = array[i];
		 }
	 }
	 printf("So lon nhat trong mang la: %d",max);
 }

void nhapham(int array[], int n){
	printf("Nhap phan tu cua mang: \n");
	for (int i=0;i<n;i++){
		printf("Nhap Phan tu thu %d: ",i+1);
		scanf("%d",&array[i]);
	}
	
	printf("Mang vua nhap la: \n");
	for(int i=0;i<n;i++){
		printf("Phan tu thu %d: %d\n",i+1,array[i]);
	}
	printf("\n");
}

int main(){
	int n;
	printf("Nhap so phan tu trong mang: ");
	scanf("%d",&n);
	
	int array[n];
	
	nhapham(array, n);
	solonnhat(array, n);
	
	return 0;
}

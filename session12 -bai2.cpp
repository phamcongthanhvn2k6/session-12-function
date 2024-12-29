#include<stdio.h>

	void inmang(int array[],int n){
		for(int i=0;i<n;i++){
			printf("Nhap vao phan tu %d: ",i+1);
			scanf("%d",&array[i]);
		}
		printf("cac phan tu o trong mang la: \n");
		for (int i=0;i<n;i++){
			printf("phan tu thu %d: %d\n",i,array[i]);
		}
	}
	
	int main(){
	int array[100];
	int n;
	printf("Nhap So phan tu o trong mang: ");
	scanf("%d",&n);
	inmang(array,n);
	
	return 0;
	
}

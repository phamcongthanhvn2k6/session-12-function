#include<stdio.h>

	int timuocchunglonnhat(int a,int b){
		while (a !=b){
			if(a==0 || b==0){
				return a+b;
			}
			
			if(a>b){
				a=a-b;
			}
			else{
				b=b-a;
			}
		}
		return a;
	}
	
	int main(){
		int a,b;
		printf("Nhap so a: ");
		scanf("%d",&a);
		printf("Nhap so b: ");
		scanf("%d",&b);
		
		printf("Uoc Chung Lon nhat cua hai so la: %d", timuocchunglonnhat(a,b));
		
		return 0;
	}

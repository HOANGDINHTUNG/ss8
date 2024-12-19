#include<stdio.h>
int main(){
	int a,sum=0;
	printf("moi nhap vao gia tri cua mang hai chieu: ");
	scanf("%d",&a);
	int b=a;
	int array[a][b];
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			printf("array[%d][%d] = ",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	printf("CAC PHAN TU TREN DUONG CHEO CHINH LA:\n");
	for(int i=0;i<a;i++){
		int j=i;
		printf("array[%d][%d] = %d\n",i,j,array[i][j]);
		sum+=array[i][j];
	}
	printf("tong cac phan tu tren duong cheo la: %d",sum);
	return 0;
		
	
}

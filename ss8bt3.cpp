#include<stdio.h>
int main(){
	int row, col;
	do{
		printf("moi nhap vao 1 so nguyen duong: ");
		scanf("%d",&row);
	}while(row<=0);
	col=row;
	int array[row][col];
	printf("moi nhap vao tung phan tu cua mang: \n");
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("array[%d][%d] = ",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("%d ",array[i][j]);
		}
		printf("\n");
	}
	return 0;
	
}

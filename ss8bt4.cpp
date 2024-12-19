#include<stdio.h>
int main(){
	int array[3][2];
	array[0][0]=14;
	array[0][1]=72;
	array[1][0]=34;
	array[1][1]=94;
	array[2][0]=53;
	array[2][1]=62;
	int temp=array[0][0];
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			if(array[i][j]>temp){
				temp=array[i][j];
			}
		}
	}
	printf("phan tu lon nhat trong mang da khai bao la %d ",temp);
	return 0;
}


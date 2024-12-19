#include<stdio.h>
int main(){
	int array[]={34,73,19,69,47,82,11,19,99,53};
	int n;
	printf("moi nhap vao mot phan tu: ");
	scanf("%d",&n);
	for(int i=0;i<sizeof(array)/sizeof(int);i++){
		if(n==array[i]){
			printf("vi tri phan tu trong mang la %d ",i);
			return 0;
		}
	}
	printf("phan tu %d khong ton tai trong mang!!!",n);
	return 0;
	
}

#include<stdio.h>
int main()
{
	int array[9]={42,52,64,12,43,64,26,27,53};
	for(int i=sizeof(array)/sizeof(int)-1;i>=0;i--){
		printf("array[%d] = %d\n",i ,array[i]);
	}
	return 0;
}

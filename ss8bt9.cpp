#include<stdio.h>
int main(){
	int n;
	printf(" moi ban nhap so luong phan tu ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("array[%d] = ",i);
		scanf("%d", &a[i]);
    }
	int Maxcount=0;
	int phanTuxuatHIen=a[0];
	for(int i=0;i<n;i++){
	   	int count =1;
	   	for(int j=i+1;j<n;j++){
	   		if (a[j]==a[i]){
	   			count++;
			}
		}
	    if (count>Maxcount){
	   		Maxcount=count;
	   		phanTuxuatHIen=a[i];	
    	}
	}
	printf( "phan tu nhieu nhat la %d voi so lan xuat hien la %d",phanTuxuatHIen,Maxcount);
  	return 0;
 	
}

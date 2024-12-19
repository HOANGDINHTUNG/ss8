#include <stdio.h>

int main() {
    int n;
    printf("Moi ban nhap so luong phan tu: ");
    scanf("%d", &n);
	int a[n];
    for (int i = 0; i < n; i++) {
        printf("array[%d] =  ", i);
        scanf("%d", &a[i]);
    }
	int maxCount = 0;
    int result[n]; //bien dung de luu nhieu ket qua 
    int count = 0; //bien dung de den so lan lap cua 1 gia tri
	int index=0;  //bien dung de dem ket qua

    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (a[j] == a[i]) {
                count++;
            }
        }
		if (count > maxCount) {       
            maxCount = count;
            index = 0;  
            result[index] = a[i];  
        } else if (count == maxCount) {
            result[++index] = a[i];  
        }
    }
	printf("Cac phan tu xuat hien nhieu nhat la: ");
    for (int i = 0; i <= index; i++) {
        printf("%d ", result[i]);
    }
    printf("\nSo lan xuat hien: %d\n", maxCount);

    return 0;
}

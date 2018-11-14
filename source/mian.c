#include<stdio.h>
#include<stdlib.h>
int main() {
	int a[6], i, j, sum = 0,temp;
	float avg;
	printf("块き计:");
	for (i = 0; i < 5; i++) {
		scanf_s("%d", &a[i]);
		sum += a[i];
	}
	avg = sum / 5;
	for (j = 0; j < 5; j++) {
		if (j-1 != -1) {                   //ぃ琵a[-1]祇ネ
			if (a[j-1] < a[j]) {           //传
				temp = a[j -1];
				a[j -1] = a[j];
				a[j] = temp;
				j = 0;                     //穝苯磞
				for (i = 0; i < 5; i++) {  //–Ω传筁逼
					printf("%d ", a[i]);
				}
				printf("\n");
			}
		}
	}
	printf("\n");
	printf("程 = %d \n", a[0]);
	printf("程 = %d \n", a[4]);
	printf("い丁 = %d \n", a[2]);
	printf("キА = %.2f \n", avg);
	system("pause");
	return 0;
}
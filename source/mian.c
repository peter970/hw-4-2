#include<stdio.h>
#include<stdlib.h>
int main() {
	int a[6], i, j, sum = 0,temp;
	float avg;
	printf("��J���Ӽƭ�:");
	for (i = 0; i < 5; i++) {
		scanf_s("%d", &a[i]);
		sum += a[i];
	}
	avg = sum / 5;
	for (j = 0; j < 5; j++) {
		if (j-1 != -1) {                   //����a[-1]�o��
			if (a[j-1] < a[j]) {           //����
				temp = a[j -1];
				a[j -1] = a[j];
				a[j] = temp;
				j = 0;                     //���s���y
				for (i = 0; i < 5; i++) {  //�L�X�C�����L���Ƨ�
					printf("%d ", a[i]);
				}
				printf("\n");
			}
		}
	}
	printf("\n");
	printf("�̤j�� = %d \n", a[0]);
	printf("�̤p�� = %d \n", a[4]);
	printf("������ = %d \n", a[2]);
	printf("������ = %.2f \n", avg);
	system("pause");
	return 0;
}
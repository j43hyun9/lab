#include <stdio.h>

int main(void) {
	int n, k, sum;
	sum = 0;
	k = 0;
	
	scanf_s("%d", &n);

	printf("Sigma: %d ���� %d ����", k, n);
	printf("\n");
	for (int i=0; i<=n; i++) {
		printf("%d", i);
		if (i != n)
			printf(" + ");
		sum = sum+i;
	}
	printf(" = %d \n", sum);

	printf("Bogma: %d ���� %d ����", k, n);
	printf("\n");
	for (int i = 0; i <= n; i++) {
		printf("%d", i);
		if (i != n)
			printf(" ");
	}
	

}
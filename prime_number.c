#include <stdio.h>
#include <math.h>
#include <time.h>	

char clean;

int a[1000001];


void prog01() {

	int i, j;
	int num;
	num = 0;
	clock_t start, end;
	a[1] = 1;

	printf("입력 수 : ");
	scanf_s("%d", &num);


	printf("%d 이하의 소수 : ", num);


	start = clock();

	for (i = 1; i <= num; i++) {
		if (a[i] == 1) {
			continue;
		}
		for (j = 2 * i; j <= num; j += i) {
			a[j] = 1;
		}
	}
	for (i = 1; i <= num; i++) {
		if (a[i] != 1) {
			printf("%d  ", i);
		}
	}

	end = clock(); 
	printf("\n경과시간 : %f", (float)(end - start) / CLOCKS_PER_SEC);


}

int main(void) {

	while (1) {
		printf("실행할 예제번호 : ");

		char sel = getchar();
		while (clean = getchar() != '\n' && clean != EOF);
		//fflush(stdin);

		switch (sel)
		{
		case '1':
			prog01();
			printf("\n\n");
			break;
		default:
			return;
		}
	}

	return 0;
}
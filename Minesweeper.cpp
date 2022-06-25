#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int matrix[100][100];
int n, mine;

int retrive(int a, int b) {

	if (matrix[a - 1][b - 1] != -1 && (a - 1 >= 1 && b - 1 >= 1)) 
		matrix[a - 1][b - 1]++;
	if (matrix[a - 1][b] != -1 && a - 1 >= 1) 
		matrix[a - 1][b]++;
	if (matrix[a - 1][b + 1] != -1 && (a - 1 >= 1 && b + 1 <= n))
		matrix[a - 1][b + 1]++;
	if (matrix[a][b - 1] != -1 && b - 1 >= 1)
		matrix[a][b - 1]++;
	if (matrix[a][b + 1] != -1 && b + 1 <= n) 
		matrix[a][b + 1]++;
	if (matrix[a + 1][b - 1] != -1 && (a + 1 <= n && b - 1 >= 1)) 
		matrix[a + 1][b - 1]++;
	if (matrix[a + 1][b] != -1 && a + 1 <= n)
		matrix[a + 1][b]++;
	if (matrix[a + 1][b + 1] != -1 && (a + 1 <= n && b + 1 <= n)) 
		matrix[a + 1][b + 1]++;

	return 0;
}

int main()
{
	srand(time(0));
	printf("Input size : ");
	scanf_s("%d", &n);
	printf("Input Mine Number : ");
	scanf_s("%d", &mine);


	if (mine >= n * n) {
		printf("<ERROR> Mine Size Must Be Smaller Than Size x Size !");
	}


	else {
		for (int i = 1; i <= mine; i++) {
			int a = rand() % n;
			int b = rand() % n;
			if (matrix[a][b] == -1)	i--;
			else {
				matrix[a][b] = -1;
				retrive(a, b);
			}
		}

		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++)
				printf("%4d\n", matrix[i][j]);
		}
		return 0;
	}
}




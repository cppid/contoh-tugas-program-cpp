
#include <stdio.h>

int main(int argc, char *argv[], char *envp[]) {
	char A[4][2] = {
		{'A', 'B'},
		{'C', 'D'},
		{'E', 'F'},
		{'G', 'H'}
	};

	char B[2][3] = {
		{'I', 'J', 'K'},
		{'L', 'M', 'N'}
	};

	char C[14];
	int i, j, k = 0;

	for (i = 0; i < 4; ++i) {
		for (j = 0; j < 2; ++j) {
			C[k++] = A[i][j];
		}
	}

	for (i = 0; i < 2; ++i) {
		for (j = 0; j < 3; ++j) {
			C[k++] = B[i][j];
		}
	}

	for (i = 0; i < 14; ++i)
		printf("%c ", C[i]);

	return 0;
}

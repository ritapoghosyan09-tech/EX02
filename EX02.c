#include <stdio.h>
int main() {
	
	//Print numbers from 1 to N
	for (int i = 1; i <= 9; i++) {
		printf("%d\n",i);
}

	//Sum numbers from 1 to N
	int sum = 0;	
	
	for (int i = 1; i <= 9; ++i) {
		sum = sum + i;
}

	printf("%d\n", sum);

	//Print even numbers
	for (int i = 1; i <= 9; i++) {
		if (i % 2 == 0) {
			printf("%d\n",i);
		}
}

	//Multiplication table
	for (int i = 1; i <= 10; i++) {

		for (int j = 1; j <= 10; j++) {
			printf("%d * %d = %d\n", i, j, i * j);
		}
	}

	return 0;
}			


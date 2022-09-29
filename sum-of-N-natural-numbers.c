#include <stdio.h>
/**
 * The program accept value N and prints the sum of N natural numbers
 * Natural numbers are 0, 1, 2, 3,.......N
 */

int main()
{
	int N, i, sum = 0;

	printf("Enter number of integers : ");
	scanf("%d", &N);
	printf("Sum of %d iS :", N);
	for (i = 1; i <= N; i++)
	{
		sum += i;
		printf("%d\n", sum); /* It gives the total value step by step*/
	}
	printf("%d\n", sum); /* It gives the total value without displaying steps*/
	return 0;
}

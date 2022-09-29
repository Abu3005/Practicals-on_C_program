#include <stdio.h>
/**
 * To accept input and find the factorial of a number
 */
int factorial(int i);

int main()
{
	int n;

	printf("Enter number to find its factorial :");
	scanf("%d", &n);
	int answer = factorial(n);

	printf("Factorial of 5 is %d\n", answer);
	return 0;
}

int factorial(int i)
{
	int k;
	if (i > 0)
	{
		k = i * factorial(i - 1);
		return k;
	}
	else
		return 1;
}


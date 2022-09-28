#include <stdio.h>

int main()
{
	int a, b, c;
        char boy;

        do {
                printf("Enter value of a and b respectively\n");
                scanf("%d %d", &a, &b);
                printf("The values enter are %d and %d : \n", a, b);
                c = b - 1;
                if ((5 < a) && (a < 10))
                {
                        if ((10 < b) && (b < 15))
                                while (a < c)
                                {
                                        a++;
                                        printf("%d, ", a);
                                }
                }
                else
		{
			printf("Illegal Input value of a and b !!!!!\n");
			printf("Enter value of a and b respectively\n");
			scanf("%d %d", &a, &b);
                        printf("The values enter are %d and %d : \n", a, b);
                        c = b - 1;
			if ((5 < a) && (a < 10))
			{
				if ((10 < b) && (b < 15))
					while (a < c)
					{
						a++;
						printf("%d, ", a);
					}
			}
		}
		printf("Type Y to continue and N to quit\n");
		fflush(stdin);
		scanf(" %c", &boy);
	} while (boy == 'Y' || boy == 'y');
	return 0;
}

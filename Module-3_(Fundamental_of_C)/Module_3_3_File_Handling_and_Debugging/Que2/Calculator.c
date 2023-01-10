#include <stdio.h>
#include <conio.h>
void main()
{
		int A=0, B=0, Result=0;
		int choose;
		do
	{
	choose:
		printf("\n1. Addition\n");
		printf("2. Multiplication\n");
		printf("3. Division\n");
		printf("4. Subtraction\n");
		printf("5. Modulo\n");
		printf("\nEnter Your Choice: ");
		scanf("%d",& choose);
		if (choose>=1 && choose<=5)
		{
			printf("\nEnter any two numbers:");
		}
		if (choose<1 || choose>5)
		{
		    printf("\nWrong Choice!\n");
		    printf("------------------------------\n");
		    goto choose;
		}
		{
		printf("\n A:");
		scanf("%d",& A);
		
		printf("\n B:");
		scanf("%d",& B);
		}
    switch (choose)
    	{
		case 1:
			Result=A+B;
			printf("\n Addition: = %d",Result);
			break;
		case 2:
			Result=A*B;
			printf("\n Multiplication: = %d",Result);
			break;
		case 3:
			Result=A/B;
			printf("\n Division: = %d",Result);
			break;
		case 4:
			Result=A-B;
			printf("\n Subtraction: = %d",Result);
			break;
		case 5:
			Result=A%B;
			printf("\n Modulo: = %d",Result);
			break;
     	}
     	printf("\n-----------------------------\n");
    }
    while(choose!=5);
}
#include<stdio.h>
int main()
{
	float SI, P, R, T;
	
	printf("Enter Principal Amount: \n");
	scanf("%f",& P);
	
	printf("\nEnter Rate of Interest: \n");
	scanf("%f",& R);
	
	printf("\nEnter Time Duration: \n");
	scanf("%f",& T);
	
	SI= (P*R*T)/100;
	
	printf("\nSimple Interest = %f", SI);

return 0;
}

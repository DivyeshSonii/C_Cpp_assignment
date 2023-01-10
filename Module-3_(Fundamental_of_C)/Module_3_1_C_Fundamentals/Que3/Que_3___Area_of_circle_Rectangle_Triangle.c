#include<stdio.h>

void main()
{
	int choose;
	printf("Select option from below:\n");
	printf("\n1. Area of circle\n");
	printf("2. Area of rectangle\n");
	printf("3. Area of triangle\n");
again:	
	printf("\nPlease choose any number: ");
	scanf("%d",& choose);
	
	switch(choose)
	{
		case 1:
			Area_of_circle();
			break;
		case 2:
			Area_of_rectangle();
			break;
		case 3:
			Area_of_triangle();
			break;
		default:
			printf("\n-----Invalid Number Selection-----\n");
			printf("\n-----------------------------------------------------\n");
			goto again;
			break;
	}
}

// To find Area of circle
void Area_of_circle()
{
	float area, radius, PI = 3.14;
	printf("\n\nArea = PI * radius*radius\n");
	printf("\nRadius: ");
	scanf("%f",& radius);
	area = PI * radius*radius;
	printf("\nArea of circle : %f\n", area);
}

// To find Area of rectangle
void Area_of_rectangle()
{
	float area, width, length;
	printf("\n\nArea = Width * Length\n");
	printf("\nWidth: ");
	scanf("%f",& width);
	printf("\nLength: ");
	scanf("%f", & length);
	area = width * length;
	printf("\nArea of rectangle : %f\n", area);
}

//To find Atea of triangle
void Area_of_triangle()
{
	float area, height, base;
	printf("\n\nArea = 0.5 * Height * Base\n");
	printf("\nHeight: ");
	scanf("%f",& height);
	printf("\nBase: ");
	scanf("%f",& base);
	area = 0.5 * height * base;
	printf("\nArea of trangle : %f\n", area);
}


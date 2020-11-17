#include<stdio.h>
int findV(int A, int T, int U)
{
	int V;
	if (T < 0 || U < 0)
	{
		V = -1;
	}
	else 
	{
		V = U + (A * T);
	}
	return V;
}
int main()
{
	struct info
	{
		int A;
		int U;
		int T;
		int V;
	} object01 , object02;

	printf("Enter early speed (m/s) :");
	scanf_s("%d", &object01.U);
	printf("Enter accelerate (m^2/s) :");
	scanf_s("%d", &object01.A);
	printf("Enter time (s) :");
	scanf_s("%d", &object01.T);

	printf("\nEnter early speed (m/s) :");
	scanf_s("%d", &object02.U);
	printf("Enter accelerate (m^2/s) :");
	scanf_s("%d", &object02.A);
	printf("Enter time (s) :");
	scanf_s("%d", &object02.T);

	object01.V = findV(object01.A, object01.T, object01.U);
	object02.V = findV(object02.A, object02.T, object02.U);

	if (object01.V == -1)
	{
		printf("\n OBJECT 1 IS E R R O R ! ! \n");
	} else printf("\nCurrent speed of object 1 is %d\n", object01.V);
	if (object02.V == -1)
	{
		printf(" OBJECT 2 IS E R R O R ! ! ");
	} else printf("Current speed of object 2 is %d", object02.V);

	return 0;
}
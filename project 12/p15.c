#include<stdio.h>
void main()
{

	for(int i=1; i<=5; i++)
	{
		for(int j=0; j<i; j++)
		{
			printf("%d",(i+j)%2);
		}
		printf("\n");
	}
}
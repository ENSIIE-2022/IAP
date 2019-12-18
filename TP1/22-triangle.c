//Pierre BRUOT

#include <stdlib.h>
#include <stdio.h>


void triangle(int m, int n)
{
	int tmp = m;
	for(int i=0; i<(2*m-3); i++)
	{	//printf("%d %d", m,n);
		if(m==n)
		{
			printf("*");
		}
		else
			
			printf(" ");
	}
}


int main(int argc, char const *argv[])
{
	int n;
	printf("entrez un entier: ");
	scanf("%d", &n);
	int m=n;
	for(int i=0; i<n; i++)
	{
		printf("*");
		triangle(m,n);
		if(m!=1)
			printf("*\n");
		
		m--;
	}
	printf("\n");
	return 0;
}

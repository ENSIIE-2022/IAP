//Pierre BRUOT

#include <stdlib.h>
#include <stdio.h>


void losange(int m, int n, int j)
{
	for(int i=0; i<m; i++)
	{
		printf(" ");
	}
	for(int i=0; i<(n-m+j+1); i++)
	{
		printf("*");
	}
	

}

int main(int argc, char const *argv[])
{
	int n;
	printf("entrez un entier: ");
	scanf("%d", &n);
	int m=n;

	for(int i=0; i<n+1; i++)
	{
		losange(m,n,i);
		
			m--;
		printf("\n");
	}
	m=1;
	for(int i=n; i>0; i--)
	{

		losange(m,n,i-1);
		m++;
		printf("\n");
	}
	return 0;
}

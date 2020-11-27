#include <stdio.h>

int main ()
{
int w,k,i,j;
int d=0;

printf("Podaj liczbe wierszy i kolumn\n");
scanf("%d %d", &w, &k);
printf("\n");

for (i=1; i<=w; i++)
{


	for (j=1; j<=k; j++)
	{

		if (d==0)
		d=1;

		else
		d=0;


	printf("%d\t", d);

	}

if (k%2==0)
{
	if(d==0)
	d=1;

	else
	d=0;
}

printf("\n");

}

printf("\n");

return 0;
}

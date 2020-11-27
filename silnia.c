#include <stdio.h>

int main()
{

int a, i=1;
unsigned long long int silnia=1;

printf("Podaj liczbe calkowita z przedzialu 1-20\n");
scanf("%d", &a);
printf("\n");

while (i<=a)
{
	silnia=silnia*i;
	i++;

}


do
{
	printf("%d! = %llu\n", a, silnia);
	silnia=silnia/a;
	a--;

}
while (a>0);


return 0;
}

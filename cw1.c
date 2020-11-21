#include <stdio.h>

int main()
{
float a,b,c;

printf("Podaj zmienne a i b\n");
scanf("%f %f", &a, &b);



printf("\n %.2f + %.2f = %.2f\n", a, b, a+b);
printf("\n %.2f - %.2f = %.2f\n", a, b, a-b);
printf("\n %.2f * %.2f = %.2f\n", a, b, a*b);
printf("\n %.2f / %.2f = %.2f\n", a, b, a/b);

printf("\n stare a=%.2f", a);

a=a*b;

printf("\n nowe a=%.2f\n", a);



return 0;
}

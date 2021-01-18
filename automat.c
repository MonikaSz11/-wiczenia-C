#include <stdio.h>
#include <stdlib.h>

int main()
{

int a, p=0, j, brak, reszta;
int cena[10]={9, 8, 9, 9, 13, 12, 15, 12, 3, 2};

	 FILE *pliczek;
	int w, zm,k,n;
	int tab[10];
	pliczek = fopen("dostepna_ilosc", "r");

		for(int i = 0; i < 10; ++i)
  		{
			fscanf(pliczek, "%d", &zm);
      			tab[i] = zm;
  		}
  		fclose(pliczek);


printf("\nJaki napoj chcesz kupic?\n\n");
printf("1) Coca-Cola %dzl                 Dostepna ilosc: %d\n", cena[0], tab[0]);
printf("2) Coca-Cola zero %dzl            Dostepna ilosc: %d\n", cena[1], tab[1]);
printf("3) Fanta %dzl                     Dostepna ilosc: %d\n", cena[2], tab[2]);
printf("4) Sprite %dzl                    Dostepna ilosc: %d\n", cena[3], tab[3]);
printf("5) Pepsi %dzl                    Dostepna ilosc: %d\n", cena[4], tab[4]);
printf("6) Pepsi Max %dzl                Dostepna ilosc: %d\n", cena[5], tab[5]);
printf("7) 7up %dzl                      Dostepna ilosc: %d\n", cena[6], tab[6]);
printf("8) Mirinda %dzl                  Dostepna ilosc: %d\n", cena[7], tab[7]);
printf("9) Cisowianka niegazowana %dzl    Dostepna ilosc: %d\n", cena[8], tab[8]);
printf("10) Cisowianka gazowana %dzl      Dostepna ilosc: %d\n", cena[9], tab[9]);
printf("\nWpisz numer przypisany do wybranego napoju\n");

scanf("%d", &a);
printf("\n");

k=a-1;

if (tab[k]==0 && a<11)
{
        printf("Brak wybranego napoju w automacie\n");
        return 0;
}


tab[k]=tab[k]-1;

	pliczek = fopen("dostepna_ilosc", "w");
                for(int i = 0; i < 10; i++)
                {
                        fprintf(pliczek, "%d ", tab[i]);
                }
                fclose(pliczek);

if (a>10 || a<1)
{
	printf("Wybrano nieprawidlowy numer\n");
	return 0;
}


printf("Do zaplaty: %dzl\n\n", cena[k]);

while(p<cena[k])
{
	printf("Wprowadz nominal jakim placisz(zl)\n");
	scanf("%d", &j);


	if(j!=500 && j!=200 && j!=100 && j!=50 && j!=20 && j!=10 && j!=5 && j!=2 && j!=1)
	{
		printf("Wpisano nieprawidlowy nominal\n");
	}
	else
	{
		p=p+j;
	}


	if (p<cena[k])
	{
		brak=cena[k]-p;
		printf("Brakuje jeszcze %dzl\n\n", brak);
	}

	else
	break;
}


if (p==cena[k])
{
	printf("Dziekujemy za zakupy\n");
	return 0;
}

		 FILE *plik;
        	int mon[7];
        	plik = fopen("monety", "r");

                for(int i = 0; i < 8; ++i)
                {
                        fscanf(plik, "%d", &zm);
                        mon[i] = zm;
                }
                fclose(plik);


if (p>cena[k])
{
	reszta=p-cena[k];
	printf("\nTwoja reszta: %dzl\n", reszta);


	while (reszta>=100)
	{
		if(mon[0]!=0)
		{
			printf("100\t");
			mon[0]=mon[0]-1;
			reszta=reszta-100;
		}
		else
		break;
	}

	while (reszta>=50)
        {
                if(mon[1]!=0)
                {
                        printf("50\t");
                        mon[1]=mon[1]-1;
                        reszta=reszta-50;
                }
                else
                break;
        }

	while (reszta>=20)
        {
                if(mon[2]!=0)
                {
                        printf("20\t");
                        mon[2]=mon[2]-1;
                        reszta=reszta-20;
                }
                else
                break;
        }

	while (reszta>=10)
        {
                if(mon[3]!=0)
                {
                        printf("10\t");
                        mon[3]=mon[3]-1;
                        reszta=reszta-10;
                }
                else
                break;
        }

	while (reszta>=5)
        {
                if(mon[4]!=0)
                {
                        printf("5\t");
                        mon[4]=mon[4]-1;
                        reszta=reszta-5;
                }
                else
                break;
        }

	while (reszta>=2)
        {
                if(mon[5]!=0)
                {
                        printf("2\t");
                        mon[5]=mon[5]-1;
                        reszta=reszta-2;
                }
                else
                break;
        }

	while (reszta>=1)
        {
                if(mon[6]!=0)
                {
                        printf("1\t");
                        mon[6]=mon[6]-1;
                        reszta=reszta-1;
                }
                else
                break;
        }


		 plik = fopen("monety", "w");
                for(int i = 0; i < 8; i++)
                {
                        fprintf(plik, "%d ", mon[i]);
                }
                fclose(plik);


if (reszta==0)
	printf("\n\nDziekujemy za zakupy!\n");
else
	printf("UWAGA! Automat nie posiada wystarczajacej ilosci monet\n");


}





return 0;
}

#include<stdio.h>
#include<string.h>
#include "obrazek.c"

int main()
{
char lit;
char gracz1[20],gracz2[20];
int i,il,licz,proba=10;
	printf("Podaj nazwę gracza numer 1:");
	scanf("%s",gracz1);
	printf("Podaj nazwę gracza numer 2:");
	scanf("%s",gracz2);
	printf("%s podaj ilość liter w słowie:",gracz1);
	scanf("%d",&il);
	getchar();
	char tab[il], tab2[il];
	for(i=0;i<il;i++)
		tab2[i]='_';


	printf("%s podaj słowo:",gracz1);
	for(i=0;i<il;i++)
		scanf("%1c",&tab[i]);
	getchar();

	for(i=0;i<70;i++)
		printf("\n");
	printf("%s masz %d prób.\n",gracz2,proba);
	while(proba>0)
	{
		printf("%s podaj jedną literę: ",gracz2);
		scanf("%1c",&lit);
		getchar();
		licz=0;
	
		for(i=0;i<il;i++)
		{
			
			if (tab[i]==lit)
			{
				licz=licz+1;
				tab2[i]=tab[i];
			}
		}
		if(licz<1)
		{
			printf("\nNie ma litery %c. \n",lit);
			proba=proba-1;
			obrazek(proba);
		}
		else
		{
			printf("\nLitera %c jest w wyrazie.\nIlość: %d\n",lit,licz);	
			obrazek(proba);
		}
		for(i=0;i<il;i++)
		{
			printf("%c",tab2[i]);
		}		
		if( strcmp(tab,tab2)!=0 )
		{
			printf("\nZostało Ci %d prób.\n\n",proba);
		}
		else
		{
			printf("\nGratulacje, zgadłeś!\n%s wygrywa!\n",gracz2);
			proba=-1;
		}
	}
	if(proba==0)
	{
		printf("%s, niestety, nie udało Ci się zgadnąć :(.\nWygrywa %s!\n",gracz2,gracz1);
	}
	return 0;
}	



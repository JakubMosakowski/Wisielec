#include<stdlib.h>
#include<time.h>
#include<stdio.h>

int main(){

	srand(time(NULL));
	char gracz[30],wybor1;
	int wybor1int,x,i;
	char kraje[57][13]={"Polska","Rosja","Niemcy","Holandia","Australia","Norwegia","Litwa","Kanada","Boliwia","Honduras","Afganistan","Albania","Algieria","Argentyna","Armenia","Austria","Bangladesz","Belgia","Chile","Chiny","Czechy","Dania","Egipt","Ekwador","Estonia","Etiopia","Finlandia","Francja","Grecja","Hiszpania","Indie","Irak","Iran","Irlandia","Islandia","Izrael","Japonia","Kenia","Kolumbia","Kostaryka","Kuba","Kuwejt","Libia","Lichtenstein","Luksemburg","Malezja","Maroko","Meksyk","Pakistan","Paragwaj","Peru","Portugalia","Szwecja","Ukraina","Urugwaj","Wietnam"};
/*	char miasta[][]={};
	char zwierzeta[][]={};
	char rosliny[][]={};
	char przedmioty[][]={};	
*/
	printf("Podaj nazwę gracza: ");
	scanf("%s",gracz);
	while('\n'!=getchar());
while(1==1){	
	printf("\n\n1.)Kraje\n2.)Polskie miasta\n3.)Zwierzęta\n4.)Rośliny\n5.)Przedmioty");
	printf("\n%s wybierz kategorię (wpisz cyfrę i naciśnij enter).\n",gracz);
	scanf("%c",&wybor1);

	if(wybor1!='1' && wybor1!='2' && wybor1!='3' && wybor1!='4' && wybor1!='5'){
		for(i=0;i<200;i++)
			printf("\n");
		printf("Nie podałeś poprawnej cyfry!\n");
	}else{
		wybor1int=wybor1 - '0';
		switch(wybor1int){
			case 1:
			x=rand()%57;
			printf("%s",kraje[x]);
			break;
/*
			case 2:
			x=rand()%;
			break;

			case 3:
			x=rand()%;
			break;

			case 4:
			x=rand()%;
			break;

			case 5:
			x=rand()%;
			break;
*/		}
	break;
	}
}
	return 0;
}

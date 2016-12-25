
void f_singleplayer(){

	srand(time(NULL));
	char gracz2[30],wybor1,gracz1[]={"Komputer"},lit,uLit[10];
	int wybor1int,x,i,il,licz,flagDiff,proba=10;
	char kraje[57][13]={"Polska","Rosja","Niemcy","Holandia","Australia","Norwegia","Litwa","Kanada","Boliwia","Honduras","Afganistan","Albania","Algieria","Argentyna","Armenia","Austria","Bangladesz","Belgia","Chile","Chiny","Czechy","Dania","Egipt","Ekwador","Estonia","Etiopia","Finlandia","Francja","Grecja","Hiszpania","Indie","Irak","Iran","Irlandia","Islandia","Izrael","Japonia","Kenia","Kolumbia","Kostaryka","Kuba","Kuwejt","Libia","Lichtenstein","Luksemburg","Malezja","Maroko","Meksyk","Pakistan","Paragwaj","Peru","Portugalia","Szwecja","Ukraina","Urugwaj","Wietnam"};
/*	char miasta[][]={};
	char zwierzeta[][]={};
	char rosliny[][]={};
	char przedmioty[][]={};	
*/
	for(i=0;i<10;i++)
		uLit[i]=' ';
	printf("Podaj nazwę gracza: ");
	scanf("%s",gracz2);
	while('\n'!=getchar());
	f_clear();
while(1==1){	
	printf("\n\n1.)Kraje\n2.)Polskie miasta\n3.)Zwierzęta\n4.)Rośliny\n5.)Przedmioty");
	printf("\n%s wybierz kategorię (wpisz cyfrę i naciśnij enter).\n",gracz2);
	scanf("%c",&wybor1);
	while('\n'!=getchar());
	
	if(wybor1!='1' && wybor1!='2' && wybor1!='3' && wybor1!='4' && wybor1!='5'){
		for(i=0;i<200;i++)
			printf("\n");
		printf("Nie podałeś poprawnej cyfry!\n");
	}else{
		wybor1int=wybor1 - '0';
		switch(wybor1int){
			case 1:
			x=rand()%57;
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
}	il = strlen(kraje[x]);
	char slowo2[il+1],pustaTab[il+1];	
		for(i=0;i<il;i++){// From lower case to upper case.
			kraje[x][i]=toupper(kraje[x][i]);
			slowo2[i]=kraje[x][i];
			pustaTab[i]='_';
		}
	
		f_clear();
		printf("%s masz %d prób.\n",gracz2,proba);
		printf("Ilość liter w słowie podanym przez %s:%d.\nHasło: ",gracz1,il);
		for(i=0;i<il;i++)
			printf("%c",pustaTab[i]);
		printf("\n");
		while(proba>0){
			printf("%s podaj jedną literę: ",gracz2);
			lit = getchar();
			while('\n'!=getchar());
			while(!((lit>96 && lit<123) || (lit>64 && lit<91))){//Checking input is it letter or not.
				printf("Możesz podawać tylko litery, takie które nie zawierają polskich znaków! Spróbuj ponownie:");
				lit = getchar();
				while('\n'!=getchar());
			}
			lit = toupper(lit);
			licz=0;
	
			for(i=0;i<il;i++){
				
				if (slowo2[i]==lit){
					licz=licz+1;
					pustaTab[i]=slowo2[i];
				}
			}
			if(licz<1){
				printf("\nNie ma litery %c. \n",lit);
				proba=proba-1;
				if(proba>0)
					uLit[proba]=lit;
				f_obrazek(proba);
			}
			else{
				printf("\nLitera %c jest w wyrazie.\nIlość: %d\n",lit,licz);	
				f_obrazek(proba);
			}
			printf("Hasło: ");
			for(i=0;i<il;i++){
				printf("%c",pustaTab[i]);
			}
			
			printf("\nLitery których nie ma w wyrazie:  ");
			for(i=9;i>=0;i--)
				printf("%c ",uLit[i]);
			flagDiff=0;
			for(i=0;i<il;i++){
				if(slowo2[i]!=pustaTab[i])
					flagDiff=1;
			}		
			if( flagDiff!=0 ){
				printf("\n\nZostało Ci %d prób.\n\n",proba);
				printf("-------------------------------------------------\n\n");
			}
			else{
				printf("\n\n-------------------------------------------------\n\n");
				printf("\nGratulacje, zgadłeś/aś!\n%s wygrywa!\n\n\n",gracz2);
				proba=-1;
			}
		}
		if(proba==0){
			printf("\nHasło to: ");
			for(i=0;i<il;i++){
				printf("%c",slowo2[i]);
			}
			printf("\n\n%s, niestety, nie udało Ci się zgadnąć :(.\nWygrywa %s!\n\n\n",gracz2,gracz1);
		}
	
}

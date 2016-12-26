
void f_multiplayer(){

	char lit;
	char gracz1[20],gracz2[20],*slowoH,slowo[30],uLit[10];
	int i,il=0,licz,proba=10,flaga=0,flaga2=0,flagDiff,flagUsed;
	
	for(i=0;i<10;i++)
		uLit[i]=' ';
	for(i=0;i<30;i++)
		slowo[i]='_';
		f_clear();
		printf("\nGracz numer 1 wymyśla hasło, gracz numer 2 je zgaduje.\n");
		printf("Podaj nazwę gracza numer 1:");
		scanf("%s",gracz1);
		while('\n'!=getchar());
		printf("Podaj nazwę gracza numer 2:");
		scanf("%s",gracz2);
		while('\n'!=getchar());
		printf("%s podaj jedno słowo, które będzie zgadywał/a %s:",gracz1,gracz2);

		do{//Checking input = is it letter or not.
			il=0;
			if(flaga==1 || flaga2==1)
				printf("Twoje słowo może zawierać tylko litery, takie które nie mają polskich znaków! Podaj je ponownie:");
			slowoH = getpass("");
			for(i=0;i<30;i++)
				slowo[i]=slowoH[i];
			flaga=0;
			flaga2=0;
			for(i=0;i<30;i++){
				if((slowo[i]>96 && slowo[i]<123) || (slowo[i]>64 && slowo[i]<91))
					il++;
				else if(slowo[i]!=0 && slowo[i]!='_'){
					flaga=1;
					for(i=0;i<30;i++)
						slowo[i]='_';
				}	
			}
			for(i=0;i<il;i++)
				if(slowo[i]=='_')
					flaga2=1;
		}while(flaga==1 || flaga2==1);
		char slowo2[il+1],pustaTab[il];

		for(i=0;i<il;i++){// From lower case to upper case.
			slowo[i]=toupper(slowo[i]);
			slowo2[i]=slowo[i];
			pustaTab[i]='_';
		}
	
		f_clear();
		printf("%s masz %d prób.\n",gracz2,proba);
		printf("Ilość liter w słowie podanym przez gracza %s:%d.\nHasło: ",gracz1,il);
		for(i=0;i<il;i++)
			printf("%c",pustaTab[i]);
		printf("\n");
		while(proba>0){
			printf("%s podaj jedną literę: ",gracz2);
			lit = getchar();
			while('\n'!=getchar());
			lit = toupper(lit);
			flagUsed=1;
			while(flagUsed==1){
				flagUsed=0;
				for(i=0;i<10;i++)
					if(lit==uLit[i])
						flagUsed=1;
				if(flagUsed==1){
					printf("\nUżyłeś już tej litery! Podaj inną:");
					lit = getchar();
					lit = toupper(lit);
					while('\n'!=getchar());
				}
				while(!((lit>96 && lit<123) || (lit>64 && lit<91))){//Checking input is it letter or not.
					printf("Możesz podawać tylko litery, takie które nie zawierają polskich znaków! Spróbuj ponownie:");
					lit = getchar();
					lit = toupper(lit);
					flagUsed=1;
					while('\n'!=getchar());
				}
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
				f_obrazek(proba);
				proba=proba-1;
				if(proba>0)
					uLit[proba]=lit;
			}
			else{
				printf("\nLitera %c jest w wyrazie.\nIlość: %d\n",lit,licz);	
				f_obrazek(proba);
			}
			printf("Ilość liter w słowie podanym przez %s:%d.\nHasło: ",gracz1,il);
			for(i=0;i<il;i++){
				printf("%c",pustaTab[i]);
			}
			printf("\nLitery których nie ma w wyrazie: ");
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

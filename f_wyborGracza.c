
int f_wyborGracza(){
	int i;
	char gameMode;

	while(1==1){
		printf("Tryb dla jednego gracza, wpisz \'1\'.\n");
		printf("Tryb dla dwóch graczy, wpisz \'2\'.\n");
		printf("Aby wyjść, wpisz \'3\'.\n\n");
		printf("Podaj cyfrę i naciśnij enter:\n");
		scanf("%c",&gameMode);
		if(gameMode!='1' && gameMode!='2' && gameMode!='3'){
			for(i=0;i<100;i++)
				printf("\n");
			printf("Nie podałeś poprawnej cyfry!\n");
		}
		else{
			i=gameMode - '0';
			switch( i )
			{
				case 1:
				return 1;//One player.
	
				case 2:
				return 2;//Two players.
	
				case 3:
				return 3;//Exit.
	
			}
		}
	}
return 0;

}


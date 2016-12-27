
int f_playagain(int quit) {

    int i;
    char gameMode;
    if(quit!=3) {
        while(1==1) {
            printf("\n\nAby zagrać ponownie wpisz \'1\'.\n");
            printf("Aby wyjść wpisz \'2\'.\n\n");
            printf("Podaj cyfrę i naciśnij enter:\n");
            scanf("%c",&gameMode);
            if(gameMode!='1' && gameMode!='2') {
                for(i=0; i<200; i++)
                    printf("\n");
                printf("Nie podałeś poprawnej cyfry!\n");
            }
            else if(gameMode=='1')
                return 1;
            else
                return 0;

        }
    } else
        return 0;

}

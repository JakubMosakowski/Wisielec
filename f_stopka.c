
void f_stopka(){

	int i;
	printf("Naciśnij enter aby zakończyć.");
	while('\n'!=getchar());
	
	for(i=0;i<200;i++)
		printf("\n");
	printf("\t\t\tGame \"Hangman - Wisielec\" programmed by Jakub Mosakowski.(c)\n");
	printf("\t\t\t\tmosakowskijakubsm@gmail.com\n\n");
}

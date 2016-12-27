
void f_playButton() {

    int i,j;
    char start[3][8];

    for(j=0; j<7; j++) {
        start[0][j]='-';
        start[2][j]='-';
    }
    start[0][0]='+';
    start[0][7]='+';
    start[2][0]='+';
    start[2][7]='+';
    start[1][0]='|';
    start[1][1]='Z';
    start[1][2]='A';
    start[1][3]='G';
    start[1][4]='R';
    start[1][5]='A';
    start[1][6]='J';
    start[1][7]='|';

    for(i=0; i<3; i++) {
        printf("\n\t\t\t\t\t");
        for(j=0; j<8; j++)
            printf("%c",start[i][j]);
    }

    printf("\nBy zagrać kliknij enter!");
    while('\n'!=getchar());
}

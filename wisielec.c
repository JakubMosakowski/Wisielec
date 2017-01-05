#include<stdio.h>
#include<string.h>
#include<termios.h>
#include<ctype.h>
#include<time.h>
#include<stdlib.h>
#include<unistd.h>//Library which allows to hide password.
#include "f_obrazek.c"//That function is drawing image.
#include "f_wyborGracza.c"//That function is letting player to choose game mode.
#include "f_stopka.c"//That function is printing ending.
#include "f_clear.c"//That function is clearing screen.
#include "f_playButton.c"//That function is drawing starting image.
#include "f_singleplayer.c"//This function is main singleplayer module.
#include "f_multiplayer.c"//This function is main multiplayer module.
#include "f_playagain.c"//This function is adding play again feature.
/* [c] Jakub Mosakowski 12.2016
	Simple game: "Hangman - Wisielec"
*/

int main()
{
    int wybor1,x=1;

    f_clear();
    printf("\n\n\t\t\tWitaj w grze \"Hangman - Wisielec\".\n");
    printf("\t\t\t\tŻyczę Ci dobrej zabawy!");
    f_playButton();
    f_clear();
    while(x==1) { //playagain function.
        wybor1=f_wyborGracza();
        if(wybor1==1) {
            f_singleplayer();
        }
        else if(wybor1==2) {
            f_multiplayer();
        }
        x=f_playagain(wybor1);
        f_clear();
    }
    f_stopka(wybor1,x);
    return 0;
}

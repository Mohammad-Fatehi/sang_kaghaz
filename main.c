#include <stdio.h>
/*
 * Author      : Mohammad Fatehi
 * Date        : 1400/09/03
 * Description : Tamrin2 , Exercise4
 */
int main() {
    int play1=0 , play2=0 ;
    char harekat1,harekat2;
    for (int i = 0; i < 3; ++i) {
        printf("\nplayer 1 : harekat khodeton ra vared konid : ");
        scanf(" %c",&harekat1);
        printf("\nplayer 2 : harekat khodeton ra vared konid : ");
        scanf(" %c",&harekat2);
        if(harekat1=='s' && harekat2=='t'){
            printf("player 1 emtyaz gereft !");
            play1++;}
        else if(harekat1=='t' && harekat2=='s'){
            printf("player 2 emtyaz gereft !");
            play2++;
        }
        else if(harekat1=='p' && harekat2=='s'){
            printf("player 1 emtyaz gereft !");
            play1++;
        }
        else if(harekat1=='s' && harekat2=='p'){
            printf("player 2 emtyaz gereft !");
            play2++;
        }
        else if(harekat1=='t' && harekat2=='p'){
            printf("player 1 emtyaz gereft !");
            play1++;
        }
        else if(harekat1=='p' && harekat2=='t'){
            printf("player 2 emtyaz gereft !");
            play2++;
        }
        else if(harekat1=='t' && harekat2=='t'){
            printf("harekat ha shabihe hame !");
        }
        else if(harekat1=='s' && harekat2=='s'){
            printf("harekat ha shabihe hame !");
        }
        else if(harekat1=='p' && harekat2=='p'){
            printf("harekat ha shabihe hame !");
        }

    }
    printf("\nemtyaze player 1 = %d",play1);
    printf("\nemtyaze player 2 = %d",play2);
    return 0;
}

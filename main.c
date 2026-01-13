#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
           int matris[9][9], x = 0, y = 0, a,i,j;

    srand(time(NULL));

    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            matris[i][j] = 1;
        }
    }

    matris[0][0] = 0;

    while (x < 9 || y < 9)
    {
        if (x != 8 && y != 8)
        {
            a = rand() % 2;
            if (a == 1)
            {
                x++;
                matris[x][y] = 0;
            }
            else
            {
                y++;
                matris[x][y] = 0;
            }
        }
    }

    for(x=0;x<9;x++){
        for(y=0;y<9;y++){
            if(matris[x][y]==1){
                if(rand()%100<20){
                    matris[x][y]=0;
                }
            }
        }
    }

    for(x=0;x<9;x++){
        for(y=0;y<9;y++){
            if(matris[x][y]==1){
                printf("#\t");
            }
            else{
                printf("\t");
            }
        }
    }
}

#include <stdlib.h>
#include <stdio.h>

// отрезок [A:B]  A + rand()%(B-A+1).

char * password(char * line)
{
    int i;
    for (i = 0;i < 8;i++){
                line[i]= (48+rand()%(57-48+1)); // числа 48-57
                if (i<5)
                line[++i]= (65+rand()%(90-65+1)); // заглавные 65-90
                if (i < 6)
                    line[++i]= (97+rand()%(122-97+1)); // строчные 97-122
            }
    line[i] = '\0';
return line;


}
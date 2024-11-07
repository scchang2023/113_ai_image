#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char *argv[])
{
    int i, dice[6]={0};
    srand((unsigned)time(NULL));

    for(i=0; i<50000; i++){
        dice[rand()%6]++;
    }
    for(i=0; i<6; i++){
        printf("#%d: %d times, probability = %f\n", i+1, dice[i], dice[i]/50000.0);
    }
    system("PAUSE");
    return 0;
}

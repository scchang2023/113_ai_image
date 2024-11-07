#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int main(int argc, char *argv[])
{
    int i, j, cnt[6];
    srand((unsigned)time(NULL));
    memset(cnt, 0, sizeof(cnt));
    for(i=0; i<50000; i++){
        for(j=0; j<6; j++){
            if((rand()%6) == j)
                cnt[j]++;
        }
    }
    for(j=0; j<6; j++){
        printf("Times of %d = %d\n", j+1, cnt[j]);
        printf("Probability = %f\n", (float)cnt[j]/50000);
    }
    system("PAUSE");
    return 0;
}

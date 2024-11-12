#include <stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    int i, j;
    int item[3][4];
    for(i=0;  i<3; i++){
        for(j=0; j<4; j++){
            printf("item #%2d, Area %2d : ", i+1, j+1);
            scanf("%d", &item[i][j]);
        }
    }
    printf("\n");
    for(i=0;  i<3; i++){
        printf("item #%2d : \n", i+1);
        for(j=0; j<4; j++){
            printf("%2d ", item[i][j]);
            printf("\n");
        }
    }
    system("pause");
    return 0;
}

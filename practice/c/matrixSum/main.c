#include <stdio.h>
#include<stdlib.h>

#define ROW 2
#define COL 3

int main(int argc, char *argv[])
{
    int i, j;
    int A[ROW][COL]={{3, 2, 4},
                                         {6, 1, 5}};
    int B[ROW][COL]={{2, -1, 3},
                                        {3, -4, -2}};
    int C[ROW][COL]={0};
    for(i=0; i<ROW; i++)
        for(j=0; j<COL; j++)
            C[i][j]= A[i][j]+B[i][j];
    printf("Matrix A + B = C\n");
    for(i=0; i<ROW; i++){
        for(j=0; j<COL; j++)
            printf("%3d", C[i][j]) ;
        printf("\n");
    }
    system("pause");
    return 0;
}

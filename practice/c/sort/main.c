#include <stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    int num[5]={10, 17, 50, 8, 20};
    int i, j, t;
    int flag;
    for(j=0; j<5; j++)
        printf("%4d", num[j]);
    printf("\n");
    do{
        flag = 0;
        for(i=0; i<4; i++){
            if(num[i] >= num[i+1]){
                t = num[i];
                num[i] = num[i+1];
                num[i+1] = t;
                flag = 1;
            }
        }
        for(j=0; j<5; j++)
            printf("%4d", num[j]);
        printf("\n");
    }while(flag);
    system("pause");
    return 0;
}

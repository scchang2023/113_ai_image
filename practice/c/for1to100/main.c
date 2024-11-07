#include <stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    int sum=0;

    for(int i=1; i<=100; i++)
        sum+=i;

    printf("1+2+3+...+100=%d\n", sum);
    system("PAUSE");
    return 0;
}

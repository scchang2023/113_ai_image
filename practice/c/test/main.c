#include <stdio.h>
#include<stdlib.h>

void swap( int *x, int *y){
    int t;
    t = *x;
    *x = *y;
    *y = t;
}

int main(int argc, char *argv[])
{
    int a=3, b=5;
    printf("a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("after swap : a = %d,  b= %d\n", a, b);
    system("pause");
    return 0;
}

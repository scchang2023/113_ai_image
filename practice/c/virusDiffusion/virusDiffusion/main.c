#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char *argv[])
{
    int t, n;
    printf("input time: ");
    scanf("%d",&t);
    n=pow(2,t);
    printf("virus number:%d\n", n);
    system("pause");
    return 0;
}

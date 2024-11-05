#include <stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    int number;
    printf("please input a number : ");
    scanf("%d", &number);
    if(number%2==0)
    {
        printf("this is even: %d\n", number);
        number+=1;
    }
    else
    {
        printf("this is odd: %d\n", number);
        number*=2;
    }
    system("pause");
    return 0;
}

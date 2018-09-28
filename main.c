#include <stdio.h>
#include <stdlib.h>

int main()
{
    int countingNumber = 0;

    do
    {
        printf("%d\n", countingNumber);
        countingNumber+=2;
    } while (countingNumber != 102);



    //printf("Hello world!\n");
    return 0;
}

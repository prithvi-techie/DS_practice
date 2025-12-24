#include <stdio.h>
#include <conio.h>
int main()
{
    int r, a;

    printf("enter : ");
    scanf("%d",&r);

    if ( r % r  == 0){
        printf("prime number");
    }
    else {
        printf("not");
    }
    return 0;
}

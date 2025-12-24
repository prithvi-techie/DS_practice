#include <stdio.h>
#include <conio.h>
int main()
{
    int n, i;
    printf("enetr the value: ");
    scanf("%d",&n);
    

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            break;
        }
    }
    if (i == n)
    {
        printf("prime");
    }
        else{ printf("not prime");
    }
    return 0;
}


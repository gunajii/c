#include <stdio.h>

void main()
{
    int slow;
    printf("Enter a input value\n");
    scanf("%d", &slow);
    if (slow==1)
    {
        /* code */printf("The switch is on");

    }
    else if (slow==0)
    {
        /* code */printf("The switch is off");
    }
    else {
        printf("Invalid input value");
    }
    
}
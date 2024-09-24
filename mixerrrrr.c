#include <stdio.h>
#include <time.h>
int main()
{
    int mixer;
    int timee;
    int i;
    printf("Enter 1 if you want to chop \nEnter 2 if you want to blend \n");
    scanf("%d", &mixer);
    printf("Enter 5 or 10 according to your time requirement \n");
    scanf("%d", &timee);
    if (mixer==1 && timee==5)
    {
        printf("Chopping for 5 seconds \n");
       
        for (i = 5; i > 0; i--)
    {
        printf("%d\n", i);
        sleep(1);  // Wait for 1 second
    }
        
       
       Sleep(5);
       printf("Chopping is done");
    }
    else if (mixer==2 && timee==5)
    {
        printf("Blending for 5 seconds \n");
           for (i = 5; i > 0; i--)
    {
        printf("%d\n", i);
        sleep(1);  // Wait for 1 second
    }
        
       Sleep(5);
          printf("Blending is done ");
    }
     else if (mixer==1 && timee==10)
    {
        printf("Chopping for 10 seconds \n");
          for (i = 10; i > 0; i--)
    {
        printf("%d\n", i);
        sleep(1);  // Wait for 1 second
    }
       Sleep(10);
         printf("Chopping is done ");
    }
     else if (mixer==2 && timee==10)
    {
        printf("Blending for 10 seconds \n");
           for (i = 10; i > 0; i--)
    {
        printf("%d\n", i);
        sleep(1);  // Wait for 1 second
    }
       Sleep(10);
          printf("Blending is done ");
    }
    else{
        printf("Invalid command");
    }
    
}
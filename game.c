#include <stdio.h>
#include <time.h>
#include <windows.h>
int main()
{
    int role;
    int ability;
    int i;
     printf("Welcome Adventurer!\n");
    printf("Enter 1 if you want to become a mage! \nEnter 0 if you wish to become a Swordsman! \n");
    scanf("%d", &role);
    printf("Enter 5 if you wish to gain Agility, and 10 if you wish to gain Strength. Note: Equal amounts of time will be required. \n");
    scanf("%d", &ability);
    
    if(role==0 && ability==5){
           
           for(i=4 ; i>0 ; i--)

           {printf("%d \n", i);
           Sleep(1000);}
           printf("You have become a Swordsman and you have gained agility!");
    }
   else if (role==1 && ability==5)
{
    
           for(i= 4; i>0 ; i--)
           {
           printf("%d \n", i);
           Sleep(1000);}
           printf("You have become a Mage and you have gained agility!");
}

else if(role==0 && ability==10)
{
          
           for(i=9 ; i>0 ; i--)
{
           printf("%d \n", i);
           Sleep(1000);}
           printf("You have become a Swordsman and you have gained strength!");
}
else if(role==1 && ability==10)
{
   
           for(i=9 ; i>0 ; i--)

           {printf("%d \n", i);
           Sleep(1000);}
           printf("You have become a Mage and you have gained strength!");
}
else
{
    printf("invalid command");
}
return 0;
}








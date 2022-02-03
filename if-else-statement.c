/*program Voting using if-else statement*/
#include<stdio.h>
int main()
{
int age;
printf("Enter a age\n");
scanf("%d",&age);
printf("Your age is %d as you entered\n",age);
if (age>=18)
{
    printf("You Can Vote!\n");
}
else 
{
    printf("You Cannot Vote!\n");
}

return 0;
}
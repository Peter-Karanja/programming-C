//program to detemirne voter eligibility of a Kenyan  
#include<stdio.h>
int main()
{
int age;
char nationality="Kenyan";

printf("Enter age");
scanf("%d",&age);

printf("Enter your nationality");
scanf("%d",& nationality);

if((age>=18) && (nationality=="Kenyan"))
{
printf("you are eligible to vote");
}
else
{
printf("you are not eligible to vote");
}
return 0;

} 

#include<stdio.h>
#include<conio.h>
int main()
{
int m;
printf("\n Enter Marks:");
scanf("%d",&m);
{
if(m<=100 && m>=85)
{
printf("\n Grade A");
}
else if(m<=84 && m>=70)
{
printf("\n Grade B");
}
else if(m<=69 && m>=55)
{
printf("\n Grade C");
}
else if(m<=54 && m>=40)
{
printf("\n Grade D");
}
else
{
printf("\n Grade F");
}
}
return 0;
}

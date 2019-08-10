The coffee shop that you use often has a service that is limited today.

- When purchasing coffee, the price for the next purchase will be P% off.
- Truncation after decimal point in each price reduction

You have noticed that the price cuts are cumulative.
If you drink coffee many times, you will be able to drink coffee for free.

You want to drink coffee for free, so you will calculate how many INR you can pay for later.



#include<stdio.h>
#include<stdlib.h>
int main()
{
   int X,P,S=0;
   scanf("%d%d",&X,&P);
   P=100-P;
   while(X>0)
   {
       S=S+X;
       X=(P*X)/100;
   }
   printf("%d",S);
   return 0;
}

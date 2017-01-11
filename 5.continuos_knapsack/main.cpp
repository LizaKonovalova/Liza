#include <stdio.h>
int continuos_knapsack[] = { 20,100,20,20,50,200,40,150,10,100 };
int main()
{
int n, q, x;
scanf("%d",&n);
x=0;
for(int i = 0; i < 10; ++i)
{
q = continuos_knapsack[i];
x += n / q;
n %= q;
}
if(n > 0) x = 470;
printf("%d",x);
return 0;
}

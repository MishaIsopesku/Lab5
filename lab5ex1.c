#include <stdio.h>
#include <math.h>
#include <stdlib.h>

const int size()
{
int n;
printf("Введіть n: ");
scanf("%d", &n);
return n > 0? n : fabs(n);
}

int rost(int * a, const int n)
{
int r = 1;
for(int x = 1; x < n; x++)
{
if(a[x-1] >= a[x])
{
r = 0;
break;
}
}
return r;
}

int main()
{
const int n = size();
int a[n], b[n];
int s;
for(int x = 0; x < n; x++)
{
scanf("%d", &a[x]);
if(a[x] >= 0) b[x] = a[x];
else b[x] = pow(a[x], 2.0); 
}
if(rost(b, n))
{
s = 1;
for(int x = 0; x < n; x++) s *= b[x]; 
printf("Отримано добуток: ");
}
else
{
s = 0;
for(int x = 0; x < n; x++) s += a[x];
printf("Отримали сумму: ");
}
printf("%d.\n", s);

return 0;
}
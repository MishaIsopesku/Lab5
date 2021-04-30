#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

const int fnn()
{
int n;
printf("Введіть n: ");
scanf("%d", &n);
return n;
}

int main()
{
const int n = fnn();
int A[n]; /* для ручного ввода */
for(int x = 0; x < n; x++)
{
int tmp;
printf("Введіть число: ");
scanf("%d", &tmp);
A[x] = tmp;
putchar('\n');
}

int maxAbs = A[0];
int lastZero = -1;
int sum = 0;
for(int x = 1; x < n; x++)
{
if(A[x] == 0) lastZero = x; /* шукаєм послідній ноль */
if( fabs(A[x]) > fabs(maxAbs) ) maxAbs = A[x];
/* шукаєм максимальний по модулю элемент */
}
printf("Максимальний по модулю елемент масиву дорівнює: %d.\n", maxAbs);
if(lastZero > -1) 
{
for(int x = lastZero + 1; x < n; x++)
sum += A[x];
printf("Сума елементів після останнього нульового значення становить: %d.\n", sum);
}
else
{
printf("Нулів в массиві немає. \n");
}

printf("\n\n");

/* ******************************** */

int B[n]; /* для заповнення генератором */
srand(time(NULL)); 

for(int x = 0; x < n; x++)
{
B[x] = rand() % 101 * pow(-1.0, rand() % 2);
printf("%d ", B[x]);
}
putchar('\n');

maxAbs = B[0];
lastZero = -1;
sum = 0;

for(int x = 1; x < n; x++)
{
if(B[x] == 0) lastZero = x; /* шукаєм послідній ноль */
if( fabs(B[x]) > fabs(maxAbs) ) maxAbs = B[x];
/* шукаєм максимальний по модулю элемент */
}
printf("Максимальний по модулю елемент массива дорівнює: %d.\n", maxAbs);
if(lastZero > -1)
{
for(int x = lastZero + 1; x < n; x++)
sum += B[x];
printf("Сумма элементів після посліднього нулевого значения становить: %d.\n", sum);
}
else
{
printf("Нулів в массиві немає. \n");
}

return 0;
}
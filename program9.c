#include <stdio.h>
#include<conio.h>
int main()
{
int a = 65;
int b= 120;
clrscr();
printf(" value of i=%d k=%d before swapping", a, b);
a = a^ b;
b = a ^ b;
a = a ^ b;
printf("value of i=%d k=%d after swapping", a, b);
getch();
    return 0;
}

#include<conio.h>
#include<stdio.h>
int main()
{ clrscr();
void value(int,int);
void refrence(int *,int *);
int a,b;
printf(" Enter 2 numbers ");
scanf(" %d %d",&a,&b);
value(a,b);
printf(" Values of a and b after passing through call by value is %d and %d\n",a,b);
refrence(&a,&b);
printf(" Values of a and b after passing through call by refrence is %d and %d\n  ",a,b);
getch();
return 0;
}
void value(int a, int b)
{ a=a+b;
  b=a-b;
  a=a-b;
}
void refrence(int *a,int *b)
{ *a=*a + *b;
  *b=*a - *b;
  *a=*a - *b;
}                  sajdreb
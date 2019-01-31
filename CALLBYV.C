# include<iostream.h>
# include<conio.h>
void swap(int,int)
{ int c;
c=a;
a=b;
b=c;
}
void main()
{  clrscr();
int a,b;
cout<<"enter value of a\n";
cin>>a;
cout<<"enter value of b\n";
cin>>b;
swap(a,b);
cout<<"value of a:\n"<<a;
cout<<"value of b:\n"<<b;
getch();
}
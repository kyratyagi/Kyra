#include<iostream.h>
#include<conio.h>
class books{
private:
int p,a,t;
char *pub,*author,*title;
int stock;
float price;
public:
books(){
  p=0,a=0,t=0;
pub=new char[p];
author=new char[a];
title=new char[t];
}
void getdata()
{
cout<<"Enter Title name\n";
gets(title);
t=strlen(title);
cout<<"\nEnter Author name\n";
gets(author);
a=strlen(author);
cout<<"\nEnter Publisher name\n";
gets(publisher);
p=strlen(publisher);
cout<<"\nEnter price\n";
cin>>price;
cout<<"\n Enter Stock\n":
cin>>stock;
}
void showdata(char author )
{



int search(char author,
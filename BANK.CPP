#include<iostream.h>
#include<conio.h>
class account;

class account
{
 double accno;
 char name[50];
 char type[50];
 double bal;

 public:
 account()
 {
  accno=0;

  bal=0;
  }
 void input()
 {
   cout<<"\n Enter account number : ";
   cin>>accno;
   cout<<"\n Enter name : ";
   cin>>name;
   cout<<"\n Enter type : ";
   cin>>type;
   cout<<"\n Enter balance : ";
   cin>>bal;
 }

 void deposit()
 {double x;
  cout<<"\n Enter amount to be deposited in  account no. "<<accno;
  cin>>x;
  bal+=x;
  }
  void withdraw()
  {
   double x;
   cout<<"\n Enter amount to be withdraw ";
   cin>>x;
   if(x>bal)
   cout<<"\n You are Poor ";
   else
   bal-=x;
   }

  double getacc()
  {
   return accno;
   }
  void output()
  {
   cout<<"\n Account no. : "<<accno;
   cout<<"\n NAME : "<<name;
   cout<<"\n Type : "<<type;
   cout<<"\n Balance : "<<bal;

  }

  friend account search(double,account,int);
  };
  account search(double acc,account a[5], int i)
 { int flag=0,j=0;account b;
  for( j=0;j<i;j++)
  { if(acc==a[j].getacc())
   { return a[j];
      flag++;
	}
   }
      if (flag==0)
     { cout<<"\n Not found ";
       return b;
    }
  }
 void main()
 {clrscr();
  account a[5];
  int i=-1;
  int ch;
  for( ; ; )
  {
  cout<<"\n 1. To create account ";
  cout<<"\n 2. To deposit  ";
  cout<<"\n 3. To withdraw ";
  cout<<"\n 4. To display ";
  cout<<"\n 5. To Exit ";
  cin>>ch;

   if ( ch==1)
   {i++;
   a[i].input();
       }
  else if(ch==2)
  { double acc;
    account b;
   cout<<"\n Enter accno : ";
   cin>>acc;
   b=search(acc,a,i);
   b.deposit();
   }
   else if(ch==3)
   {
    double acc;
    account b;
    cout<<"\n Enter accno : ";
   cin>>acc;
   b=search(acc,a,i);
   b.withdraw();
   }
   else if(ch==4)
   {int j=0;
    for (j;j<=i;j++)
    a[j].output();
   }

   else
   {break;
	}
 }
  getch();
  }




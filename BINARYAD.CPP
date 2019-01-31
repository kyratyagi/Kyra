#include<iostream.h>
#include<conio.h>
char carry='0';
char addBinary(char, char);
void main()
{
	char a[4], b[4], c[5];

	c[0]='0';

	for(int i=0;i<4;i++){
		cin>>a[i];
	}

	for(i=0;i<4;i++){
		cin>>b[i];
	}

	for(i=3;i>=0;i++){
		if(carry=='1')
		       c[i+1] = addBinary(carry, a[i]);
		c[i+1]=addBinary(a[i],b[i]);

		if((carry=='1'&&a[i]=='1')||(a[i]=='1'&&b[i]=='1')||(b[i]=='1'&&carry=='1'))
			carry='1';
		else
			carry='0';
	}

	if(carry=='1')
		c[0]='1';

	for(i=0;i<5;i++)
		cout<<c[i];

	getch();
}
char addBinary(char first, char second){
	if(first=='1' && second=='1'){
		return '0';
	}
	else if(first=='1' || second=='1')
		return '1';

	else
		return '0';

}

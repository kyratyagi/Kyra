#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{	int x1,y1,x2,y2,x,y,dx,dy,i,p1,p2,gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\tc\\bgi");
	clrscr();
	printf("enter the coordinates of the line:");
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	dx=abs(x2-x1);
	dy=abs(y2-y1);

	putpixel(x1,y1,RED);
	if(dy<dx)
	{	p1=2*dy-dx;
		while(!(x==x2&&y==y2))
		{	if(p1<0)
			{	x=x+1;
				y=y;
				putpixel(x,y,RED);
				p2=p1+2*dy;
			}
			else
			{	x=x+1;
				y=y+1;
				putpixel(x,y,RED);
				p2=p1+(2*dy-2*dx);
			}
		}
	}
	getch();
	closegraph();
}

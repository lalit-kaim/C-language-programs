#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
void main()
{

int gd=DETECT,gm;
int i,j,r,x=0,y,xc,yc,c=21;
float d;
clrscr();
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
r=5;
xc=250;
yc=250;
xx:
for(j=1;j<10;j++){
r=r+20;
d=1.25-r;
y=r;
x=0;
do
{
if(d<0.0)
{
x=x+1;
d=d+2*x+1;
}
else
{
x=x+1;
y=y-1;
d=d+2*x-2*y+10;
}
putpixel(xc+x,yc+y,c);
putpixel(xc-y,yc-x,c);
putpixel(xc+y,yc-x,c);
putpixel(xc-y,yc+x,c);
putpixel(xc+y,yc+x,c);
putpixel(xc-x,yc-y,c);
putpixel(xc+x,yc-y,c);
putpixel(xc-x,yc+y,c);
}
while(x<y);
delay(100);
}
r=5;
c=c+1;
goto xx;
getch();
closegraph();
}
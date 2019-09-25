#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int a(int n){
 return ((n>0)?n:n*(-1));
}
void dda(int x0,int y0, int x1,int y1,int z,int d){
 int i;
 int dx=x1-x0;
 int dy=y1-y0;
 int step=a(dx)>a(dy)?a(dx):a(dy);
 float xinc=dx/(float)step;
 float yinc=dy/(float)step;
 float x=x0;
 float y=y0;
 for(i=0;i<=step;i++){
  putpixel(x,y,z);
  x+=xinc;
  y+=yinc;
  delay(d);
 }
}
void main(){
 int gd=DETECT,gm,i,j;
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 dda(100,100,400,100,15,3);
 dda(400,200,100,200,15,3);
 dda(100,300,400,300,15,3);
 dda(100,400,400,400,15,3);
 dda(100,100,100,500,15,3);
 dda(400,100,400,400,15,3);
 for(i=101;i<=199;i++)
 dda(101,i,399,i,14,0);
 for(i=201;i<=299;i++)
 dda(101,i,399,i,11,0);
 for(i=301;i<=399;i++)
 dda(101,i,399,i,10,0);
 getch();
 closegraph();
}
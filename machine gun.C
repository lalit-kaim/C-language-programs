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
 dda(140,140,300,140,15,3);
 dda(140,160,300,160,15,3);
 dda(140,140,140,160,15,3);
 dda(300,100,500,100,15,3);
 dda(300,100,300,200,15,3);
 dda(100,200,500,200,15,3);
 dda(100,300,500,300,15,3);
 dda(100,200,100,300,15,3);
 dda(500,100,500,300,15,3);
 circle(200,320,20);
 circle(250,320,20);
 circle(300,320,20);
 circle(350,320,20);
 circle(400,320,20);
 circle(450,320,20);
 dda(200,320,450,320,15,0);
 while(!kbhit()){
  dda(100,150,105,150,4,5);
  dda(110,150,115,150,4,5);
  dda(120,150,125,150,4,5);
  dda(100,150,105,150,0,5);
  dda(110,150,115,150,0,5);
  dda(120,150,125,150,0,5);
  dda(105,150,110,150,4,5);
  dda(115,150,120,150,4,5);
  dda(125,150,130,150,4,5);
  dda(105,150,110,150,0,5);
  dda(115,150,120,150,0,5);
  dda(125,150,130,150,0,5);

  dda(50,341,130,341,15,1);
  dda(210,341,290,341,15,1);
  dda(370,341,450,341,15,1);
  dda(50,341,130,341,0,1);
  dda(210,341,290,341,0,1);
  dda(370,341,450,341,0,1);
  dda(130,341,210,341,15,1);
  dda(290,341,370,341,15,1);
  dda(450,341,530,341,15,1);
  dda(130,341,210,341,0,1);
  dda(290,341,370,341,0,1);
  dda(450,341,530,341,0,1);

 }
 getch();
 closegraph();
}

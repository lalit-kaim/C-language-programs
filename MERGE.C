#include<conio.h>
#include<stdio.h>
void mergesort(int a[], int x, int y);
void merge(int a[], int x, int q, int y);
void main(){
 int i,a[]={6,3,5,4,1,2,7};
 clrscr();
 mergesort(a,0,6);
 printf("sorted array is:");
 for(i=0;i<7;i++)
 printf(" %d",a[i]);
 getch();
}
void mergesort(int a[], int x, int y){
 if(x<y){
  int q=(y+x)/2;
  mergesort(a,x,q);
  mergesort(a,q+1,y);
  merge(a,x,q,y);
 }
}
void merge(int a[], int x, int q, int y){
 int i,j,k,n1,n2;
 int l[10],r[10];
 n1=q-x+1;
 n2=y-q;
 for(i=0;i<n1;i++)
  l[i]=a[i+x];
 for(i=0;i<n2;i++)
  r[i]=a[q+i+1];
 i=0;j=0;k=x;
 while(i<n1 && j<n2){
  if(l[i]<=r[j]){
   a[k]=l[i];
   i++;
  }
  else{
   a[k]=r[j];
   j++;
  }
  k++;
 }
 while(i<n1){
  a[k]=l[i];
  i++;
  k++;
 }
 while(j<n2){
  a[k]=r[j];
  j++;
  k++;
 }
}
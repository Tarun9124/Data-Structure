#include<stdio.h>
#include<graphics.h>
#include<math.h>
#define ROUND(x) ((int)(x+0.5))
void DDA(int x1,int y1,int x2,int y2)
{
 int dx=x2-x1,dy=y2-y1,step,k;
 float xIncr,yIncr;
 float x=x1,y=y1;
 if(abs(dx) > abs(dy))
  step = abs(dx);
 else step = abs(dy);

 xIncr = dx/(float)step;
 yIncr = dy/(float)step;
 putpixel(ROUND(x),ROUND(y),YELLOW);
 for(k=0;k<step;k++)
 {
   x += xIncr;
   y += yIncr;
   putpixel(ROUND(x),ROUND(y),YELLOW);
 }
}
void main()
{
  int x1,y1,x2,y2;
  int gd=DETECT,gm;
  clrscr();
  printf("Enter a coordinate X1:");
  scanf("%d",&x1);
  printf("Enter a coordinate Y1:");
  scanf("%d",&y1);
  printf("Enter a coordinate X2:");
  scanf("%d",&x2);
  printf("Enter a coordinate Y2:");
  scanf("%d",&y2);
  initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
  DDA(x1,y1,x2,y2);
  getch();
}

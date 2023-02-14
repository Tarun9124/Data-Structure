#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int p[3][3]={{1,50,25},{1,1,30},{1,1,1}};
int o[3][3]={{1,50,25},{1,1,30},{1,1,1}};

void draworiginal()
{
  setcolor(WHITE);
  line(o[0][0],o[1][0],o[0][1],o[1][1]);
  line(o[0][1],o[1][1],o[0][2],o[1][2]);
  line(o[0][2],o[1][2],o[0][0],o[1][0]);
}
void draw()
{
 setcolor(YELLOW);
 line(p[0][0],p[1][0],p[0][1],p[1][1]);
 line(p[0][1],p[1][1],p[0][2],p[1][2]);
 line(p[0][2],p[1][2],p[0][0],p[1][0]);
}
void iden_matrix(int m[3][3])
{
  int i,j;
  for(i=0;i<3;i++)
   for(j=0;j<3;j++)
     m[i][j]=(i==j);
}
void mm(int a[3][3],int b[3][3])
{
  int tmp[3][3]={0};
  int r,c;
  for(r=0;r<=2;r++)
    for(c=0;c<=2;c++)
      tmp[r][c]=a[r][0]*b[0][c]+a[r][1]*b[1][c]+a[r][2]*b[2][c];
  for(r=0;r<=2;r++)
   for(c=0;c<=2;c++)
     p[r][c]=tmp[r][c];
}
void scale()
{
   int m[3][3];
   int sx,sy,ref_x,ref_y;
   inden_matrix(m);
   printf("Enter sx and sy:");
   scanf("%d%d",&ref_x,&ref_y);
   m[0][1]=sx;
   m[1][1]=sy;
   m[0][2]=(1-sx)*ref_x;
   m[1][2]=(1-sy)*ref_y;
   mm(m,p);
   cleardevice();
   draworiginal();
   getch();
   draw();
}
void main()
{
 int gd=DETECT,gm;
 int choice;
 char answer;
 initgraph(&gd,&gm,"c:\\TURBOC3\\bgi");
 getch();
 scale();
 getch();
}

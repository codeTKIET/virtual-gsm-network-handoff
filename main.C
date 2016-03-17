
#include <dos.h>
#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
float small(float x1,float y1,float x2,float y2);
void drawpath(int ,int );
void about();
void wel();
void thank();
void logic();
void invalid();
int time();

void main()
{
char choice;

 
   wel();

   about();
do
{int a,b,d,c,e;
  char msg[80];
  int gdriver = EGA, gmode = EGAHI, errorcode;
  initgraph(&gdriver, &gmode, "C:\\TC\\bgi");
  setbkcolor(11);
  a = getmaxx() / 2;
  a=a-100;
  b = getmaxy() / 2;
  b=b-50;
  e=b+25;
  c=a-120;
  d=b+60;
   settextstyle(TRIPLEX_FONT, HORIZ_DIR, 1);
   setcolor(4);
      outtextxy(a,b,"1:Enter In Project");
      outtextxy(a,e,"0:Exit");
      outtextxy(c,d,"Enter Choice:");
choice=getche();

switch(choice)
{
case '1':
       logic();
       break;
case '0':
        break;
default:
//	printf("ENTER VALID CHOICE\n");
	invalid();
	break;
}
closegraph();
}
while(choice!='0');
thank();
 





}


void logic()
{





int a1,a2,a3,a4,a5,a6,a7,a8,a9;
int b1,b2,b3,b4,b5,b6,b7,b8,b9;

float x1,x2,x3,x4,q,y1,y2,y3;

int source,dest;

   int gd = EGA, gm = EGAHI, errorcode;

   int points[]={40,60,75,40,110,60,110,100,75,120,40,100,40,60};
   int good[]={110,60,145,40,180,60,180,100,145,120,110,100,110,60};
   int well[]={180,60,215,40,250,60,250,100,215,120,180,100,180,60};
   int hello[]={250,100,250,60,285,40,320,60,320,100,285,120,250,100};
   int nice[]={75,160,75,120,110,100,145,120,145,160,110,180,75,160};
   int hi[]={145,120,180,100,215,120,215,160,180,180,145,160,145,120};
   int people[]={215,120,250,100,285,120,285,160,250,180,215,160,215,120};
   int swap[]={110,180,145,160,180,180,180,220,145,240,110,220,110,180};
   int man[]={180,180,215,160,250,180,250,220,215,240,180,220,180,180};
   a1=75,a2=145,a3=215,a4=285,a5=110,a6=180,a7=250,a8=145,a9=215;
   b1=80,b2=80,b3=80,b4=80,b5=140,b6=140,b7=140,b8=200,b9=200;








    clrscr();
   initgraph(&gd, &gm, "C:\\TC\\BGI");
   drawpoly(7,points);
   drawpoly(7,good);
   drawpoly(7, well);
   drawpoly(7, hello);
   drawpoly(7,nice);
   drawpoly(7,hi);
   drawpoly(7,people);
   drawpoly(7,swap);
   drawpoly(7,man);
   outtextxy(75,80,"1");
   outtextxy(145,80,"2");
   outtextxy(215,80,"3");
   outtextxy(285,80,"4");
   outtextxy(110,140,"5");
   outtextxy(180,140,"6");
   outtextxy(250,140,"7");
   outtextxy(145,200,"8");
   outtextxy(215,200,"9");

printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\tEnter the source and destination");
scanf("%d %d",&source,&dest);
if((source!=1&&source!=2&&source!=3&&source!=4&&source!=5&&source!=6&&source!=7&&source!=8&&source!=9)||(dest!=1&&dest!=2&&dest!=3&&dest!=4&&dest!=5&&dest!=6&&dest!=7&&dest!=8&&dest!=9))
{
invalid();
}


if(source==1)
{
x1=a1;y1=b1;
}
else if(source==2)
{
x1=a2; y1=b2;
}
else if(source==3)
{
x1=a3;y1=b3;
}
else if(source==4)
{
x1=a4;y1=b4;
}
else if(source==5)
{
x1=a5;y1=b5;
}
else if(source==6)
{
x1=a6; y1=b6;
}
else if(source==7)
{
x1=a7;y1=b7;
}
else if(source==8)
{
x1=a8;y1=b8;
}
else
{
x1=a9;y1=b9;
}



if(dest==1)
{
x2=a1;y2=b1;
}
else if(dest==2)
{
x2=a2; y2=b2;
}
else if(dest==3)
{
x2=a3;y2=b3;
}
else if(dest==4)
{
x2=a4;y2=b4;
}
else if(dest==5)
{
x2=a5;y2=b5;
}
else if(dest==6)
{
x2=a6; y2=b6;
}
else if(dest==7)
{
x2=a7;y2=b7;
}
else if(dest==8)
{
x2=a8;y2=b8;
}
else
{
x2=a9;y2=b9;
}
x3=x2,y3=y2;
q=small(x1,y1,x2,y2);
if((source!=1&&source!=2&&source!=3&&source!=4&&source!=5&&source!=6&&source!=7&&source!=8&&source!=9)||(dest!=1&&dest!=2&&dest!=3&&dest!=4&&dest!=5&&dest!=6&&dest!=7&&dest!=8&&dest!=9))
{

}
else
{
printf ("The distance between source(%d) and dest(%d) is \n%f\n\n", source,dest,q);

drawpath(source , dest);
printf("\nPress enter for the path followed by user\n");
getch();
setcolor(YELLOW);
line(x1,y1,x3,y3);
}
   getch();

//}
//while((source==1||source==2||source==3||source==4||source==5||source==6||source==7||source==8||source==9)&&(dest==1||dest==2||dest==3||dest==4||dest==5||dest==6||dest==7||dest==8||dest==9));
closegraph();
}


float small(float x1,float y1,float x2 ,float y2)
{

float distance,t,v;

float distance_x = x1-x2;

float distance_y = y1-y2;

t=distance_x*distance_x;

v=distance_y*distance_y;
t=t+v;
distance=sqrt(t);

return distance;

}
void drawpath(int s,int d)
{
int t,n=0,source,dest;
if(s>=d)
{
t=s;
s=d;
d=t;
}
source=s,dest=d;

if(s==1)
   {
   if(d==2){setcolor(RED);line(75,80,145,80);n++;time();}
   if(d==3){setcolor(RED);line(75,80,145,80);time();line(145,80,115,80);time();}
   if(d==4){setcolor(RED);line(75,80,145,80);time();line(145,80,115,80);time();line(115,80,285,80);time();}
   if(d==5){setcolor(RED);line(75,80,110,140);time();}

   if(d==6){setcolor(RED);line(75,80,110,140);n++;time();line(110,140,180,140);n++;time();
	    setcolor(BLUE);line(75,80,145,80);delay(500);line(145,80,180,140);delay(500); }

   if(d==7){setcolor(BLUE); line(75,80,110,140);delay(500);line(110,140,180,140);delay(500);line(180,140,250,140);delay(500);
	   setcolor(GREEN);line(75,80,145,80);delay(500);line(145,80,215,80);delay(500);line(215,80,250,140);delay(500);
	   setcolor(RED);line(75,80,145,80);n++;time();line(145,80,180,140);n++;time();line(180,140,250,140);n++;time();}
   if(d==8){setcolor(RED);line(75,80,110,140);n++;time();line(110,140,145,200);n++;time();}
   if(d==9){setcolor(BLUE); line(75,80,145,80); delay(500); line(145,80,180,140); delay(500); line(180,140,215,200); delay(500);
	    setcolor(GREEN); line(75,80,110,140); delay(500); line(110,140,145,200); delay(500); line(145,200,215,200); delay(500);
	    setcolor(RED); line(75,80,110,140);n++; time(); line(110,140,180,140);n++; time(); line(180,140,215,200);n++; time();}
   }
if(s==2)
   {
   if(d==3){setcolor(RED);line(145,80,115,80);n++;time();}
   if(d==4){setcolor(RED);line(145,80,215,80);n++;time();line(215,80,285,80);n++;time();}
   if(d==5){setcolor(RED);line(145,80,110,140);n++;time();}
   if(d==6){setcolor(RED);line(145,80,180,140);n++;time();}
   if(d==7){setcolor(RED);line(145,80,215,80);n++;time();line(215,80,250,140);n++;time();
	    setcolor(BLUE);line(145,80,180,140);delay(500);line(180,140,250,140);delay(500);}

   if(d==8){setcolor(RED);line(145,80,110,140);n++;time();line(110,140,145,200);n++;time();
	    setcolor(BLUE);line(145,80,180,140);delay(500);line(180,140,145,200);delay(500);}

   if(d==9){setcolor(RED);line(145,80,180,140);n++;time();line(180,140,215,200);n++;time();}
   }
if(s==3)
   {
   if(d==4){setcolor(RED);line(215,80,285,80);n++;time();}
   if(d==5){setcolor(BLUE);line(215,80,180,140);delay(500);line(180,140,110,140);delay(500);
	    setcolor(RED);line(215,80,145,80);n++;time();line(145,80,110,140);n++;time();}
   if(d==6){setcolor(RED);line(215,80,180,140);n++;time();}
   if(d==7){setcolor(RED);line(215,80,250,140);n++;time();}
   if(d==8){setcolor(RED);line(215,80,180,140);n++;time();line(180,140,145,200);n++;time();}

   if(d==9){setcolor(BLUE);line(215,80,250,140);delay(500);line(250,140,215,200);delay(500);
	    setcolor(RED);line(215,80,180,140);n++;time();line(180,140,215,200);n++;time();}
   }
if(s==4)
   {
   if(d==5){setcolor(BLUE);line(285,80,215,80);delay(500);line(215,80,145,80);delay(500);line(145,80,110,140);delay(500);
	    setcolor(GREEN);line(285,80,250,140);delay(500);line(250,140,180,140);delay(500);line(180,140,110,140);delay(500);
	    setcolor(RED);line(285,80,215,80);n++;time();line(215,80,180,140);n++;time();line(180,140,110,140);n++;time();}

   if(d==6){setcolor(BLUE);line(285,80,215,80);delay(500);line(215,80,180,140);delay(500);
	    setcolor(RED);line(285,80,250,140);n++;time();line(250,140,180,140);n++;time();}
   if(d==7){setcolor(RED);line(285,80,250,140);n++;time();}

   if(d==8){setcolor(BLUE);line(285,80,215,80);delay(500);line(215,80,180,140);delay(500);line(180,140,145,200);delay(500);
	    setcolor(GREEN);line(285,80,250,140);delay(500);line(250,140,215,200);delay(500);line(215,200,145,200);delay(500);
	    setcolor(RED);line(285,80,250,140);n++;time();line(250,140,180,140);n++;time();line(180,140,145,200);n++;time();}
   if(d==9){setcolor(RED);line(285,80,250,140);n++;time();line(250,140,215,200);n++;time();}
   }
if(s==5)
   {
   if(d==6){setcolor(RED);line(110,140,180,140);n++;time();}
   if(d==7){setcolor(RED);line(110,140,180,140);n++;time();line(180,140,250,140);n++;time();}
   if(d==8){setcolor(RED);line(110,140,145,200);n++;time();}
   if(d==9){setcolor(BLUE);line(110,140,180,140);delay(500);line(180,140,215,200);delay(500);
	    setcolor(RED);line(110,140,145,200);n++;time();line(145,200,215,200);n++;time();}
   }

if(s==6)
   {
    if(d==7){setcolor(RED);line(180,140,250,140);n++;time();}
    if(d==8){setcolor(RED);line(180,140,145,200);n++;time();}
    if(d==9){setcolor(RED);line(180,140,215,200);n++;time();}
   }
if(s==7)
   {
   if(d==8){setcolor(BLUE);line(250,140,180,140);delay(500);line(180,140,145,200);delay(500);
	    setcolor(RED);line(250,140,215,200);n++;time();line(215,200,145,200);n++;time();}
   if(d==9){setcolor(RED);line(250,140,215,200);n++;time();}

   }
if(s==8)
   {
    if(d==9){setcolor(RED);line(145,200,115,200);n++;time();}
   }

if((source!=1&&source!=2&&source!=3&&source!=4&&source!=5&&source!=6&&source!=7&&source!=8&&source!=9)||(dest!=1&&dest!=2&&dest!=3&&dest!=4&&dest!=5&&dest!=6&&dest!=7&&dest!=8&&dest!=9))
{

}
else
printf("NETWORK HAS HANDOFF FOR %d TIMES  ",n);


}
void about()
{
  int b;
  int h=getmaxy() - 35;
  int k=10,j=618;
  char msg[80];
  int gdriver = EGA, gmode = EGAHI, errorcode;
  initgraph(&gdriver, &gmode, "C:\\TC\\bgi");
  setbkcolor(10);
  setcolor(RED);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR, 2);
  outtextxy(50,20, "Tatyasaheb Kore College Of Engineering & Technology");
  outtextxy(200,45,"Department Of CSE");
  settextstyle(TRIPLEX_FONT, HORIZ_DIR, 4);
  setcolor(5);
  outtextxy(160,110,"GSM NETWORK HANDOFF");
  settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
  setcolor(12);
  outtextxy(20,220,"GUIDENCE      :    Prof. C. A. KURI");
  outtextxy(20,250,"GROUP MEMBERS :    1) AKSHAY SUTAR              2) SHIVANAND SAWALGI");
  outtextxy(20,270,"                   3) UTKARSH  THORAT            4) SWAPNIL SWAMI");
  setcolor(1);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR, 2);

  for(b=0;b<39;b++)
  {
   outtextxy(k,h,"=");
   outtextxy(j,h,"=");
   k+=8;
   j-=8;
   delay(100);
       }
  closegraph();
}
void thank()
{
  int a,b;
  char msg[80];
  int gdriver = EGA, gmode = EGAHI, errorcode;
  initgraph(&gdriver, &gmode, "C:\\TC\\bgi");
  setbkcolor(6);
  a = getmaxx() / 2;
  a=a-120;
  b = getmaxy() / 2;
  b=b-50;
   settextstyle(TRIPLEX_FONT, HORIZ_DIR, 6);
   setcolor(9);
      outtextxy(a, b, "Thank YOU !");

      delay(2500);
  closegraph();
}


void invalid()
{
  int a,b,c,d;
  char msg[80];
  int gdriver = EGA, gmode = EGAHI, errorcode;
  initgraph(&gdriver, &gmode, "C:\\TC\\bgi");
  setbkcolor(6);
  a = getmaxx() / 2;
  a=a-100;
  b = getmaxy() / 2;
  b=b-50;
  c=a-15;
  d=b+65;
   settextstyle(TRIPLEX_FONT, HORIZ_DIR, 3);
   setcolor(9);
      outtextxy(a, b, "INVALID CHOICE");
      outtextxy(c,d,"ENTER VALID CHOICE");

      delay(2500);
  closegraph();
}

 void wel()
{
  int a,b;
  char msg[80];
  int gdriver = EGA, gmode = EGAHI, errorcode;
  initgraph(&gdriver, &gmode, "C:\\TC\\bgi");
  setbkcolor(14);
  a = getmaxx() / 2;
  a=a-100;
  b = getmaxy() / 2;
  b=b-50;
   settextstyle(TRIPLEX_FONT, HORIZ_DIR, 5);
   setcolor(5);
      outtextxy(a, b, "WELCOME");
      delay(2000);
  closegraph();
}


int time()
{
delay(500);
return(0);
}

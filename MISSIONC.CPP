#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
#include<stdio.h>
void main()
{
  void clock();
  int gd,gm;int a=1;
  double r,s,x,y,z=0.2094395102393;
  gd=DETECT;
  initgraph(&gd,&gm,"c:\\tc\\bgi");


  line(300,200,300,130);


  clock();
  while(a<=12)

  {
   clock();
   for(double i=0.0000000000000;i<=1.5707963267949;i+=0.1047197551197)
   {
   //1st quad//
     moveto(300,200);
     x=(sin(i))*70;
     y=(cos(i))*70;

     linerel(x,-y);
     sleep(5);
     cleardevice();
     if(a==1)
     line(300,200,300,150);
      else
     {
     moveto(300,200);
     linerel(r,-s);
     }
     clock();
   }

   for(double j=0.1047197551197;j<1.5707963267949;j+=0.1047197551197)
   {
   //2nd quad//

     moveto(300,200);
     y=(sin(j))*70;
     x=(cos(j))*70;

     linerel(x,y);
     sleep(5);
     cleardevice();
     if(a==1)

     line(300,200,300,150);

     else if(a!=1)
     {
     moveto(300,200);
     linerel(r,-s);
     }
     clock();

   }
      cleardevice();

     moveto(300,200);
     r=50*sin(z);
     s=50*cos(z);
     linerel(r,-s);
     clock();

     z+=0.2094395102393;

   for(double k=0.0000000000000;k<=1.5707963267949;k+=0.1047197551197)
   {
   //3rd quad//
     moveto(300,200);
     x=(sin(k))*70;
     y=(cos(k))*70;

     linerel(-x,y);
     sleep(5);
     cleardevice();
     moveto(300,200);
     linerel(r,-s);
     clock();
   }

     for(double m=0.1047197551197;m<1.5707963267949;m+=0.1047197551197)
   {
   //4th quad//
     moveto(300,200);
     y=(sin(m))*70;
     x=(cos(m))*70;

     linerel(-x,-y);
     sleep(5);
     cleardevice();
     moveto(300,200);
     linerel(r,-s);
     clock();
   }
     cleardevice();
     moveto(300,200);

     r=50*sin(z);
     s=50*cos(z);
     linerel(r,-s);
     z+=0.2094395102393;
     a++;

 }
     getch();
     closegraph();
     restorecrtmode();


}

void clock()
{
  circle(300,200,110);
  circle(300,200,100);

  outtextxy(250,50,"ANALOG CLOCK");
  outtextxy(150,350,"PROGRAMMED BY:");
  outtextxy(150,380,"ASHIMA SHARMA   BHARTI ARORA   SHIVANI MALHOTRA");

  outtextxy(294,104,"12");
  outtextxy(300,292,"6");
  outtextxy(206,200,"9");
  outtextxy(392,200,"3");
  setcolor(0);
  moveto(300,200);
  linerel(45,45*1.7320508075689);
  setcolor(2);
  outtextxy(getx(),gety(),"5");

  setcolor(0);
  moveto(300,200);
  linerel(45,-45*1.732058075689);
  setcolor(2);
  outtextxy(getx(),gety(),"1");

   setcolor(0);
   moveto(300,200);
   linerel(-45,45*1.732058075689);
   setcolor(2);
   outtextxy(getx(),gety(),"7");

   setcolor(0);
   moveto(300,200);
   linerel(-45,-45*1.732058075689);
   setcolor(2);
   outtextxy(getx(),gety(),"11");

   setcolor(0);
   moveto(300,200);
   linerel(45*1.732058075689,45);
   setcolor(2);
   outtextxy(getx(),gety(),"4");

    setcolor(0);
    moveto(300,200);
    linerel(45*1.732058075689,-45);
    setcolor(2);
    outtextxy(getx(),gety(),"2");

    setcolor(0);
    moveto(300,200);
    linerel(-45*1.732058075689,45);
    setcolor(2);
    outtextxy(getx(),gety(),"8");

   setcolor(0);
   moveto(300,200);
   linerel(-45*1.732058075689,-45);
   setcolor(2);
   outtextxy(getx(),gety(),"10");


 }

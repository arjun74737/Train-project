#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void main()
{
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");

setcolor(BLUE);
setfillstyle(SOLID_FILL,BLUE);
	 // CLOUD FIRST
line(330,100,422,100);
sector(345,99,90,180,15,11);
sector(360,99,75,180,17,18);
sector(385,99,0,180,26,28);
sector(405,99,0,180,18,18);
      //CLOUD SECOND
line(500,85,592,85);
sector(515,84,90,180,15,11);
sector(530,84,75,180,17,18);
sector(555,84,0,180,26,28);
sector(575,84,0,180,18,18);
      // FOR BRIGE
setcolor(RED);
line(0,getmaxy()-154,getmaxx(),getmaxy()-154);   //brige road
setfillstyle(SOLID_FILL,DARKGRAY);
bar(0,getmaxy()-161,getmaxx(),getmaxy()-155);    //thick road

setfillstyle(SOLID_FILL,RED);
bar(2,getmaxy()-155,15,getmaxy());       //left pillar
setfillstyle(SOLID_FILL,RED);
bar(getmaxx(),getmaxy()-0,getmaxx()-12,getmaxy()-155);  //second pillar
setcolor(RED);
setfillstyle(SOLID_FILL,RED);
arc(getmaxx()/2,getmaxy()+255,0,180,400);
line(50,getmaxy()-155,50,getmaxy()-43);

     getch();
     }

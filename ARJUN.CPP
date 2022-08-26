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
line(100,getmaxy()-155,100,getmaxy()-78);
line(150,getmaxy()-155,150,getmaxy()-108);
line(200,getmaxy()-155,200,getmaxy()-125);
line(250,getmaxy()-155,250,getmaxy()-140);
line(300,getmaxy()-155,300,getmaxy()-145);
line(350,getmaxy()-155,350,getmaxy()-144);
line(400,getmaxy()-155,400,getmaxy()-138);
line(450,getmaxy()-155,450,getmaxy()-125);
line(500,getmaxy()-155,500,getmaxy()-103);
line(550,getmaxy()-155,550,getmaxy()-72);
line(600,getmaxy()-155,600,getmaxy()-32);
line(50,getmaxy()-155,100,getmaxy()-78);
line(100,getmaxy()-155,150,getmaxy()-109);
line(150,getmaxy()-155,200,getmaxy()-125);
line(200,getmaxy()-155,250,getmaxy()-139);
line(250,getmaxy()-155,300,getmaxy()-145);
line(300,getmaxy()-155,350,getmaxy()-145);
line(350,getmaxy()-155,400,getmaxy()-138);
line(400,getmaxy()-155,450,getmaxy()-124);
line(450,getmaxy()-155,500,getmaxy()-102);
line(500,getmaxy()-155,550,getmaxy()-72);
line(550,getmaxy()-155,600,getmaxy()-30);
line(600,getmaxy()-155,650,getmaxy());
line(100,getmaxy()-155,50,getmaxy()-40);
line(150,getmaxy()-155,100,getmaxy()-79);
line(200,getmaxy()-155,150,getmaxy()-109);
line(250,getmaxy()-155,200,getmaxy()-125);
line(300,getmaxy()-155,250,getmaxy()-140);
line(350,getmaxy()-155,300,getmaxy()-145);
line(400,getmaxy()-155,350,getmaxy()-143);
line(450,getmaxy()-155,400,getmaxy()-135);
line(500,getmaxy()-155,450,getmaxy()-122);
line(550,getmaxy()-155,500,getmaxy()-105);
line(600,getmaxy()-155,550,getmaxy()-69);
line(650,getmaxy()-155,600,getmaxy()-29);
   // train
  // last boogie

setcolor(RED);
setfillstyle(SOLID_FILL,RED);
rectangle(50,getmaxy()-180,120,getmaxy()-220);
line(120,getmaxy()-200,50,getmaxy()-200);
floodfill(118,getmaxy()-198,RED);
setcolor(BLUE);
setfillstyle(SOLID_FILL,BLUE);
pieslice(65,getmaxy()-173,0,360,11);
pieslice(100,getmaxy()-173,0,360,11);
line(120,getmaxy()-200,150,getmaxy()-200);
line(120,getmaxy()-190,150,getmaxy()-190);
       //second last boogie
setcolor(RED);
setfillstyle(SOLID_FILL,RED);
rectangle(150,getmaxy()-180,220,getmaxy()-220);
line(220,getmaxy()-200,150,getmaxy()-200);
floodfill(200,getmaxy()-198,RED);
setcolor(BLUE);
setfillstyle(SOLID_FILL,BLUE);
pieslice(170,getmaxy()-173,0,360,11);
pieslice(205,getmaxy()-173,0,360,11);
line(220,getmaxy()-200,250,getmaxy()-200);
line(220,getmaxy()-190,250,getmaxy()-190);
	 // third boogie
setcolor(RED);
setfillstyle(SOLID_FILL,RED);
rectangle(250,getmaxy()-180,285,getmaxy()-240);
floodfill(252,getmaxy()-200,RED);
setcolor(BLUE);
setfillstyle(SOLID_FILL,BLUE);
pieslice(265,getmaxy()-175,0,360,14);
rectangle(300,getmaxy()-220,330,getmaxy()-300);
setcolor(RED);
setfillstyle(SOLID_FILL,RED);
rectangle(280,getmaxy()-220,330,getmaxy()-180);
floodfill(292,getmaxy()-218,RED);
setcolor(BLUE);
setfillstyle(SOLID_FILL,BLUE);

pieslice(295,getmaxy()-172,0,360,12);
pieslice(321,getmaxy()-173,0,360,11);
      //engine of the train

rectangle(290,getmaxy()-260,305,getmaxy()-220);
floodfill(295,getmaxy()-258,BLUE);
pieslice(331,getmaxy()-200,270,360,19);
pieslice(331,getmaxy()-200,0,90,19);
setcolor(WHITE);
setfillstyle(SOLID_FILL,WHITE);
line(290,getmaxy()-280,300,getmaxy()-280);
line(290,getmaxy()-270,300,getmaxy()-270);
line(280,getmaxy()-275,290,getmaxy()-275);
line(280,getmaxy()-265,290,getmaxy()-265);
line(293,getmaxy()-263,303,getmaxy()-263);
    getch();
     }

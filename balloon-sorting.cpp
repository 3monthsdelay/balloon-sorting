
//this C++ program will request the user to enter 5 integers.
//the program will sort it by means of bubble sorting system.
//it will also display an animated balloon that makes it more interactive and sustain the requirements
//of our professor :) this is originally made by me together with Penguins.
//Simple Program yet Memorable to Us :)

#include <iostream.h>
#include <graphics.h>
#include <dos.h>
#include <conio.h>
#include<stdio.h>


main()
{
   int i,j,a,  gd = DETECT, gm;

   initgraph(&gd,&gm," ");
   int ikot[5];
   for(a=200; a<=500; a=a+20)
   {
     sound(a);
     delay(10);
   }
   nosound();
   cout<<"Enter 5 integer:";

   setcolor (RED);
   circle(80, 200,50);
   line(80,250,80,300);
   setcolor (GREEN);
   circle(180,200,50);
   line(180,250,180,300);
   setcolor (MAGENTA);
   circle(280,200,50);
   line(280,250,280,300);
   setcolor (BLUE);
   circle(380,200,50);
   line(380,250,380,300);
   setcolor (YELLOW);
   circle(480,200,50);
   line(480,250,480,300);
   for(j=0;j<5;j++)
   {cin>>ikot[j];}
   gotoxy (10,13); cout<<ikot[0];
   gotoxy (23,13); cout<<ikot[1];
   gotoxy (35,13); cout<<ikot[2];
   gotoxy (48,13); cout<<ikot[3];
   gotoxy (60,13); cout<<ikot[4];

   delay(199);

   getch();


   for(i=200; i>5; i=i-10)
   {
	sound(i);
	clearviewport();
	setcolor (RED);
	circle(80, 75+i,50);
	line(80,125+i,80,175+i);
	delay(30);
	setcolor (GREEN);
	circle(180,130+i,50);
	line(180,180+i,180,230+i);
	delay(30);
	setcolor (MAGENTA);
	circle(280, 195+i,50);
	line(280, 245+i, 280, 295+i);
	delay(30);
	setcolor (BLUE);
	circle(380, 260+i,50);
	line(380,310+i,380, 360+i);
	delay(30);
	setcolor (YELLOW);
	circle(480,325+i,50);
	line(480, 375+i, 480, 425+i);
	delay(30);
	nosound();

   }
   int dummy=0;
   for(i=0; i<5; i++)
   {  for(j=i+1; j<5; j++)
	{if(ikot[i]>ikot[j])
		{dummy=ikot[i];
		ikot[i]=ikot[j];
		ikot[j]=dummy;
		}
	}
   }
   sound(600);
   delay(25);
   gotoxy(10,6); cout<<ikot[0];
   gotoxy(23,9); cout<<ikot[1];
   gotoxy(35,13); cout<<ikot[2];
   gotoxy(48,17); cout<<ikot[3];
   gotoxy(61,21); cout<<ikot[4];
   nosound();
   getch();
   return 0;
}

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

int flag;
int uscore;
int rcolor=2;
int l=10,m=10; //testing purpose
const int rad=14 ;
void drawC1(int col);
void drawC2(int col);
void checkcon1(int col);
void checkcon2(int col);
void removecir(int x1,int y1,int oldc);
void animate(int x,int y, int ccolor);


//=========================== Mouse pointer================

union REGS i, o;
 
int initmouse()
{
   i.x.ax = 0;
   int86(0X33,&i,&o);
   return ( o.x.ax );
}
 
void showmouseptr()
{
   i.x.ax = 1;
   int86(0X33,&i,&o);
}

void hidemopuseptr()
{
   i.x.ax = 2;
   int86(0X33,&i,&o);
}
 
void getmousepos(int *button, int *x, int *y)
{
   i.x.ax = 3;
   int86(0X33,&i,&o);
 
   *button = o.x.bx;
   *x = o.x.cx;
   *y = o.x.dx;
}

//=========================== Mouse pointer================


struct circle1
{
	int id;
	int xco;
	int yco;
	struct circle1 *next;
	int circolor;
}*head1,*head2,*head3,*head4,*head5,*head6,*head7,*head8,*head9,*head10,*head11,*head12,*head13,*head14,*temp,*var,*var1,*var2,*var3;

 //------------ main function here----------------
void main()
{
	int ch,gd=DETECT,gm,x,y, status, button,keyflag=0;
	char choice;
	head1=head2=head3=head4=head5=head6=head7=NULL;
	head8=head9=head10=head11=head12=head13=head14=NULL;
	flag=0;uscore=0;rcolor=7;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	
	
	//------------------------------ blaster and out line-------------------
		
		
		
		line(49,0,49,475);
		line(351,0,351,475);
		
		line(49,425,351,425);
		
		//------display first colour------
		setcolor(WHITE);
		rectangle(400,100,530,400);
		outtextxy(420,120,"Next Colour");
		rectangle(420,130,510,200);
		setfillstyle(SOLID_FILL,rcolor);
		floodfill(421,131,WHITE);
		
		
		setcolor(BLUE);
		rectangle(50,445,80-2,475);
		setfillstyle(SOLID_FILL,BLUE);
		floodfill(51,446,BLUE);
		
		setcolor(RED);
		rectangle(80,445,110-2,475);
		setfillstyle(SOLID_FILL,RED);
		floodfill(81,446,RED);
		
		setcolor(YELLOW);
		rectangle(110,445,140-2,475);
		setfillstyle(SOLID_FILL,YELLOW);
		floodfill(111,446,YELLOW);
		
		setcolor(GREEN);
		rectangle(140,445,170-2,475);
		setfillstyle(SOLID_FILL,GREEN);
		floodfill(141,446,GREEN);
		
		setcolor(MAGENTA);
		rectangle(170,445,200-2,475);
		setfillstyle(SOLID_FILL,MAGENTA);
		floodfill(171,446,MAGENTA);
		
		setcolor(CYAN);
		rectangle(200,445,230-2,475);
		setfillstyle(SOLID_FILL,CYAN);
		floodfill(201,446,CYAN);
		
		setcolor(BROWN);
		rectangle(230,445,260-2,475);
		setfillstyle(SOLID_FILL,BROWN);
		floodfill(231,446,BROWN);
		
		setcolor(LIGHTGREEN);
		rectangle(260,445,290-2,475);
		setfillstyle(SOLID_FILL,LIGHTGREEN);
		floodfill(261,446,LIGHTGREEN);
		
		setcolor(DARKGRAY);
		rectangle(290,445,320-2,475);
		setfillstyle(SOLID_FILL,DARKGRAY);
		floodfill(291,446,DARKGRAY);
		
		setcolor(LIGHTBLUE);
		rectangle(320,445,350,475);
		setfillstyle(SOLID_FILL,LIGHTBLUE);
		floodfill(321,446,LIGHTBLUE);
		
		

		
		
	
	//------------------------------ blaster and out line logic ends here-------------------
	
	
	
	
	
	
			while(flag!=1)
	{	
	
	
	//===================== Mouse pointer=====================
	
	
		showmouseptr();
	  while(!kbhit() && keyflag!=1)
      {
         getmousepos(&button,&x,&y);
 
         if( button == 1 )
         {
				keyflag=1;
				
         }

         }
		keyflag=0;
		hidemopuseptr();
	
	//===================== Mouse pointer logic ends here =====================
	
	
	if(x>50 && x<=80 )
	{
		ch=1;
	}
	else if(x>80 && x<=110 )
	{
		ch=2;
	}
	else if(x>110 && x<=140 )
	{
		ch=3;
	}
	else if(x>140 && x<=170 )
	{
		ch=4;
	}
	else if(x>170 && x<=200 )
	{
		ch=5;
	}
	else if(x>200 && x<=230 )
	{
		ch=6;
	}
	else if(x>230 && x<=260 )
	{
		ch=7;
	}
	else if(x>260 && x<=290 )
	{
		ch=8;
	}
	else if(x>290 && x<=320 )
	{
		ch=9;
	}
	else if(x>320 && x<=350 )
	{
		ch=10;
	}
	else
	{
		ch=7450;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
		
		/*choice=getch();
		if(choice=='1')
			ch=1;

		else if(choice=='2')
			ch=2;

		else if(choice=='3')
			ch=3;

		else if(choice=='4')
			ch=4;

		else if(choice=='5')
			ch=5;

		else if(choice=='6')
			ch=6;

		else if(choice=='7')
			ch=7;

		else if(choice=='8')
			ch=8;

		else if(choice=='9')
			ch=9;

		else if(choice=='0')
			ch=10;

		else
			ch=99;*/






		
		switch(ch)
		{
			case 1: drawC1(1); break;
			case 2: drawC1(2); break;
			case 3: drawC1(3); break;
			case 4: drawC1(4); break;
			case 5: drawC1(5); break;
			case 6: drawC1(6); break;
			case 7: drawC1(7); break;
			case 8: drawC2(8); break;
			case 9: drawC2(9); break;
			case 10: drawC2(10); break;
			case -999: flag=1; break;
			/*case 11: drawC2(11); break;
			case 12: drawC2(12); break;
			case 13: drawC2(13); break;
			case 14: drawC2(14); break;*/

			default: break;

		}

	}

	outtextxy(250,250," GAME OVER ");

	outtextxy(400,400," USER SCORE ");

	getch();
	closegraph();

}
//=============================== Main function ends here----------------









////////////////// ------------------------- draw cicle function 1---------------

void drawC1(int col)
{
	setcolor(rcolor);
	
	

	var=malloc(sizeof (struct circle1));
	
	// first column x=65
	if(col==1)
	{
		var->id=1;
		if(head1==NULL)
		{
			var->next = NULL;
			var->xco=65;
			var->yco=15;
			var->circolor=rcolor;
			head1=var;
		}

		else
		{
			var->xco=65;
			var->yco=head1->yco+30;
			var->circolor=rcolor;

			var->next=head1;
			head1=var;
		
		}
		
		animate(var->xco,var->yco,rcolor);
		
		setcolor(rcolor);
		circle(var->xco,var->yco,rad);
		setfillstyle(SOLID_FILL,rcolor);
		floodfill(var->xco,var->yco,rcolor);
		
		checkcon1(1);
	
	}
	

	// second column x=95
	if(col==2)
	{
		var->id=2;
		if(head2==NULL)
		{
			var->next = NULL;
			var->xco=95;
			var->yco=15;
			var->circolor=rcolor;
			head2=var;
		}

		else
		{
			var->xco=95;
			var->yco=head2->yco+30;
			var->circolor=rcolor;

			var->next=head2;
			head2=var;
		
		}
		
		animate(var->xco,var->yco,rcolor);
		
		setcolor(rcolor);
		circle(var->xco,var->yco,rad);
		setfillstyle(SOLID_FILL,rcolor);
		floodfill(var->xco,var->yco,rcolor);
		
		checkcon1(2);
	
	}
	
	
	
	// third column x=125
	if(col==3)
	{
		var->id=3;
		if(head3==NULL)
		{
			var->next = NULL;
			var->xco=125;
			var->yco=15;
			var->circolor=rcolor;
			head3=var;
		}

		else
		{
			var->xco=125;
			var->yco=head3->yco+30;
			var->circolor=rcolor;

			var->next=head3;
			head3=var;
		
		}
		
		animate(var->xco,var->yco,rcolor);
		
		setcolor(rcolor);
		circle(var->xco,var->yco,rad);
		setfillstyle(SOLID_FILL,rcolor);
		floodfill(var->xco,var->yco,rcolor);
	
		checkcon1(3);
	
	}
		

			// fourth column x=155
	if(col==4)
	{
		var->id=4;
		if(head4==NULL)
		{
			var->next = NULL;
			var->xco=155;
			var->yco=15;
			var->circolor=rcolor;
			head4=var;
		}

		else
		{
			var->xco=155;
			var->yco=head4->yco+30;
			var->circolor=rcolor;

			var->next=head4;
			head4=var;
		
		}
		
		animate(var->xco,var->yco,rcolor);
		
		setcolor(rcolor);
		circle(var->xco,var->yco,rad);
		setfillstyle(SOLID_FILL,rcolor);
		floodfill(var->xco,var->yco,rcolor);
	
		checkcon1(4);
	
	}
		
			// fifth column x=185
	if(col==5)
	{
		var->id=5;
		if(head5==NULL)
		{
			var->next = NULL;
			var->xco=185;
			var->yco=15;
			var->circolor=rcolor;
			head5=var;
		}

		else
		{
			var->xco=185;
			var->yco=head5->yco+30;
			var->circolor=rcolor;

			var->next=head5;
			head5=var;
		
		}
		
		animate(var->xco,var->yco,rcolor);
		
		setcolor(rcolor);
		circle(var->xco,var->yco,rad);
		setfillstyle(SOLID_FILL,rcolor);
		floodfill(var->xco,var->yco,rcolor);
		
		checkcon1(5);
	
	}
		
		
			// sixth column x=215
	if(col==6)
	{
		var->id=6;
		if(head6==NULL)
		{
			var->next = NULL;
			var->xco=215;
			var->yco=15;
			var->circolor=rcolor;
			head6=var;
		}

		else
		{
			var->xco=215;
			var->yco=head6->yco+30;
			var->circolor=rcolor;

			var->next=head6;
			head6=var;
		
		}
		
		animate(var->xco,var->yco,rcolor);
		
		setcolor(rcolor);
		circle(var->xco,var->yco,rad);
		setfillstyle(SOLID_FILL,rcolor);
		floodfill(var->xco,var->yco,rcolor);
		
		checkcon2(6);
	
	}	


			// seventh column x=245
	if(col==7)
	{
		var->id=7;
		if(head7==NULL)
		{
			var->next = NULL;
			var->xco=245;
			var->yco=15;
			var->circolor=rcolor;
			head7=var;
		}

		else
		{
			var->xco=245;
			var->yco=head7->yco+30;
			var->circolor=rcolor;

			var->next=head7;
			head7=var;
		
		}
		
		animate(var->xco,var->yco,rcolor);
		
		setcolor(rcolor);
		circle(var->xco,var->yco,rad);
		setfillstyle(SOLID_FILL,rcolor);
		floodfill(var->xco,var->yco,rcolor);
		
		checkcon2(7);

	}


				//----------------- Checking for  y co limit------
					if(var->yco > 406)
					{
						flag=1;
					}
					rcolor=rand()%13+1;
					
					
					//----- to display next color----
						setcolor(WHITE);
						rectangle(400,100,530,400);
						outtextxy(420,120,"Next Colour");
						rectangle(420,130,510,200);
						setfillstyle(SOLID_FILL,rcolor);
						floodfill(421,131,WHITE);
					
					
}














//-------------------------------------------- function drawc2 Here ---------------------


void drawC2(int col)
{
	setcolor(rcolor);
	


	var=malloc(sizeof (struct circle1));
	
	// eightth column x=275
	if(col==8)
	{
		var->id=8;
		if(head8==NULL)
		{
			var->next = NULL;
			var->xco=275;
			var->yco=15;
			var->circolor=rcolor;
			head8=var;
		}

		else
		{
			var->xco=275;
			var->yco=head8->yco+30;
			var->circolor=rcolor;

			var->next=head8;
			head8=var;
		
		}
		
		animate(var->xco,var->yco,rcolor);
		
		setcolor(rcolor);
		circle(var->xco,var->yco,rad);
		setfillstyle(SOLID_FILL,rcolor);
		floodfill(var->xco,var->yco,rcolor);
		
		checkcon2(8);

	}
	

	// ninth column x=305
	if(col==9)
	{
		var->id=9;
		if(head9==NULL)
		{
			var->next = NULL;
			var->xco=305;
			var->yco=15;
			var->circolor=rcolor;
			head9=var;
		}

		else
		{
			var->xco=305;
			var->yco=head9->yco+30;
			var->circolor=rcolor;

			var->next=head9;
			head9=var;
		
		}
		
		animate(var->xco,var->yco,rcolor);
		
		setcolor(rcolor);
		circle(var->xco,var->yco,rad);
		setfillstyle(SOLID_FILL,rcolor);
		floodfill(var->xco,var->yco,rcolor);
		
		checkcon2(9);
	
	}
	
	
	
	// tenth column x=335
	if(col==10)
	{
		var->id=10;
		if(head10==NULL)
		{
			var->next = NULL;
			var->xco=335;
			var->yco=15;
			var->circolor=rcolor;
			head10=var;
		}

		else
		{
			var->xco=335;
			var->yco=head10->yco+30;
			var->circolor=rcolor;

			var->next=head10;
			head10=var;
		
		}
		
		animate(var->xco,var->yco,rcolor);
		
		setcolor(rcolor);
		circle(var->xco,var->yco,rad);
		setfillstyle(SOLID_FILL,rcolor);
		floodfill(var->xco,var->yco,rcolor);
		
		checkcon2(10);

	}
		
/*
			// eleventh column x=365
	if(col==11)
	{
		var->id=11;
		if(head11==NULL)
		{
			var->next = NULL;
			var->xco=365;
			var->yco=15;
			var->circolor=rcolor;
			head11=var;
		}

		else
		{
			var->xco=365;
			var->yco=head11->yco+30;
			var->circolor=rcolor;

			var->next=head11;
			head11=var;

		}

		setcolor(rcolor);
		circle(var->xco,var->yco,rad);
		setfillstyle(SOLID_FILL,rcolor);
		floodfill(var->xco,var->yco,rcolor);

	}

			// twelfth column x=395
	if(col==12)
	{
		var->id=12;
		if(head12==NULL)
		{
			var->next = NULL;
			var->xco=395;
			var->yco=15;
			var->circolor=rcolor;
			head12=var;
		}

		else
		{
			var->xco=395;
			var->yco=head12->yco+30;
			var->circolor=rcolor;

			var->next=head12;
			head12=var;

		}

		setcolor(rcolor);
		circle(var->xco,var->yco,rad);
		setfillstyle(SOLID_FILL,rcolor);
		floodfill(var->xco,var->yco,rcolor);

	}


			// thirteenth column x=425
	if(col==13)
	{
		var->id=13;
		if(head13==NULL)
		{
			var->next = NULL;
			var->xco=425;
			var->yco=15;
			var->circolor=rcolor;
			head13=var;
		}

		else
		{
			var->xco=425;
			var->yco=head13->yco+30;
			var->circolor=rcolor;

			var->next=head13;
			head13=var;

		}

		setcolor(rcolor);
		circle(var->xco,var->yco,rad);
		setfillstyle(SOLID_FILL,rcolor);
		floodfill(var->xco,var->yco,rcolor);

	}


			// fourteenth column x=455
	if(col==14)
	{
		var->id=14;
		if(head14==NULL)
		{
			var->next = NULL;
			var->xco=455;
			var->yco=15;
			var->circolor=rcolor;
			head14=var;
		}

		else
		{
			var->xco=455;
			var->yco=head14->yco+30;
			var->circolor=rcolor;

			var->next=head14;
			head14=var;

		}

		setcolor(rcolor);
		circle(var->xco,var->yco,rad);
		setfillstyle(SOLID_FILL,rcolor);
		floodfill(var->xco,var->yco,rcolor);

	}	*/


				//----------------- Checking for  y co limit------
					if(var->yco > 406)
					{
						flag=1;
					}
		
					rcolor=rand()%13+1;
					
					//----- to display next color----
						setcolor(WHITE);
						rectangle(400,100,530,400);
						outtextxy(420,120,"Next Colour");
						rectangle(420,130,510,200);
						setfillstyle(SOLID_FILL,rcolor);
						floodfill(421,131,WHITE);
					
					
					
					
		
}



//-------------------------------------------- function drawc2 Ends Here ---------------------









//-------------------------- CheckCon1 baloon -----------

void checkcon1(int col)
{
		
	
		var1=malloc(sizeof (struct circle1));
		var2=malloc(sizeof (struct circle1));
		var3=malloc(sizeof (struct circle1));
				
				
				
				
		//--------- check for col 1-----------
		if(col==1)
		{
			var1=head1;
			var2=var1->next;
			var3=var2->next;
			
			
			
			if(var2==NULL || var3==NULL)
			{
				return;	
			}

			 
			if((var1->circolor == var2->circolor) && (var1->circolor == var3->circolor))
			{
				setcolor(BLACK);
				circle(var1->xco,var1->yco,rad);
				circle(var2->xco,var2->yco,rad);
				circle(var3->xco,var3->yco,rad);
				removecir(var1->xco,var1->yco,var1->circolor);
				removecir(var2->xco,var2->yco,var2->circolor);
				removecir(var3->xco,var3->yco,var3->circolor);
				
				head1=var3->next;
				uscore=uscore+3;
			}
			
			
		}
		
		
		//--------- check for col 2-----------
		if(col==2)
		{
			var1=head2;
			var2=var1->next;
			var3=var2->next;
			
			
			
			if(var2==NULL || var3==NULL)
			{
				return;	
			}

			 
			if((var1->circolor == var2->circolor) && (var1->circolor == var3->circolor))
			{
				setcolor(BLACK);
				circle(var1->xco,var1->yco,rad);
				circle(var2->xco,var2->yco,rad);
				circle(var3->xco,var3->yco,rad);
				removecir(var1->xco,var1->yco,var1->circolor);
				removecir(var2->xco,var2->yco,var2->circolor);
				removecir(var3->xco,var3->yco,var3->circolor);
				
				head2=var3->next;
				uscore=uscore+3;
				
			}
			
			
		}
		
		
		
		//--------- check for col 3-----------
		if(col==3)
		{
			var1=head3;
			var2=var1->next;
			var3=var2->next;
			
			
			
			if(var2==NULL || var3==NULL)
			{
				return;	
			}

			 
			if((var1->circolor == var2->circolor) && (var1->circolor == var3->circolor))
			{
				setcolor(BLACK);
				circle(var1->xco,var1->yco,rad);
				circle(var2->xco,var2->yco,rad);
				circle(var3->xco,var3->yco,rad);
				removecir(var1->xco,var1->yco,var1->circolor);
				removecir(var2->xco,var2->yco,var2->circolor);
				removecir(var3->xco,var3->yco,var3->circolor);
				
				head3=var3->next;
				uscore=uscore+3;
				
			}
			
			
		}
		
		//--------- check for col 4-----------
		if(col==4)
		{
			var1=head4;
			var2=var1->next;
			var3=var2->next;
			
			
			
			if(var2==NULL || var3==NULL)
			{
				return;	
			}

			 
			if((var1->circolor == var2->circolor) && (var1->circolor == var3->circolor))
			{
				setcolor(BLACK);
				circle(var1->xco,var1->yco,rad);
				circle(var2->xco,var2->yco,rad);
				circle(var3->xco,var3->yco,rad);
				removecir(var1->xco,var1->yco,var1->circolor);
				removecir(var2->xco,var2->yco,var2->circolor);
				removecir(var3->xco,var3->yco,var3->circolor);
				
				head4=var3->next;
				uscore=uscore+3;
				
			}
			
			
		}
		
		//--------- check for col 5-----------
		if(col==5)
		{
			var1=head5;
			var2=var1->next;
			var3=var2->next;
			
			
			
			if(var2==NULL || var3==NULL)
			{
				return;	
			}

			 
			if((var1->circolor == var2->circolor) && (var1->circolor == var3->circolor))
			{
				setcolor(BLACK);
				circle(var1->xco,var1->yco,rad);
				circle(var2->xco,var2->yco,rad);
				circle(var3->xco,var3->yco,rad);
				removecir(var1->xco,var1->yco,var1->circolor);
				removecir(var2->xco,var2->yco,var2->circolor);
				removecir(var3->xco,var3->yco,var3->circolor);
				
				head5=var3->next;
				uscore=uscore+3;
				
			}
			

		}
			
}

//------------------------------------- checkcon1 baloon ends here----------



//------------------------------------- checkcon2 baloon----------


void checkcon2(int col){
	
		var1=malloc(sizeof (struct circle1));
		var2=malloc(sizeof (struct circle1));
		var3=malloc(sizeof (struct circle1));
				
				
				
				
		//--------- check for col 6-----------
		if(col==6)
		{
			var1=head6;
			var2=var1->next;
			var3=var2->next;
			
			
			
			if(var2==NULL || var3==NULL)
			{
				return;	
			}

			 
			if((var1->circolor == var2->circolor) && (var1->circolor == var3->circolor))
			{
				setcolor(BLACK);
				circle(var1->xco,var1->yco,rad);
				circle(var2->xco,var2->yco,rad);
				circle(var3->xco,var3->yco,rad);
				removecir(var1->xco,var1->yco,var1->circolor);
				removecir(var2->xco,var2->yco,var2->circolor);
				removecir(var3->xco,var3->yco,var3->circolor);
				
				head6=var3->next;
				uscore=uscore+3;
				
			}
			
			
		}
			
				
		//--------- check for col 7-----------
		if(col==7)
		{
			var1=head7;
			var2=var1->next;
			var3=var2->next;
			
			
			
			if(var2==NULL || var3==NULL)
			{
				return;	
			}

			 
			if((var1->circolor == var2->circolor) && (var1->circolor == var3->circolor))
			{
				setcolor(BLACK);
				circle(var1->xco,var1->yco,rad);
				circle(var2->xco,var2->yco,rad);
				circle(var3->xco,var3->yco,rad);
				removecir(var1->xco,var1->yco,var1->circolor);
				removecir(var2->xco,var2->yco,var2->circolor);
				removecir(var3->xco,var3->yco,var3->circolor);
				
				head7=var3->next;
				uscore=uscore+3;
				
			}
			
			
		}
		
				var1=malloc(sizeof (struct circle1));
		var2=malloc(sizeof (struct circle1));
		var3=malloc(sizeof (struct circle1));
				
				
				
				
		//--------- check for col 8-----------
		if(col==8)
		{
			var1=head8;
			var2=var1->next;
			var3=var2->next;
			
			
			
			if(var2==NULL || var3==NULL)
			{
				return;	
			}

			 
			if((var1->circolor == var2->circolor) && (var1->circolor == var3->circolor))
			{
				setcolor(BLACK);
				circle(var1->xco,var1->yco,rad);
				circle(var2->xco,var2->yco,rad);
				circle(var3->xco,var3->yco,rad);
				removecir(var1->xco,var1->yco,var1->circolor);
				removecir(var2->xco,var2->yco,var2->circolor);
				removecir(var3->xco,var3->yco,var3->circolor);
				
				head8=var3->next;
				uscore=uscore+3;
				
			}
			

		}
		
				var1=malloc(sizeof (struct circle1));
		var2=malloc(sizeof (struct circle1));
		var3=malloc(sizeof (struct circle1));
				
				
				
				
		//--------- check for col 9-----------
		if(col==9)
		{
			var1=head9;
			var2=var1->next;
			var3=var2->next;
			
			
			
			if(var2==NULL || var3==NULL)
			{
				return;	
			}

			 
			if((var1->circolor == var2->circolor) && (var1->circolor == var3->circolor))
			{
				setcolor(BLACK);
				circle(var1->xco,var1->yco,rad);
				circle(var2->xco,var2->yco,rad);
				circle(var3->xco,var3->yco,rad);
				removecir(var1->xco,var1->yco,var1->circolor);
				removecir(var2->xco,var2->yco,var2->circolor);
				removecir(var3->xco,var3->yco,var3->circolor);
				
			head9=var3->next;
			uscore=uscore+3;
				
			}
			
			
		}
		
				var1=malloc(sizeof (struct circle1));
		var2=malloc(sizeof (struct circle1));
		var3=malloc(sizeof (struct circle1));
				
				
				
				
		//--------- check for col 10-----------
		if(col==10)
		{
			var1=head10;
			var2=var1->next;
			var3=var2->next;
			
			
			
			if(var2==NULL || var3==NULL)
			{
				return;	
			}

			 
			if((var1->circolor == var2->circolor) && (var1->circolor == var3->circolor))
			{
				setcolor(BLACK);
				circle(var1->xco,var1->yco,rad);
				circle(var2->xco,var2->yco,rad);
				circle(var3->xco,var3->yco,rad);
				removecir(var1->xco,var1->yco,var1->circolor);
				removecir(var2->xco,var2->yco,var2->circolor);
				removecir(var3->xco,var3->yco,var3->circolor);
				
			head10=var3->next;
			uscore=uscore+3;
				
			}
			
			
		}
		
	
}







//======================== removing circle ====================
void removecir(int x1,int y1,int oldc)
{
		int cc;
		cc=getpixel(x1,y1);
		if(cc!=0)
		{
			
			putpixel(x1,y1,BLACK);
			removecir(x1+1,y1,oldc);
			removecir(x1-1,y1,oldc);
			removecir(x1,y1+1,oldc);
			removecir(x1,y1-1,oldc);
			
		}

}
//======================== removing circle  ends here====================




//====================== animation function here =/==============================

void animate(int x,int y, int ccolor)
{

	int aniX=x,aniY=400,i;
	
	
	
	
	for(i=0;aniY >= y+30;aniY=aniY-30)
	{
		
		
		setcolor(ccolor);
		circle(x,aniY,rad);
		setfillstyle(SOLID_FILL,ccolor);
		floodfill(x,aniY,ccolor);
		
		delay(10);
		
		removecir(x,aniY,ccolor);
		
	}

}


//====================== animation function ends here =/==============================


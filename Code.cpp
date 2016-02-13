// Car Parking Using CPP Graphics Library

#include <stdlib.h>
#include <graphics.h>
#include <iostream>
using namespace std;
int main()
{
    initwindow(1100,1100);
    int i,a,b,c,d,;
	for(i=0;i<=1000;++i)
	{
    	if(i<275)
		{
			setcolor(YELLOW);
			lineto(0,125);
	    	moveto(0,0);
	    	lineto(1000,0);
	    	int j=0;
	    	for(j=100;j<=1000;j=j+100)
			{
				moveto(j,0);
				lineto(j,125);
			}
			settextstyle(1,0,2);
			setcolor(YELLOW);
			outtextxy(450,200,"PARKING LOT");
			
			settextstyle(1,0,4);
			outtextxy(45,50,"1");
			outtextxy(145,50,"2");
			outtextxy(245,50,"3");
			outtextxy(345,50,"4");
			outtextxy(445,50,"5");
			outtextxy(545,50,"6");
			outtextxy(645,50,"7");
			outtextxy(745,50,"8");
			outtextxy(845,50,"9");
			outtextxy(945,50,"0");
			setcolor(GREEN);	
    			line(i,200,100+i,200);
			line(i,200,i,250);
			line(i,250,100+i,250);
			line(100+i,250,100+i,200);
			delay(20);	
	   		cleardevice();
		}
		else
		{
			int l=0;
			for(int p=0;p<=100;++p)
			{
				setcolor(YELLOW);
				lineto(0,125);
   			 	moveto(0,0);
    			lineto(1000,0);
   			 	int j=0;
   			 	for(j=100;j<=1000;j=j+100)
				{
					moveto(j,0);
					lineto(j,125);
				}
				settextstyle(1,0,2);
				setcolor(YELLOW);
				outtextxy(450,200,"PARKING LOT");
				settextstyle(1,0,4);
				outtextxy(45,50,"1");
				outtextxy(145,50,"2");
				outtextxy(245,50,"3");
				outtextxy(345,50,"4");
				outtextxy(445,50,"5");
				outtextxy(545,50,"6");
				outtextxy(645,50,"7");
				outtextxy(745,50,"8");
				outtextxy(845,50,"9");
				outtextxy(945,50,"0");
				int k=275;
				if(p%2==0)
				{
					l++;
				}
				setcolor(GREEN);
				line(k+l,200+l+p,k+100-l,200+l);
				line(k+p,250+p,100+k,250);
				line(100+k,250,k+100-l,200+l);
				line(k+l,200+l+p,k+p,250+p);
				if(100+k-l==325)
				{
					for(int z=0;z<=325;++z)
					{
						setcolor(YELLOW);
						lineto(0,125);
			    		moveto(0,0);
    					lineto(1000,0);
			    		int j=0;
    					for(j=100;j<=1000;j=j+100)
						{	
							moveto(j,0);
							lineto(j,125);
						}
						settextstyle(1,0,2);
						setcolor(YELLOW);
						outtextxy(450,200,"PARKING LOT");
						settextstyle(1,0,4);
						outtextxy(45,50,"1");
						outtextxy(145,50,"2");
						outtextxy(245,50,"3");
						outtextxy(345,50,"4");
						outtextxy(445,50,"5");
						outtextxy(545,50,"6");
						outtextxy(645,50,"7");
						outtextxy(745,50,"8");
						outtextxy(845,50,"9");
						outtextxy(945,50,"0");
						setcolor(GREEN);
						line(k+l,200+l+p-z,k+100-l,200+l-z);
						line(k+l,200+l+p-z,k+p,250+p-z);
						line(k+p,250+p-z,100+k,250-z);
						line(100+k,250-z,k+100-l,200+l-z);
						delay(20);
						a=k;
						b=p;
						c=z;
						d=l;
						cleardevice();
						if(200+l-z==15)
						{
							break;
						}
				
					}
					break;
				}
				delay(20);
				if(100+k+l!=425)
				{
					cleardevice();
				}
			}
			break;
		}
	}
	setcolor(YELLOW);
	lineto(0,125);
	moveto(0,0);
	lineto(1000,0);
	int j=0;
	for(j=100;j<=1000;j=j+100)
		{
			moveto(j,0);
			lineto(j,125);
		}
	settextstyle(1,0,2);
	setcolor(YELLOW);
	outtextxy(450,200,"PARKING LOT");
	settextstyle(1,0,4);
	outtextxy(45,50,"1");
	outtextxy(145,50,"2");
	outtextxy(245,50,"3");
	outtextxy(345,50,"4");
	outtextxy(445,50,"5");
	outtextxy(545,50,"6");
	outtextxy(645,50,"7");
	outtextxy(745,50,"8");
	outtextxy(845,50,"9");
	outtextxy(945,50,"0");
	setcolor(GREEN);
	line(a+d,200+d+b-c,a+100-d,200+d-c);
	line(a+d,200+d+b-c,a+b,250+b-c);
	line(a+b,250+b-c,100+a,250-c);
	line(100+a,250-c,a+100-d,200+d-c);
	while (!kbhit())
	{
		delay(2000); 
   	}
	return 0;
}

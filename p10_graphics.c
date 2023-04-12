#include<stdio.h>
#include<conio.h>
#include<stdio.h>
int main()
{
	int gd=DETECT.gm;
	initgraph(&gd,&gm,"c:\\tc\\bgi");
	setbkcolor(Green);
	printf("\t\t\n\n\n\nRECTANGLE");
	rectangle(125,115,215,165);
	printf("\t\t\t\n\n\n\n\n\n\nARC");
	arc(120,200,180,0,30);
	printf("\t\t\t\n\n\nCIRCLE");
	circle(120,270,30);
	printf("\t\n\n\n\nECLIPSE");
	ellipse(120,350,0,360,30,20);
	getch();
}
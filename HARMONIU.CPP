#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main()
{
clrscr();
char ch;
cout<<"enter 'A,S,D,F,G,H,J,K'\n";
hell:
ch=getch();
switch(ch)
	{
	case 'A':sound(120);delay(150);nosound();goto hell;
	case 'S':sound(140);delay(150);nosound();goto hell;
	case 'D':sound(160);delay(150);nosound();goto hell;
	case 'F':sound(180);delay(150);nosound();goto hell;
	case 'G':sound(200);delay(150);nosound();goto hell;
	case 'H':sound(220);delay(150);nosound();goto hell;
	case 'J':sound(240);delay(150);nosound();goto hell;
	case 'K':sound(260);delay(150);nosound();goto hell;
	case 'L':sound(280);delay(150);nosound();goto hell;
	case 'Q':sound(100);delay(200);nosound();goto hell;
	case 'W':sound(110);delay(200);nosound();goto hell;
	case 'E':sound(130);delay(200);nosound();goto hell;
	case 'R':sound(150);delay(200);nosound();goto hell;
	case 'T':sound(170);delay(200);nosound();goto hell;
	case 'Y':sound(190);delay(200);nosound();goto hell;
	case 'U':sound(210);delay(200);nosound();goto hell;
	case 'I':sound(230);delay(200);nosound();goto hell;
	case 'O':sound(250);delay(200);nosound();goto hell;
	case 'P':sound(260);delay(200);nosound();goto hell;
	case 'Z':sound(270);delay(200);nosound();goto hell;
	case 'X':sound(280);delay(200);nosound();goto hell;
	case 'C':sound(290);delay(200);nosound();goto hell;
	case 'V':sound(300);delay(200);nosound();goto hell;
	case 'B':sound(310);delay(200);nosound();goto hell;
	case 'N':sound(320);delay(200);nosound();goto hell;
	case 'M':sound(330);delay(200);nosound();goto hell;
	case ',':sound(340);delay(200);nosound();goto hell;
	case '.':sound(350);delay(200);nosound();goto hell;
	case '/':sound(360);delay(200);nosound();goto hell;
	case ' ':sound(370);delay(200);nosound();goto hell;
	default:break;
	}
getch();
}
//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
bool mouseDown;
int BeginX(0), BeginY(0);
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	Form1->Button1->Caption="Очистить сетку";
	Canvas->Pen->Color=clBlack;
	Canvas->Rectangle(0,0,120,120);
	Canvas->Rectangle(120,0,240,120);
	Canvas->Rectangle(240,0,360,120);
	Canvas->Rectangle(0,120,120,240);
	Canvas->Rectangle(120,120,240,240);
	Canvas->Rectangle(240,120,360,240);
	Canvas->Rectangle(0,240,120,360);
	Canvas->Rectangle(120,240,240,360);
	Canvas->Rectangle(240,240,360,360);
}

void __fastcall TForm1::PaintBox1MouseUp(TObject *Sender,
	  TMouseButton Button, TShiftState Shift, int X, int Y)
{
	  mouseDown = false;
}

void __fastcall TForm1::PaintBox1MouseMove(TObject *Sender, TShiftState Shift,
	  int X, int Y)
{
	if(X < 360 && Y < 360)
	{
	if(mouseDown)
	{
		
		Canvas->MoveTo(BeginX, BeginY);
		Canvas->LineTo(X,Y);
	}
	BeginX=X;
	BeginY=Y;
	}
	if (X < 120 && Y < 120) 
	{
	 Canvas->Pen->Color=clBlack;
	}
	if (X > 120 && X < 240 && Y < 120)
	{
	 Canvas->Pen->Color=clRed;	
	}
	if(X > 240 && X < 360 && Y < 120)
	{
	Canvas->Pen->Color=clLime;
	}
	if (X < 120 && Y > 120 && Y < 240) 
	{
	 Canvas->Pen->Color=clYellow;
	}
	if (X > 120 && X < 240 && Y > 120 && Y < 240)
	{
	 Canvas->Pen->Color=clTeal;	
	}
	if(X > 240 && X < 360 && Y > 120 && Y < 240)
	{
	Canvas->Pen->Color=clPurple;
	}
	if (X < 120 && Y > 240 && Y < 360) 
	{
	 Canvas->Pen->Color=clBlue;
	}
	if (X > 120 && X < 240 && Y > 240 && Y < 360)
	{
	 Canvas->Pen->Color=clFuchsia;	
	}
	if(X > 240 && X < 360 && Y > 240 && Y < 360)
	{
	Canvas->Pen->Color=clMaroon;
	}
}

void __fastcall TForm1::PaintBox1MouseDown(TObject *Sender, TMouseButton Button,
	  TShiftState Shift, int X, int Y)
{
	mouseDown=true;
}


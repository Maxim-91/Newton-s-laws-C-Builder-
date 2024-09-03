//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn1Click(TObject *Sender)
{
if (CheckBox1->Checked==true&&
     CheckBox2->Checked==true&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==true)
 {
  if (RadioButton2->Checked==true&&RadioButton3->Checked==true)
  Image2->Picture->LoadFromFile("4-0-0.bmp");
  else if (RadioButton1->Checked==true&&RadioButton3->Checked==true)
  Image2->Picture->LoadFromFile("4-1-0.bmp");
  else if (RadioButton2->Checked==true&&RadioButton4->Checked==true)
  Image2->Picture->LoadFromFile("4-0-1.bmp");
  else Image2->Picture->LoadFromFile("4-1-1.bmp");
 }
//---------------
 else if (CheckBox1->Checked==true&&
     CheckBox2->Checked==false&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==true)
 {
  if (RadioButton2->Checked==true&&RadioButton3->Checked==true)
  Image2->Picture->LoadFromFile("3(1)-0-0.bmp");
  else if (RadioButton1->Checked==true&&RadioButton3->Checked==true)
  Image2->Picture->LoadFromFile("3(1)-1-0.bmp");
  else if (RadioButton2->Checked==true&&RadioButton4->Checked==true)
  Image2->Picture->LoadFromFile("3(1)-0-1.bmp");
  else Image2->Picture->LoadFromFile("3(1)-1-1.bmp");
 }
//-------------
 else if (CheckBox1->Checked==false&&
     CheckBox2->Checked==true&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==true)
 {
  if (RadioButton2->Checked==true&&RadioButton3->Checked==true)
  Image2->Picture->LoadFromFile("3(2)-0-0.bmp");
  else if (RadioButton1->Checked==true&&RadioButton3->Checked==true)
  Image2->Picture->LoadFromFile("3(2)-1-0.bmp");
  else if (RadioButton2->Checked==true&&RadioButton4->Checked==true)
  Image2->Picture->LoadFromFile("3(2)-0-1.bmp");
  else Image2->Picture->LoadFromFile("3(2)-1-1.bmp");
 }
//-----------
 else if (CheckBox1->Checked==true&&
     CheckBox2->Checked==true&&
     CheckBox3->Checked==false&&
     CheckBox4->Checked==true)
 {
  if (RadioButton2->Checked==true&&RadioButton3->Checked==true)
  Image2->Picture->LoadFromFile("3(3)-0-0.bmp");
  else if (RadioButton1->Checked==true&&RadioButton3->Checked==true)
  Image2->Picture->LoadFromFile("3(3)-1-0.bmp");
  else if (RadioButton2->Checked==true&&RadioButton4->Checked==true)
  Image2->Picture->LoadFromFile("3(3)-0-1.bmp");
  else Image2->Picture->LoadFromFile("3(3)-1-1.bmp");
 }
//--------------
 else if (CheckBox1->Checked==true&&
     CheckBox2->Checked==true&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==false)
 {
  if (RadioButton2->Checked==true&&RadioButton3->Checked==true)
  Image2->Picture->LoadFromFile("3(4)-0-0.bmp");
  else if (RadioButton1->Checked==true&&RadioButton3->Checked==true)
  Image2->Picture->LoadFromFile("3(4)-1-0.bmp");
  else if (RadioButton2->Checked==true&&RadioButton4->Checked==true)
  Image2->Picture->LoadFromFile("3(4)-0-1.bmp");
  else Image2->Picture->LoadFromFile("3(4)-1-1.bmp");
 }
 //--------------
 else if (CheckBox1->Checked==false&&
     CheckBox2->Checked==false&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==true)
 {
  if (RadioButton2->Checked==true)
  Image2->Picture->LoadFromFile("2(1)-0-0.bmp");
  if (RadioButton1->Checked==true)
  Image2->Picture->LoadFromFile("2(1)-1-0.bmp");
 }
//--------------
 else if (CheckBox1->Checked==true&&
     CheckBox2->Checked==false&&
     CheckBox3->Checked==false&&
     CheckBox4->Checked==true)
 {
  if (RadioButton2->Checked==true&&RadioButton3->Checked==true)
  Image2->Picture->LoadFromFile("2(2)-0-0.bmp");
  else if (RadioButton1->Checked==true&&RadioButton3->Checked==true)
  Image2->Picture->LoadFromFile("2(2)-1-0.bmp");
  else if (RadioButton2->Checked==true&&RadioButton4->Checked==true)
  Image2->Picture->LoadFromFile("2(2)-0-1.bmp");
  else Image2->Picture->LoadFromFile("2(2)-1-1.bmp");
 }
//---------------
 else if (CheckBox1->Checked==false&&
     CheckBox2->Checked==true&&
     CheckBox3->Checked==false&&
     CheckBox4->Checked==true)
 {
  if (RadioButton2->Checked==true&&RadioButton3->Checked==true)
  Image2->Picture->LoadFromFile("2(3)-0-0.bmp");
  else if (RadioButton1->Checked==true&&RadioButton3->Checked==true)
  Image2->Picture->LoadFromFile("2(3)-1-0.bmp");
  else if (RadioButton2->Checked==true&&RadioButton4->Checked==true)
  Image2->Picture->LoadFromFile("2(3)-0-1.bmp");
  else Image2->Picture->LoadFromFile("2(3)-1-1.bmp");
 }
//---------------
 else if (CheckBox1->Checked==true&&
     CheckBox2->Checked==false&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==false)
 {
  if (RadioButton2->Checked==true&&RadioButton3->Checked==true)
  Image2->Picture->LoadFromFile("2(4)-0-0.bmp");
  else if (RadioButton1->Checked==true&&RadioButton3->Checked==true)
  Image2->Picture->LoadFromFile("2(4)-1-0.bmp");
  else if (RadioButton2->Checked==true&&RadioButton4->Checked==true)
  Image2->Picture->LoadFromFile("2(4)-0-1.bmp");
  else Image2->Picture->LoadFromFile("2(4)-1-1.bmp");
 }
//---------------
 else if (CheckBox1->Checked==false&&
     CheckBox2->Checked==true&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==false)
 {
  if (RadioButton2->Checked==true&&RadioButton3->Checked==true)
  Image2->Picture->LoadFromFile("2(5)-0-0.bmp");
  else if (RadioButton1->Checked==true&&RadioButton3->Checked==true)
  Image2->Picture->LoadFromFile("2(5)-1-0.bmp");
  else if (RadioButton2->Checked==true&&RadioButton4->Checked==true)
  Image2->Picture->LoadFromFile("2(5)-0-1.bmp");
  else Image2->Picture->LoadFromFile("2(5)-1-1.bmp");
 }
}
//---------------------------------------------------------------------------















void __fastcall TForm1::BitBtn2Click(TObject *Sender)
{
 Form2->QRImage2->Picture=Image1->Picture;
 Form2->QRImage6->Picture=Image2->Picture;
 Form2->QuickRep1->Preview();
 Form2->QuickRep2->Preview();
}
//---------------------------------------------------------------------------




void __fastcall TForm1::CheckBox1Click(TObject *Sender)
{
  if (CheckBox1->Checked==true&&
     CheckBox2->Checked==true&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==true)
  Image1->Picture->LoadFromFile("m4m3m1m2.bmp");
//-----------
 else if (CheckBox1->Checked==true&&
     CheckBox2->Checked==false&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==true)
 Image1->Picture->LoadFromFile("m4m3m1.bmp");

 else if (CheckBox1->Checked==false&&
     CheckBox2->Checked==true&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==true)
 Image1->Picture->LoadFromFile("m4m3m2.bmp");

 else if (CheckBox1->Checked==true&&
     CheckBox2->Checked==true&&
     CheckBox3->Checked==false&&
     CheckBox4->Checked==true)
 Image1->Picture->LoadFromFile("m4m1m2.bmp");

 else if (CheckBox1->Checked==true&&
     CheckBox2->Checked==true&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==false)
 Image1->Picture->LoadFromFile("m3m1m2.bmp");
//-----------
 else if (CheckBox1->Checked==false&&
     CheckBox2->Checked==false&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==true)
 Image1->Picture->LoadFromFile("m4m3.bmp");

 else if (CheckBox1->Checked==true&&
     CheckBox2->Checked==false&&
     CheckBox3->Checked==false&&
     CheckBox4->Checked==true)
 Image1->Picture->LoadFromFile("m4m1.bmp");

 else if (CheckBox1->Checked==false&&
     CheckBox2->Checked==true&&
     CheckBox3->Checked==false&&
     CheckBox4->Checked==true)
 Image1->Picture->LoadFromFile("m4m2.bmp");

 else if (CheckBox1->Checked==true&&
     CheckBox2->Checked==false&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==false)
 Image1->Picture->LoadFromFile("m3m1.bmp");

 else if (CheckBox1->Checked==false&&
     CheckBox2->Checked==true&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==false)
 Image1->Picture->LoadFromFile("m3m2.bmp");
//----------
 else
 {
  ShowMessage("Помилка: 'Не вірне задання тіл'");
  CheckBox1->Checked=true;
 }
 
 m11->Checked=CheckBox1->Checked;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CheckBox2Click(TObject *Sender)
{
 if (CheckBox1->Checked==true&&
     CheckBox2->Checked==true&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==true)
 Image1->Picture->LoadFromFile("m4m3m1m2.bmp");
//-----------
 else if (CheckBox1->Checked==true&&
     CheckBox2->Checked==false&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==true)
 Image1->Picture->LoadFromFile("m4m3m1.bmp");

 else if (CheckBox1->Checked==false&&
     CheckBox2->Checked==true&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==true)
 Image1->Picture->LoadFromFile("m4m3m2.bmp");

 else if (CheckBox1->Checked==true&&
     CheckBox2->Checked==true&&
     CheckBox3->Checked==false&&
     CheckBox4->Checked==true)
 Image1->Picture->LoadFromFile("m4m1m2.bmp");

 else if (CheckBox1->Checked==true&&
     CheckBox2->Checked==true&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==false)
 Image1->Picture->LoadFromFile("m3m1m2.bmp");
//-----------
 else if (CheckBox1->Checked==false&&
     CheckBox2->Checked==false&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==true)
 Image1->Picture->LoadFromFile("m4m3.bmp");

 else if (CheckBox1->Checked==true&&
     CheckBox2->Checked==false&&
     CheckBox3->Checked==false&&
     CheckBox4->Checked==true)
 Image1->Picture->LoadFromFile("m4m1.bmp");

 else if (CheckBox1->Checked==false&&
     CheckBox2->Checked==true&&
     CheckBox3->Checked==false&&
     CheckBox4->Checked==true)
 Image1->Picture->LoadFromFile("m4m2.bmp");

 else if (CheckBox1->Checked==true&&
     CheckBox2->Checked==false&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==false)
 Image1->Picture->LoadFromFile("m3m1.bmp");

 else if (CheckBox1->Checked==false&&
     CheckBox2->Checked==true&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==false)
 Image1->Picture->LoadFromFile("m3m2.bmp");
//----------
 else
 {
  ShowMessage("Помилка: 'Не вірне задання тіл'");
  CheckBox2->Checked=true;
 }

 m21->Checked=CheckBox2->Checked;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CheckBox3Click(TObject *Sender)
{
 if (CheckBox1->Checked==true&&
     CheckBox2->Checked==true&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==true)
 Image1->Picture->LoadFromFile("m4m3m1m2.bmp");
//-----------
 else if (CheckBox1->Checked==true&&
     CheckBox2->Checked==false&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==true)
 Image1->Picture->LoadFromFile("m4m3m1.bmp");

 else if (CheckBox1->Checked==false&&
     CheckBox2->Checked==true&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==true)
 Image1->Picture->LoadFromFile("m4m3m2.bmp");

 else if (CheckBox1->Checked==true&&
     CheckBox2->Checked==true&&
     CheckBox3->Checked==false&&
     CheckBox4->Checked==true)
 Image1->Picture->LoadFromFile("m4m1m2.bmp");

 else if (CheckBox1->Checked==true&&
     CheckBox2->Checked==true&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==false)
 Image1->Picture->LoadFromFile("m3m1m2.bmp");
//-----------
 else if (CheckBox1->Checked==false&&
     CheckBox2->Checked==false&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==true)
 Image1->Picture->LoadFromFile("m4m3.bmp");

 else if (CheckBox1->Checked==true&&
     CheckBox2->Checked==false&&
     CheckBox3->Checked==false&&
     CheckBox4->Checked==true)
 Image1->Picture->LoadFromFile("m4m1.bmp");

 else if (CheckBox1->Checked==false&&
     CheckBox2->Checked==true&&
     CheckBox3->Checked==false&&
     CheckBox4->Checked==true)
 Image1->Picture->LoadFromFile("m4m2.bmp");

 else if (CheckBox1->Checked==true&&
     CheckBox2->Checked==false&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==false)
 Image1->Picture->LoadFromFile("m3m1.bmp");

 else if (CheckBox1->Checked==false&&
     CheckBox2->Checked==true&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==false)
 Image1->Picture->LoadFromFile("m3m2.bmp");
//----------
 else
 {
  ShowMessage("Помилка: 'Не вірне задання тіл'");
  CheckBox3->Checked=true;
 }

 m31->Checked=CheckBox3->Checked;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CheckBox4Click(TObject *Sender)
{
 if (CheckBox1->Checked==true&&
     CheckBox2->Checked==true&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==true)
 Image1->Picture->LoadFromFile("m4m3m1m2.bmp");
//-----------
 else if (CheckBox1->Checked==true&&
     CheckBox2->Checked==false&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==true)
 Image1->Picture->LoadFromFile("m4m3m1.bmp");

 else if (CheckBox1->Checked==false&&
     CheckBox2->Checked==true&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==true)
 Image1->Picture->LoadFromFile("m4m3m2.bmp");

 else if (CheckBox1->Checked==true&&
     CheckBox2->Checked==true&&
     CheckBox3->Checked==false&&
     CheckBox4->Checked==true)
 Image1->Picture->LoadFromFile("m4m1m2.bmp");

 else if (CheckBox1->Checked==true&&
     CheckBox2->Checked==true&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==false)
 Image1->Picture->LoadFromFile("m3m1m2.bmp");
//-----------
 else if (CheckBox1->Checked==false&&
     CheckBox2->Checked==false&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==true)
 Image1->Picture->LoadFromFile("m4m3.bmp");

 else if (CheckBox1->Checked==true&&
     CheckBox2->Checked==false&&
     CheckBox3->Checked==false&&
     CheckBox4->Checked==true)
 Image1->Picture->LoadFromFile("m4m1.bmp");

 else if (CheckBox1->Checked==false&&
     CheckBox2->Checked==true&&
     CheckBox3->Checked==false&&
     CheckBox4->Checked==true)
 Image1->Picture->LoadFromFile("m4m2.bmp");

 else if (CheckBox1->Checked==true&&
     CheckBox2->Checked==false&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==false)
 Image1->Picture->LoadFromFile("m3m1.bmp");

 else if (CheckBox1->Checked==false&&
     CheckBox2->Checked==true&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==false)
 Image1->Picture->LoadFromFile("m3m2.bmp");
//----------
 else
 {
  ShowMessage("Помилка: 'Не вірне задання тіл'");
  CheckBox4->Checked=true;
 }

 m41->Checked=CheckBox4->Checked;
}
//---------------------------------------------------------------------------






void __fastcall TForm1::m21Click(TObject *Sender)
{
 CheckBox2->Checked=m21->Checked;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::m31Click(TObject *Sender)
{
 CheckBox3->Checked=m31->Checked;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::m41Click(TObject *Sender)
{
 CheckBox4->Checked=m41->Checked;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::m11Click(TObject *Sender)
{
 CheckBox1->Checked=m11->Checked;
}
//---------------------------------------------------------------------------



void __fastcall TForm1::N10Click(TObject *Sender)
{
 RadioButton2->Checked=N10->Checked;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Y1Click(TObject *Sender)
{
 RadioButton1->Checked=Y1->Checked;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::y4Click(TObject *Sender)
{
 RadioButton3->Checked=y4->Checked;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::y5Click(TObject *Sender)
{
 RadioButton4->Checked=y5->Checked;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton2Click(TObject *Sender)
{
 N10->Checked=RadioButton2->Checked;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton1Click(TObject *Sender)
{
 Y1->Checked=RadioButton1->Checked;         
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton3Click(TObject *Sender)
{
 y4->Checked=RadioButton3->Checked;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton4Click(TObject *Sender)
{
 y5->Checked=RadioButton4->Checked;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn3Click(TObject *Sender)
{
 Form1->Close();        
}
//---------------------------------------------------------------------------



void __fastcall TForm1::BitBtn4Click(TObject *Sender)
{
 AboutBox->Visible=true;
}
//---------------------------------------------------------------------------



void __fastcall TForm1::BitBtn5Click(TObject *Sender)
{
 WinHelp(Form1,"HELP.hlp", HELP_CONTEXT, 2);          
}
//---------------------------------------------------------------------------






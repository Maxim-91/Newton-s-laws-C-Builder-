//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <Menus.hpp>
#include <ToolWin.hpp>
#include <ExtCtrls.hpp>
#include <Buttons.hpp>
#include <Graphics.hpp>
#include <DB.hpp>
#include <DBGrids.hpp>
#include <DBTables.hpp>
#include <Grids.hpp>
#include <CheckLst.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TPageControl *PageControl1;
        TTabSheet *TabSheet1;
        TMainMenu *MainMenu1;
        TMenuItem *N11;
        TGroupBox *GroupBox1;
        TImage *Image1;
        TGroupBox *GroupBox2;
        TRadioButton *RadioButton1;
        TRadioButton *RadioButton2;
        TGroupBox *GroupBox3;
        TRadioButton *RadioButton3;
        TRadioButton *RadioButton4;
        TBitBtn *BitBtn1;
        TTabSheet *TabSheet2;
        TPanel *Panel1;
        TCheckBox *CheckBox1;
        TCheckBox *CheckBox2;
        TCheckBox *CheckBox3;
        TCheckBox *CheckBox4;
        TImage *Image2;
        TSpeedButton *SpeedButton1;
        TSpeedButton *SpeedButton2;
        TSpeedButton *SpeedButton3;
        TSpeedButton *SpeedButton4;
        TSpeedButton *SpeedButton5;
        TMenuItem *N1;
        TMenuItem *N2;
        TMenuItem *N6;
        TMenuItem *N7;
        TMenuItem *N8;
        TMenuItem *m11;
        TMenuItem *m21;
        TMenuItem *m31;
        TMenuItem *m41;
        TMenuItem *N9;
        TMenuItem *N10;
        TMenuItem *Y1;
        TMenuItem *N13;
        TMenuItem *y3;
        TMenuItem *y4;
        TMenuItem *y5;
        TBitBtn *BitBtn3;
        TBitBtn *BitBtn2;
        TLabel *Label1;
        TBitBtn *BitBtn4;
        TBitBtn *BitBtn5;
        TMenuItem *N3;
        TMenuItem *N4;
        TMenuItem *N5;
        void __fastcall BitBtn1Click(TObject *Sender);
        void __fastcall BitBtn2Click(TObject *Sender);
        void __fastcall CheckBox1Click(TObject *Sender);
        void __fastcall CheckBox2Click(TObject *Sender);
        void __fastcall CheckBox3Click(TObject *Sender);
        void __fastcall CheckBox4Click(TObject *Sender);
        void __fastcall m21Click(TObject *Sender);
        void __fastcall m31Click(TObject *Sender);
        void __fastcall m41Click(TObject *Sender);
        void __fastcall m11Click(TObject *Sender);
        void __fastcall N10Click(TObject *Sender);
        void __fastcall Y1Click(TObject *Sender);
        void __fastcall y4Click(TObject *Sender);
        void __fastcall y5Click(TObject *Sender);
        void __fastcall RadioButton2Click(TObject *Sender);
        void __fastcall RadioButton1Click(TObject *Sender);
        void __fastcall RadioButton3Click(TObject *Sender);
        void __fastcall RadioButton4Click(TObject *Sender);
        void __fastcall BitBtn3Click(TObject *Sender);
        void __fastcall BitBtn4Click(TObject *Sender);
        void __fastcall BitBtn5Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif

//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
#include "MainUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"



TeditForm *editForm;
//---------------------------------------------------------------------------
__fastcall TeditForm::TeditForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TeditForm::FormShow(TObject *Sender)
{


   buf = MainForm->buf;
  ComboBox1->ItemIndex = buf;

  Label20->Visible = true;
  Label21->Visible = true;
  Label22->Visible = true;

  switch(ComboBox1->ItemIndex){
  case 0:Label20->Caption = "������������";
         Label21->Caption = "���������";
         Label22->Caption = "��� �����������";

         break;
  case 1: Label20->Caption = "������ ����";
         Label21->Caption = "�����";
         Label22->Caption = "��� ��������";

         break;
  case 2:Label20->Caption = "���������� �����";
         Label21->Caption = "����������";
         Label22->Caption = " ���������� ������";

         break;
  case 3:Label20->Caption = "�������� ��������";
         Label21->Caption = "��������� ������ ����";
         Label22->Caption = "���������������� �������";

         break;
  case 4:Label20->Caption = "�����";
         Label21->Caption = "���������� ������";
         Label22->Caption = "�������� �������������";

         break;
  case 5:Label20->Caption = "����� ��������";
         Label21->Caption = "���������";
         Label22->Caption = "�������� ������";

         break;

          };
}
//---------------------------------------------------------------------------




void __fastcall TeditForm::costKeyPress(TObject *Sender, char &Key)
{
if (( Key>='0') && (Key<='9')  || (Key==8)){

     } else { Key = 0;}        
}
//---------------------------------------------------------------------------


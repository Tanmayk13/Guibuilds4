//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "ticTacToe.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm3 *Form3;

char CurrentPlayerSymbol='X';

bool TForm3:: CheckIsWinner(){
if(!Button1->Text.IsEmpty() && Button1->Text==Button2->Text && Button1->Text==Button3->Text){
return true;
}
if(!Button4->Text.IsEmpty() && Button4->Text==Button5->Text && Button4->Text==Button6->Text){
return true;
}
if(!Button7->Text.IsEmpty() && Button7->Text==Button8->Text && Button7->Text==Button9->Text){
return true;
}
if(!Button1->Text.IsEmpty() && Button1->Text==Button4->Text && Button1->Text==Button7->Text){
return true;
}
if(!Button2->Text.IsEmpty() && Button2->Text==Button5->Text && Button2->Text==Button8->Text){
return true;
}
if(!Button3->Text.IsEmpty() && Button3->Text==Button6->Text && Button3->Text==Button9->Text){
return true;
}
if(!Button1->Text.IsEmpty() && Button1->Text==Button5->Text && Button1->Text==Button9->Text){
return true;
}
if(!Button3->Text.IsEmpty() && Button3->Text==Button5->Text && Button3->Text==Button7->Text){
return true;
}
return false;
}
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
	 currentPlayerSymbol->Text = CurrentPlayerSymbol;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::ButtonClick(TObject *Sender)
{
	  TButton* clickedButton = dynamic_cast<TButton*>(Sender);
	  clickedButton->Text = CurrentPlayerSymbol;

	  if(CheckIsWinner()){
	  winnerLabel->Text = "You Won!";
	  Button1->Enabled = false;
	  Button2->Enabled = false;
	  Button3->Enabled = false;
	  Button4->Enabled = false;
	  Button5->Enabled = false;
	  Button6->Enabled = false;
	  Button7->Enabled = false;
	  Button8->Enabled = false;
	  Button9->Enabled = false;
	  return;
	  }

	  ;

	  if(CurrentPlayerSymbol == 'X'){
	  CurrentPlayerSymbol = 'O';
      currentPlayerSymbol->Text = CurrentPlayerSymbol;
}
else{
	  CurrentPlayerSymbol = 'X';
      currentPlayerSymbol->Text = CurrentPlayerSymbol;
}
}
//---------------------------------------------------------------------------

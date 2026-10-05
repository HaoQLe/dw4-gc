#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802E150C();
void fn_802E1558();
void fn_802E170C();
void fn_802E171C();
void fn_80407B3C();
extern char lbl_80420A8C[];
extern char lbl_804D2980[];
extern char lbl_805355E0[];
void fn_802E1670();
void *fn_802E16EC();
}
extern "C" {
void fn_802E1648(){
 fn_80066188((int)fn_802E1670);
}
void fn_802E1670(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805355E0,(int)fn_80407B3C,(int)fn_802E170C,(int)fn_802E16EC,(int)lbl_80420A8C,120,(int)fn_802E1558,(int)fn_802E171C,0,(int)lbl_804D2980);
}
void *fn_802E16EC(){return fn_802E150C();}
}
#pragma pop

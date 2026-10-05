#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8010CFA4();
void *fn_8010E6DC();
void fn_80402E28();
void *fn_80405188();
void fn_804051D4();
void fn_804052EC();
extern char lbl_804621A0[];
extern char lbl_804F03E4[];
extern char lbl_8055C860[];
void fn_80405250();
void *fn_804052CC();
}
extern "C" {
void fn_80405228(){
 fn_80066188((int)fn_80405250);
}
void fn_80405250(){
 fn_80402E28();
 fn_80066204(0,(int)lbl_8055C860,(int)fn_8010CFA4,(int)fn_8010E6DC,(int)fn_804052CC,(int)lbl_804621A0,20,(int)fn_804051D4,(int)fn_804052EC,0,(int)lbl_804F03E4);
}
void *fn_804052CC(){return fn_80405188();}
}
#pragma pop

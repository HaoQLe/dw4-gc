#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802E170C();
void fn_80402E28();
void *fn_80407760();
void fn_804077AC();
void fn_80407960();
void fn_80407B3C();
extern char lbl_804629A0[];
extern char lbl_804F0C6C[];
extern char lbl_8055CA50[];
void fn_804078C4();
void *fn_80407940();
}
extern "C" {
void fn_8040789C(){
 fn_80066188((int)fn_804078C4);
}
void fn_804078C4(){
 fn_80402E28();
 fn_80066204(0,(int)lbl_8055CA50,(int)fn_80407B3C,(int)fn_802E170C,(int)fn_80407940,(int)lbl_804629A0,84,(int)fn_804077AC,(int)fn_80407960,0,(int)lbl_804F0C6C);
}
void *fn_80407940(){return fn_80407760();}
}
#pragma pop

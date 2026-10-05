#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_801B8D70();
void fn_801C03BC();
void fn_802B1AC8();
void *fn_802E7D00();
void fn_802E7D4C();
void fn_802E80A0();
void *fn_802E8184();
extern char lbl_804211FC[];
extern char lbl_80535868[];
void fn_802E8004();
void *fn_802E8080();
}
extern "C" {
void fn_802E7FDC(){
 fn_80066188((int)fn_802E8004);
}
void fn_802E8004(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535868,(int)fn_801C03BC,(int)fn_801B8D70,(int)fn_802E8080,(int)lbl_804211FC,64,(int)fn_802E7D4C,(int)fn_802E80A0,(int)fn_802E8184,0);
}
void *fn_802E8080(){return fn_802E7D00();}
}
#pragma pop

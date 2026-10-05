#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802B381C();
void *fn_802C1F24();
void fn_802C1F70();
void fn_802E3908();
extern char lbl_8041E580[];
extern char lbl_80534AA8[];
void fn_802C20A8();
void *fn_802C2114();
}
extern "C" {
void fn_802C2080(){
 fn_80066188((int)fn_802C20A8);
}
void fn_802C20A8(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534AA8,(int)fn_802E3908,(int)fn_802B381C,(int)fn_802C2114,(int)lbl_8041E580,32,(int)fn_802C1F70,0,0,0);
}
void *fn_802C2114(){return fn_802C1F24();}
}
#pragma pop

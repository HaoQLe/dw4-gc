#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802B381C();
void *fn_802B8F04();
void fn_802B8F50();
void fn_802B91CC();
void fn_802E3908();
extern char lbl_8041D830[];
extern char lbl_804CF5F8[];
extern char lbl_80534774[];
void fn_802B9130();
void *fn_802B91AC();
}
extern "C" {
void fn_802B9108(){
 fn_80066188((int)fn_802B9130);
}
void fn_802B9130(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534774,(int)fn_802E3908,(int)fn_802B381C,(int)fn_802B91AC,(int)lbl_8041D830,44,(int)fn_802B8F50,(int)fn_802B91CC,0,(int)lbl_804CF5F8);
}
void *fn_802B91AC(){return fn_802B8F04();}
}
#pragma pop

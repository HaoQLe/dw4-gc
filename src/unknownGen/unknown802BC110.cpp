#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802B381C();
void *fn_802BBF2C();
void fn_802BBF78();
void fn_802BC1D4();
void fn_802E3908();
extern char lbl_8041DC50[];
extern char lbl_804CF8D8[];
extern char lbl_80534830[];
void fn_802BC138();
void *fn_802BC1B4();
}
extern "C" {
void fn_802BC110(){
 fn_80066188((int)fn_802BC138);
}
void fn_802BC138(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534830,(int)fn_802E3908,(int)fn_802B381C,(int)fn_802BC1B4,(int)lbl_8041DC50,40,(int)fn_802BBF78,(int)fn_802BC1D4,0,(int)lbl_804CF8D8);
}
void *fn_802BC1B4(){return fn_802BBF2C();}
}
#pragma pop

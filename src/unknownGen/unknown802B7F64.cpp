#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
void *fn_802B7E08();
void fn_802B7E54();
void fn_802E3908();
extern char lbl_8041D5E4[];
extern char lbl_80534720[];
void fn_802B7F8C();
void *fn_802B7FF8();
}
extern "C" {
void fn_802B7F64(){
 fn_80066188((int)fn_802B7F8C);
}
void fn_802B7F8C(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534720,(int)fn_802E3908,(int)fn_802B381C,(int)fn_802B7FF8,(int)lbl_8041D5E4,32,(int)fn_802B7E54,0,0,0);
}
void *fn_802B7FF8(){return fn_802B7E08();}
}
#pragma pop

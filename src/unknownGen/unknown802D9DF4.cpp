#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
void *fn_802D9A8C();
void fn_802D9AD8();
void fn_802D9EB8();
void fn_802E3908();
extern char lbl_80420348[];
extern char lbl_804D20C8[];
extern char lbl_80535358[];
void fn_802D9E1C();
void *fn_802D9E98();
}
extern "C" {
void fn_802D9DF4(){
 fn_80066188((int)fn_802D9E1C);
}
void fn_802D9E1C(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535358,(int)fn_802E3908,(int)fn_802B381C,(int)fn_802D9E98,(int)lbl_80420348,72,(int)fn_802D9AD8,(int)fn_802D9EB8,0,(int)lbl_804D20C8);
}
void *fn_802D9E98(){return fn_802D9A8C();}
}
#pragma pop

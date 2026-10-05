#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_802B1AC8();
void *fn_802C02DC();
void fn_802C0328();
void fn_802C042C();
extern char lbl_8041E2DC[];
extern char lbl_805349F8[];
void fn_802C0398();
void *fn_802C040C();
}
extern "C" {
void fn_802C0370(){
 fn_80066188((int)fn_802C0398);
}
void fn_802C0398(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805349F8,(int)fn_80066B08,(int)fn_800237D0,(int)fn_802C040C,(int)lbl_8041E2DC,16,(int)fn_802C0328,(int)fn_802C042C,0,0);
}
void *fn_802C040C(){return fn_802C02DC();}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
void *fn_802D2A38();
void fn_802D2A84();
void fn_802D2CE0();
void fn_802E3D20();
extern char lbl_8041FB38[];
extern char lbl_804D18E4[];
extern char lbl_8053513C[];
void fn_802D2C44();
void *fn_802D2CC0();
}
extern "C" {
void fn_802D2C1C(){
 fn_80066188((int)fn_802D2C44);
}
void fn_802D2C44(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_8053513C,(int)fn_802E3D20,(int)fn_802B2E3C,(int)fn_802D2CC0,(int)lbl_8041FB38,32,(int)fn_802D2A84,(int)fn_802D2CE0,0,(int)lbl_804D18E4);
}
void *fn_802D2CC0(){return fn_802D2A38();}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
void *fn_802D89DC();
void fn_802D8A28();
void fn_802D8C84();
void fn_802E3D20();
extern char lbl_80420230[];
extern char lbl_804D1F98[];
extern char lbl_80535310[];
void fn_802D8BE8();
void *fn_802D8C64();
}
extern "C" {
void fn_802D8BC0(){
 fn_80066188((int)fn_802D8BE8);
}
void fn_802D8BE8(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535310,(int)fn_802E3D20,(int)fn_802B2E3C,(int)fn_802D8C64,(int)lbl_80420230,32,(int)fn_802D8A28,(int)fn_802D8C84,0,(int)lbl_804D1F98);
}
void *fn_802D8C64(){return fn_802D89DC();}
}
#pragma pop

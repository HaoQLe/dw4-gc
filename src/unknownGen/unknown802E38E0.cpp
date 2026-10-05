#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_80284550();
void fn_80286F0C();
void fn_802B1AC8();
void *fn_802E3894();
void fn_802E39A0();
extern char lbl_80420D94[];
extern char lbl_804D2DC8[];
extern char lbl_805356F4[];
void fn_802E3908();
void *fn_802E3980();
}
extern "C" {
void fn_802E38E0(){
 fn_80066188((int)fn_802E3908);
}
void fn_802E3908(){
 fn_802B1AC8();
 fn_80066204(1,(int)lbl_805356F4,(int)fn_80286F0C,(int)fn_80284550,(int)fn_802E3980,(int)lbl_80420D94,32,0,(int)fn_802E39A0,0,(int)lbl_804D2DC8);
}
void *fn_802E3980(){return fn_802E3894();}
}
#pragma pop

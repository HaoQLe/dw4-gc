#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802B2E3C();
void fn_802E3D20();
void *fn_802E5E54();
void fn_802E5EA0();
void fn_802E6154();
extern char lbl_80420FFC[];
extern char lbl_804D30C8[];
extern char lbl_805357D4[];
void fn_802E60B8();
void *fn_802E6134();
}
extern "C" {
void fn_802E6090(){
 fn_80066188((int)fn_802E60B8);
}
void fn_802E60B8(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805357D4,(int)fn_802E3D20,(int)fn_802B2E3C,(int)fn_802E6134,(int)lbl_80420FFC,40,(int)fn_802E5EA0,(int)fn_802E6154,0,(int)lbl_804D30C8);
}
void *fn_802E6134(){return fn_802E5E54();}
}
#pragma pop

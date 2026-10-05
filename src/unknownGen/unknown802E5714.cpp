#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_802B1AC8();
void *fn_802E5558();
void fn_802E55A4();
void fn_802E57D8();
extern char lbl_80420EBC[];
extern char lbl_804D2F04[];
extern char lbl_80535764[];
void fn_802E573C();
void *fn_802E57B8();
}
extern "C" {
void fn_802E5714(){
 fn_80066188((int)fn_802E573C);
}
void fn_802E573C(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535764,(int)fn_80066B08,(int)fn_800237D0,(int)fn_802E57B8,(int)lbl_80420EBC,96,(int)fn_802E55A4,(int)fn_802E57D8,0,(int)lbl_804D2F04);
}
void *fn_802E57B8(){return fn_802E5558();}
}
#pragma pop

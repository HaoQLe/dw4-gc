#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802B8770();
void *fn_802E2154();
void fn_802E21A0();
void fn_802E235C();
void fn_802E40FC();
extern char lbl_80420B50[];
extern char lbl_80535634[];
void fn_802E22C8();
void *fn_802E233C();
}
extern "C" {
void fn_802E22A0(){
 fn_80066188((int)fn_802E22C8);
}
void fn_802E22C8(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535634,(int)fn_802E40FC,(int)fn_802B8770,(int)fn_802E233C,(int)lbl_80420B50,64,(int)fn_802E21A0,(int)fn_802E235C,0,0);
}
void *fn_802E233C(){return fn_802E2154();}
}
#pragma pop

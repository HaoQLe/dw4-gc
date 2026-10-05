#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B8770();
void fn_802E40FC();
void fn_803250AC();
void *fn_8033BA6C();
void fn_8033BAB8();
void fn_8033BC24();
extern char lbl_804547A0[];
extern char lbl_8053623C[];
void fn_8033BB90();
void *fn_8033BC04();
}
extern "C" {
void fn_8033BB68(){
 fn_80066188((int)fn_8033BB90);
}
void fn_8033BB90(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_8053623C,(int)fn_802E40FC,(int)fn_802B8770,(int)fn_8033BC04,(int)lbl_804547A0,32,(int)fn_8033BAB8,(int)fn_8033BC24,0,0);
}
void *fn_8033BC04(){return fn_8033BA6C();}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *fn_80031ABC();
void fn_80031AF8();
void fn_80031D98();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
extern char lbl_80466DD4[];
extern char lbl_80466DEC[];
extern void *lbl_80561C4C;
void fn_80031D00();
void *fn_80031D78();
}
extern "C" {
void fn_80031CD8(){
 fn_80066188((int)fn_80031D00);
}
void fn_80031D00(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561C4C,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80031D78,(int)lbl_80466DEC,56,(int)fn_80031AF8,(int)fn_80031D98,0,(int)lbl_80466DD4);
}
void *fn_80031D78(){return fn_80031ABC();}
}
#pragma pop

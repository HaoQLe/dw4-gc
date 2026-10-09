#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beUnicode_getMeta();
void beUnicode_vtableRead();
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802B558C();
void igObject_register();
extern char lbl_8041D298[];
extern char lbl_80534624[];
extern void *lbl_80534628;
void beUnicode_register();
void *beUnicode_getMetaCall();
}
extern "C" {
void fn_802B51DC(){
 fn_80066188((int)beUnicode_register);
}
void beUnicode_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534624,(int)igObject_register,(int)fn_800237D0,(int)beUnicode_getMetaCall,(int)lbl_8041D298,8,(int)beUnicode_vtableRead,0,0,0);
}
void *beUnicode_getMetaCall(){return beUnicode_getMeta();}
void *beTransformSync_getMeta(){
 if(!lbl_80534628 || !(reinterpret_cast<unsigned int *>(lbl_80534628)[0x24/4]&4)) fn_802B558C();
 return lbl_80534628;
}
}
#pragma pop

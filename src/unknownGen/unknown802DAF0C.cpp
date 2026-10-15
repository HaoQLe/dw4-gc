#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beFileChkObj_fieldInit();
void *beFileChkObj_getMeta();
void beFileChkObj_vtableRead();
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char beFileChkObj_className[];
extern char lbl_804D22C8[];
extern char beFileChkObj_meta[];
void beFileChkObj_register();
void *beFileChkObj_getMetaCall();
}
extern "C" {
void beFileChkObj_registerNow(){
 meta_registerNow((int)beFileChkObj_register);
}
void beFileChkObj_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beFileChkObj_meta,(int)igObject_register,(int)fn_800237D0,(int)beFileChkObj_getMetaCall,(int)beFileChkObj_className,12,(int)beFileChkObj_vtableRead,(int)beFileChkObj_fieldInit,0,(int)lbl_804D22C8);
}
void *beFileChkObj_getMetaCall(){return beFileChkObj_getMeta();}
}
#pragma pop

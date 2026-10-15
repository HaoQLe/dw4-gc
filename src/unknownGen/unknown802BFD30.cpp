#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSvSlotData_register();
void beSvSlotXbox_fieldInit();
void *beSvSlotXbox_getMeta();
void beSvSlotXbox_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802BFAE8();
extern char beSvSlotXbox_className[];
extern char beSvSlotXbox_meta[];
void beSvSlotXbox_register();
void *beSvSlotXbox_getMetaCall();
}
extern "C" {
void beSvSlotXbox_arkRegister(){
 meta_registerNow((int)beSvSlotXbox_register);
}
void beSvSlotXbox_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beSvSlotXbox_meta,(int)beSvSlotData_register,(int)fn_802BFAE8,(int)beSvSlotXbox_getMetaCall,(int)beSvSlotXbox_className,56,(int)beSvSlotXbox_vtableRead,(int)beSvSlotXbox_fieldInit,0,0);
}
void *beSvSlotXbox_getMetaCall(){return beSvSlotXbox_getMeta();}
}
#pragma pop

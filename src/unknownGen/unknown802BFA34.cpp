#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSvSlotData_register();
void *beSvSlotPS2_getMeta();
void beSvSlotPS2_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802BFAE8();
extern char beSvSlotPS2_className[];
extern char beSvSlotPS2_meta[];
void beSvSlotPS2_register();
void *beSvSlotPS2_getMetaCall();
}
extern "C" {
void beSvSlotPS2_arkRegister(){
 meta_registerNow((int)beSvSlotPS2_register);
}
void beSvSlotPS2_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beSvSlotPS2_meta,(int)beSvSlotData_register,(int)fn_802BFAE8,(int)beSvSlotPS2_getMetaCall,(int)beSvSlotPS2_className,24,(int)beSvSlotPS2_vtableRead,0,0,0);
}
void *beSvSlotPS2_getMetaCall(){return beSvSlotPS2_getMeta();}
}
#pragma pop

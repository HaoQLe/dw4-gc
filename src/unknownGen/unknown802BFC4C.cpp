#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSvSlotData_register();
void *beSvSlotGC_getMeta();
void beSvSlotGC_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802BFAE8();
void beSvSlotXbox_arkRegister();
extern char beSvSlotGC_className[];
extern char beSvSlotGC_meta[];
extern void *beSvSlotXbox_meta;
void beSvSlotGC_register();
void *beSvSlotGC_getMetaCall();
}
extern "C" {
void *beSvSlotXbox_getMeta(){
 if(!beSvSlotXbox_meta || !(reinterpret_cast<unsigned int *>(beSvSlotXbox_meta)[0x24/4]&4)) beSvSlotXbox_arkRegister();
 return beSvSlotXbox_meta;
}
}
#pragma pop

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
void beSvSlotXbox_registerNow();
extern char beSvSlotGC_className[];
extern char beSvSlotGC_meta[];
extern void *beSvSlotXbox_meta;
void beSvSlotGC_register();
void *beSvSlotGC_getMetaCall();
}
extern "C" {
void beSvSlotGC_registerNow(){
 meta_registerNow((int)beSvSlotGC_register);
}
void beSvSlotGC_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beSvSlotGC_meta,(int)beSvSlotData_register,(int)fn_802BFAE8,(int)beSvSlotGC_getMetaCall,(int)beSvSlotGC_className,24,(int)beSvSlotGC_vtableRead,0,0,0);
}
void *beSvSlotGC_getMetaCall(){return beSvSlotGC_getMeta();}
void *beSvSlotXbox_getMeta(){
 if(!beSvSlotXbox_meta || !(reinterpret_cast<unsigned int *>(beSvSlotXbox_meta)[0x24/4]&4)) beSvSlotXbox_registerNow();
 return beSvSlotXbox_meta;
}
}
#pragma pop

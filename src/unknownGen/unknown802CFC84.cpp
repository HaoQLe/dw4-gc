#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beMemory_fieldInit();
void *beMemory_getMeta();
void beMemory_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_80284550();
void fn_802B1AC8();
void igInfoManager_register();
extern char beMemory_className[];
extern char lbl_804D15EC[];
extern char beMemory_meta[];
void beMemory_register();
void *beMemory_getMetaCall();
}
extern "C" {
void beMemory_registerNow(){
 meta_registerNow((int)beMemory_register);
}
void beMemory_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beMemory_meta,(int)igInfoManager_register,(int)fn_80284550,(int)beMemory_getMetaCall,(int)beMemory_className,36,(int)beMemory_vtableRead,(int)beMemory_fieldInit,0,(int)lbl_804D15EC);
}
void *beMemory_getMetaCall(){return beMemory_getMeta();}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void beFont_fieldInit();
void *beFont_getMeta();
void beFont_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
extern char beFont_className[];
extern char beFont_dependencies[];
extern char beFont_meta[];
void beFont_register();
void *beFont_getMetaCall();
}
extern "C" {
void beFont_arkRegister(){
 meta_registerNow((int)beFont_register);
}
void beFont_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beFont_meta,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beFont_getMetaCall,(int)beFont_className,72,(int)beFont_vtableRead,(int)beFont_fieldInit,0,(int)beFont_dependencies);
}
void *beFont_getMetaCall(){return beFont_getMeta();}
}
#pragma pop

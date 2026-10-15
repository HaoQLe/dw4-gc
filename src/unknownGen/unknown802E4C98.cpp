#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beActionStarterData2_fieldInit();
void *beActionStarterData2_getMeta();
void *beActionStarterData2_parentMeta();
void beActionStarterData2_vtableRead();
void beActionStarterData_register();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
extern char beActionStarterData2_className[];
extern char beActionStarterData2_meta[];
void beActionStarterData2_register();
void *beActionStarterData2_getMetaCall();
}
extern "C" {
void beActionStarterData2_arkRegister(){
 meta_registerNow((int)beActionStarterData2_register);
}
void beActionStarterData2_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beActionStarterData2_meta,(int)beActionStarterData_register,(int)beActionStarterData2_parentMeta,(int)beActionStarterData2_getMetaCall,(int)beActionStarterData2_className,48,(int)beActionStarterData2_vtableRead,(int)beActionStarterData2_fieldInit,0,0);
}
void *beActionStarterData2_getMetaCall(){return beActionStarterData2_getMeta();}
}
#pragma pop

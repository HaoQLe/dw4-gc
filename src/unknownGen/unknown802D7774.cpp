#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beGeneraterData_fieldInit();
void *beGeneraterData_getMeta();
void beGeneraterData_vtableRead();
void *fn_80023CF4();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igNamedObject_register();
extern char beGeneraterData_className[];
extern char beGeneraterData_dependencies[];
extern char beGeneraterData_meta[];
void beGeneraterData_register();
void *beGeneraterData_getMetaCall();
}
extern "C" {
void beGeneraterData_arkRegister(){
 meta_registerNow((int)beGeneraterData_register);
}
void beGeneraterData_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beGeneraterData_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)beGeneraterData_getMetaCall,(int)beGeneraterData_className,68,(int)beGeneraterData_vtableRead,(int)beGeneraterData_fieldInit,0,(int)beGeneraterData_dependencies);
}
void *beGeneraterData_getMetaCall(){return beGeneraterData_getMeta();}
}
#pragma pop

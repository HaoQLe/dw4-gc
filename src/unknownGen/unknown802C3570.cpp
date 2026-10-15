#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNumVerData_fieldInit();
void *beNumVerData_getMeta();
void beNumVerData_vtableRead();
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char beNumVerData_className[];
extern char beNumVerData_dependencies[];
extern char beNumVerData_meta[];
void beNumVerData_register();
void *beNumVerData_getMetaCall();
}
extern "C" {
void beNumVerData_arkRegister(){
 meta_registerNow((int)beNumVerData_register);
}
void beNumVerData_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beNumVerData_meta,(int)igObject_register,(int)fn_800237D0,(int)beNumVerData_getMetaCall,(int)beNumVerData_className,16,(int)beNumVerData_vtableRead,(int)beNumVerData_fieldInit,0,(int)beNumVerData_dependencies);
}
void *beNumVerData_getMetaCall(){return beNumVerData_getMeta();}
}
#pragma pop

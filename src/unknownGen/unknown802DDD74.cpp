#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beDataBase_fieldInit();
void *beDataBase_getMeta();
void beDataBase_vtableRead();
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char beDataBase_className[];
extern char lbl_804D24CC[];
extern char beDataBase_meta[];
void beDataBase_register();
void *beDataBase_getMetaCall();
}
extern "C" {
void beDataBase_registerNow(){
 meta_registerNow((int)beDataBase_register);
}
void beDataBase_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beDataBase_meta,(int)igObject_register,(int)fn_800237D0,(int)beDataBase_getMetaCall,(int)beDataBase_className,56,(int)beDataBase_vtableRead,(int)beDataBase_fieldInit,0,(int)lbl_804D24CC);
}
void *beDataBase_getMetaCall(){return beDataBase_getMeta();}
}
#pragma pop

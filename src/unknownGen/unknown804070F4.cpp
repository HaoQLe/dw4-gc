#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802E170C();
void fn_80402E28();
void igRotateMode_fieldInit();
void *igRotateMode_getMeta();
void igRotateMode_vtableRead();
void igViewMode_register();
extern char igRotateMode_className[];
extern char igRotateMode_meta[];
void igRotateMode_register();
void *igRotateMode_getMetaCall();
}
extern "C" {
void igRotateMode_arkRegister(){
 meta_registerNow((int)igRotateMode_register);
}
void igRotateMode_register(){
 fn_80402E28();
 meta_registerClass(0,(int)igRotateMode_meta,(int)igViewMode_register,(int)fn_802E170C,(int)igRotateMode_getMetaCall,(int)igRotateMode_className,148,(int)igRotateMode_vtableRead,(int)igRotateMode_fieldInit,0,0);
}
void *igRotateMode_getMetaCall(){return igRotateMode_getMeta();}
}
#pragma pop

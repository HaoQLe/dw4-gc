#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802E170C();
void fn_80402E28();
void igPickMode_fieldInit();
void *igPickMode_getMeta();
void igPickMode_vtableRead();
void igViewMode_register();
extern char igPickMode_className[];
extern char igPickMode_dependencies[];
extern char igPickMode_meta[];
void igPickMode_register();
void *igPickMode_getMetaCall();
}
extern "C" {
void igPickMode_arkRegister(){
 meta_registerNow((int)igPickMode_register);
}
void igPickMode_register(){
 fn_80402E28();
 meta_registerClass(0,(int)igPickMode_meta,(int)igViewMode_register,(int)fn_802E170C,(int)igPickMode_getMetaCall,(int)igPickMode_className,188,(int)igPickMode_vtableRead,(int)igPickMode_fieldInit,0,(int)igPickMode_dependencies);
}
void *igPickMode_getMetaCall(){return igPickMode_getMeta();}
}
#pragma pop

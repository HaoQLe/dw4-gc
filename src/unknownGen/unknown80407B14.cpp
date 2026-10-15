#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8010E6DC();
void fn_80402E28();
void igViewMode_fieldInit();
void *igViewMode_getMeta();
void igViewMode_vtableRead();
void igView_register();
extern char igViewMode_className[];
extern char igViewMode_meta[];
void igViewMode_register();
void *igViewMode_getMetaCall();
}
extern "C" {
void igViewMode_arkRegister(){
 meta_registerNow((int)igViewMode_register);
}
void igViewMode_register(){
 fn_80402E28();
 meta_registerClass(0,(int)igViewMode_meta,(int)igView_register,(int)fn_8010E6DC,(int)igViewMode_getMetaCall,(int)igViewMode_className,76,(int)igViewMode_vtableRead,(int)igViewMode_fieldInit,0,0);
}
void *igViewMode_getMetaCall(){return igViewMode_getMeta();}
}
#pragma pop

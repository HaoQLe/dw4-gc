#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8010EE6C();
void fn_80402E28();
void igModel_register();
void igViewModel_fieldInit();
void *igViewModel_getMeta();
void igViewModel_vtableRead();
extern char igViewModel_className[];
extern char igViewModel_meta[];
void igViewModel_register();
void *igViewModel_getMetaCall();
}
extern "C" {
void igViewModel_registerNow(){
 meta_registerNow((int)igViewModel_register);
}
void igViewModel_register(){
 fn_80402E28();
 meta_registerClass(0,(int)igViewModel_meta,(int)igModel_register,(int)fn_8010EE6C,(int)igViewModel_getMetaCall,(int)igViewModel_className,176,(int)igViewModel_vtableRead,(int)igViewModel_fieldInit,0,0);
}
void *igViewModel_getMetaCall(){return igViewModel_getMeta();}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8012FEB0();
void igInstanceScene_fieldInit();
void *igInstanceScene_getMeta();
void igInstanceScene_vtableRead();
void igOptVisitObject_register();
extern char igInstanceScene_className[];
extern void *igInstanceScene_meta;
void igInstanceScene_register();
void *igInstanceScene_getMetaCall();
}
extern "C" {
void igInstanceScene_arkRegister(){
 meta_registerNow((int)igInstanceScene_register);
}
void igInstanceScene_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igInstanceScene_meta,(int)igOptVisitObject_register,(int)fn_8012FEB0,(int)igInstanceScene_getMetaCall,(int)igInstanceScene_className,104,(int)igInstanceScene_vtableRead,(int)igInstanceScene_fieldInit,0,0);
}
void *igInstanceScene_getMetaCall(){return igInstanceScene_getMeta();}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802AA788();
void igFileName_fieldInit();
void *igFileName_getMeta();
void igFileName_vtableRead();
void igNamedObject_register();
extern char igFileName_className[];
extern char igFileName_dependencies[];
extern char igFileName_meta[];
void igFileName_register();
void *igFileName_getMetaCall();
}
extern "C" {
void igFileName_arkRegister(){
 meta_registerNow((int)igFileName_register);
}
void igFileName_register(){
 fn_802AA788();
 meta_registerClass(0,(int)igFileName_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)igFileName_getMetaCall,(int)igFileName_className,16,(int)igFileName_vtableRead,(int)igFileName_fieldInit,0,(int)igFileName_dependencies);
}
void *igFileName_getMetaCall(){return igFileName_getMeta();}
}
#pragma pop

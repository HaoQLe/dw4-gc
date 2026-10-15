#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beUnicodeObj_fieldInit();
void *beUnicodeObj_getMeta();
void beUnicodeObj_vtableRead();
void *fn_80023CF4();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igNamedObject_register();
extern char beUnicodeObj_className[];
extern char beUnicodeObj_meta[];
void beUnicodeObj_register();
void *beUnicodeObj_getMetaCall();
}
extern "C" {
void beUnicodeObj_registerNow(){
 meta_registerNow((int)beUnicodeObj_register);
}
void beUnicodeObj_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beUnicodeObj_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)beUnicodeObj_getMetaCall,(int)beUnicodeObj_className,16,(int)beUnicodeObj_vtableRead,(int)beUnicodeObj_fieldInit,0,0);
}
void *beUnicodeObj_getMetaCall(){return beUnicodeObj_getMeta();}
}
#pragma pop

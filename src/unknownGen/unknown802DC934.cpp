#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beDataObjStringList_fieldInit();
void *beDataObjStringList_getMeta();
void beDataObjStringList_vtableRead();
void *fn_80023CF4();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igNamedObject_register();
extern char beDataObjStringList_className[];
extern char beDataObjStringList_dependencies[];
extern char beDataObjStringList_meta[];
void beDataObjStringList_register();
void *beDataObjStringList_getMetaCall();
}
extern "C" {
void beDataObjStringList_arkRegister(){
 meta_registerNow((int)beDataObjStringList_register);
}
void beDataObjStringList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beDataObjStringList_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)beDataObjStringList_getMetaCall,(int)beDataObjStringList_className,16,(int)beDataObjStringList_vtableRead,(int)beDataObjStringList_fieldInit,0,(int)beDataObjStringList_dependencies);
}
void *beDataObjStringList_getMetaCall(){return beDataObjStringList_getMeta();}
}
#pragma pop

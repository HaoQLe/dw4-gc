#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beDataObjFloatList_fieldInit();
void *beDataObjFloatList_getMeta();
void beDataObjFloatList_vtableRead();
void *fn_80023CF4();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igNamedObject_register();
extern char beDataObjFloatList_className[];
extern char beDataObjFloatList_dependencies[];
extern char beDataObjFloatList_meta[];
void beDataObjFloatList_register();
void *beDataObjFloatList_getMetaCall();
}
extern "C" {
void beDataObjFloatList_arkRegister(){
 meta_registerNow((int)beDataObjFloatList_register);
}
void beDataObjFloatList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beDataObjFloatList_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)beDataObjFloatList_getMetaCall,(int)beDataObjFloatList_className,16,(int)beDataObjFloatList_vtableRead,(int)beDataObjFloatList_fieldInit,0,(int)beDataObjFloatList_dependencies);
}
void *beDataObjFloatList_getMetaCall(){return beDataObjFloatList_getMeta();}
}
#pragma pop

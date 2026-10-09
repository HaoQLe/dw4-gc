#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beDataObjFloatList_fieldInit();
void *beDataObjFloatList_getMeta();
void beDataObjFloatList_vtableRead();
void *fn_80023CF4();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igNamedObject_register();
extern char lbl_804205E4[];
extern char lbl_804D241C[];
extern char lbl_80535440[];
void beDataObjFloatList_register();
void *beDataObjFloatList_getMetaCall();
}
extern "C" {
void fn_802DC37C(){
 fn_80066188((int)beDataObjFloatList_register);
}
void beDataObjFloatList_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535440,(int)igNamedObject_register,(int)fn_80023CF4,(int)beDataObjFloatList_getMetaCall,(int)lbl_804205E4,16,(int)beDataObjFloatList_vtableRead,(int)beDataObjFloatList_fieldInit,0,(int)lbl_804D241C);
}
void *beDataObjFloatList_getMetaCall(){return beDataObjFloatList_getMeta();}
}
#pragma pop

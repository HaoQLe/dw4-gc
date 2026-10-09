#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beDataObjIntList_fieldInit();
void *beDataObjIntList_getMeta();
void beDataObjIntList_vtableRead();
void *fn_80023CF4();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igNamedObject_register();
extern char lbl_80420654[];
extern char lbl_804D249C[];
extern char lbl_80535470[];
void beDataObjIntList_register();
void *beDataObjIntList_getMetaCall();
}
extern "C" {
void fn_802DD410(){
 fn_80066188((int)beDataObjIntList_register);
}
void beDataObjIntList_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535470,(int)igNamedObject_register,(int)fn_80023CF4,(int)beDataObjIntList_getMetaCall,(int)lbl_80420654,16,(int)beDataObjIntList_vtableRead,(int)beDataObjIntList_fieldInit,0,(int)lbl_804D249C);
}
void *beDataObjIntList_getMetaCall(){return beDataObjIntList_getMeta();}
}
#pragma pop

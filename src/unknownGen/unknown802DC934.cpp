#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beDataObjStringList_fieldInit();
void *beDataObjStringList_getMeta();
void beDataObjStringList_vtableRead();
void *fn_80023CF4();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igNamedObject_register();
extern char lbl_8042060C[];
extern char lbl_804D244C[];
extern char lbl_80535450[];
void beDataObjStringList_register();
void *beDataObjStringList_getMetaCall();
}
extern "C" {
void fn_802DC934(){
 fn_80066188((int)beDataObjStringList_register);
}
void beDataObjStringList_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535450,(int)igNamedObject_register,(int)fn_80023CF4,(int)beDataObjStringList_getMetaCall,(int)lbl_8042060C,16,(int)beDataObjStringList_vtableRead,(int)beDataObjStringList_fieldInit,0,(int)lbl_804D244C);
}
void *beDataObjStringList_getMetaCall(){return beDataObjStringList_getMeta();}
}
#pragma pop

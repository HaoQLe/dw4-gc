#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beGeneraterItemData_fieldInit();
void *beGeneraterItemData_getMeta();
void beGeneraterItemData_vtableRead();
void *fn_80023CF4();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igNamedObject_register();
extern char lbl_80420194[];
extern char lbl_804D1EE0[];
extern char lbl_805352E4[];
void beGeneraterItemData_register();
void *beGeneraterItemData_getMetaCall();
}
extern "C" {
void fn_802D80C0(){
 fn_80066188((int)beGeneraterItemData_register);
}
void beGeneraterItemData_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805352E4,(int)igNamedObject_register,(int)fn_80023CF4,(int)beGeneraterItemData_getMetaCall,(int)lbl_80420194,16,(int)beGeneraterItemData_vtableRead,(int)beGeneraterItemData_fieldInit,0,(int)lbl_804D1EE0);
}
void *beGeneraterItemData_getMetaCall(){return beGeneraterItemData_getMeta();}
}
#pragma pop

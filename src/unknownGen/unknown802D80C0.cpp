#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beGeneraterItemData_fieldInit();
void *beGeneraterItemData_getMeta();
void beGeneraterItemData_vtableRead();
void *fn_80023CF4();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igNamedObject_register();
extern char beGeneraterItemData_className[];
extern char lbl_804D1EE0[];
extern char beGeneraterItemData_meta[];
void beGeneraterItemData_register();
void *beGeneraterItemData_getMetaCall();
}
extern "C" {
void beGeneraterItemData_registerNow(){
 meta_registerNow((int)beGeneraterItemData_register);
}
void beGeneraterItemData_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beGeneraterItemData_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)beGeneraterItemData_getMetaCall,(int)beGeneraterItemData_className,16,(int)beGeneraterItemData_vtableRead,(int)beGeneraterItemData_fieldInit,0,(int)lbl_804D1EE0);
}
void *beGeneraterItemData_getMetaCall(){return beGeneraterItemData_getMeta();}
}
#pragma pop

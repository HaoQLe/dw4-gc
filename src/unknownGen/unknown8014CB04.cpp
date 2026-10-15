#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8014CD4C();
void igDataTable_fieldInit();
void *igDataTable_getMeta();
void igDataTable_vtableRead();
void igNamedObject_register();
extern char lbl_8049F68C[];
extern char igDataTable_className[];
extern void *igDataTable_meta;
void igDataTable_register();
void *igDataTable_getMetaCall();
}
extern "C" {
void igDataTable_registerNow(){
 meta_registerNow((int)igDataTable_register);
}
void igDataTable_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igDataTable_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)igDataTable_getMetaCall,(int)igDataTable_className,48,(int)igDataTable_vtableRead,(int)igDataTable_fieldInit,(int)fn_8014CD4C,(int)lbl_8049F68C);
}
void *igDataTable_getMetaCall(){return igDataTable_getMeta();}
}
#pragma pop

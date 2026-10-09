#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8014CD4C();
void igDataTable_fieldInit();
void *igDataTable_getMeta();
void igDataTable_vtableRead();
void igNamedObject_register();
extern char lbl_8049F68C[];
extern char lbl_8049F6A8[];
extern void *lbl_805643A4;
void igDataTable_register();
void *igDataTable_getMetaCall();
}
extern "C" {
void fn_8014CB04(){
 fn_80066188((int)igDataTable_register);
}
void igDataTable_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805643A4,(int)igNamedObject_register,(int)fn_80023CF4,(int)igDataTable_getMetaCall,(int)lbl_8049F6A8,48,(int)igDataTable_vtableRead,(int)igDataTable_fieldInit,(int)fn_8014CD4C,(int)lbl_8049F68C);
}
void *igDataTable_getMetaCall(){return igDataTable_getMeta();}
}
#pragma pop

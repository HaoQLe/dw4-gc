#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beDataBase_fieldInit();
void *beDataBase_getMeta();
void beDataBase_vtableRead();
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char lbl_80420688[];
extern char lbl_804D24CC[];
extern char lbl_80535484[];
void beDataBase_register();
void *beDataBase_getMetaCall();
}
extern "C" {
void fn_802DDD74(){
 fn_80066188((int)beDataBase_register);
}
void beDataBase_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535484,(int)igObject_register,(int)fn_800237D0,(int)beDataBase_getMetaCall,(int)lbl_80420688,56,(int)beDataBase_vtableRead,(int)beDataBase_fieldInit,0,(int)lbl_804D24CC);
}
void *beDataBase_getMetaCall(){return beDataBase_getMeta();}
}
#pragma pop

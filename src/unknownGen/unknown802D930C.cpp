#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beUnicodeObj_fieldInit();
void *beUnicodeObj_getMeta();
void beUnicodeObj_vtableRead();
void *fn_80023CF4();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igNamedObject_register();
extern char lbl_80420298[];
extern char lbl_8053533C[];
void beUnicodeObj_register();
void *beUnicodeObj_getMetaCall();
}
extern "C" {
void fn_802D930C(){
 fn_80066188((int)beUnicodeObj_register);
}
void beUnicodeObj_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_8053533C,(int)igNamedObject_register,(int)fn_80023CF4,(int)beUnicodeObj_getMetaCall,(int)lbl_80420298,16,(int)beUnicodeObj_vtableRead,(int)beUnicodeObj_fieldInit,0,0);
}
void *beUnicodeObj_getMetaCall(){return beUnicodeObj_getMeta();}
}
#pragma pop

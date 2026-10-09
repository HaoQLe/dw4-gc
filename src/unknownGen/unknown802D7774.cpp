#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beGeneraterData_fieldInit();
void *beGeneraterData_getMeta();
void beGeneraterData_vtableRead();
void *fn_80023CF4();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igNamedObject_register();
extern char lbl_8042004C[];
extern char lbl_804D1DB8[];
extern char lbl_80535294[];
void beGeneraterData_register();
void *beGeneraterData_getMetaCall();
}
extern "C" {
void fn_802D7774(){
 fn_80066188((int)beGeneraterData_register);
}
void beGeneraterData_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535294,(int)igNamedObject_register,(int)fn_80023CF4,(int)beGeneraterData_getMetaCall,(int)lbl_8042004C,68,(int)beGeneraterData_vtableRead,(int)beGeneraterData_fieldInit,0,(int)lbl_804D1DB8);
}
void *beGeneraterData_getMetaCall(){return beGeneraterData_getMeta();}
}
#pragma pop

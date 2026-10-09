#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beMessengerGroup_fieldInit();
void *beMessengerGroup_getMeta();
void beMessengerGroup_vtableRead();
void *fn_80023CF4();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igNamedObject_register();
extern char lbl_8041F794[];
extern char lbl_804D1460[];
extern char lbl_80535004[];
void beMessengerGroup_register();
void *beMessengerGroup_getMetaCall();
}
extern "C" {
void fn_802CECEC(){
 fn_80066188((int)beMessengerGroup_register);
}
void beMessengerGroup_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535004,(int)igNamedObject_register,(int)fn_80023CF4,(int)beMessengerGroup_getMetaCall,(int)lbl_8041F794,24,(int)beMessengerGroup_vtableRead,(int)beMessengerGroup_fieldInit,0,(int)lbl_804D1460);
}
void *beMessengerGroup_getMetaCall(){return beMessengerGroup_getMeta();}
}
#pragma pop

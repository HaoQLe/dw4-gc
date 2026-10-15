#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beMessengerGroup_fieldInit();
void *beMessengerGroup_getMeta();
void beMessengerGroup_vtableRead();
void *fn_80023CF4();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igNamedObject_register();
extern char beMessengerGroup_className[];
extern char lbl_804D1460[];
extern char beMessengerGroup_meta[];
void beMessengerGroup_register();
void *beMessengerGroup_getMetaCall();
}
extern "C" {
void beMessengerGroup_registerNow(){
 meta_registerNow((int)beMessengerGroup_register);
}
void beMessengerGroup_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beMessengerGroup_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)beMessengerGroup_getMetaCall,(int)beMessengerGroup_className,24,(int)beMessengerGroup_vtableRead,(int)beMessengerGroup_fieldInit,0,(int)lbl_804D1460);
}
void *beMessengerGroup_getMetaCall(){return beMessengerGroup_getMeta();}
}
#pragma pop

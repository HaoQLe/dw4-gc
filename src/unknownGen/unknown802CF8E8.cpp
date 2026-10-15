#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beMessengerArgData_fieldInit();
void *beMessengerArgData_getMeta();
void beMessengerArgData_vtableRead();
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char beMessengerArgData_className[];
extern char lbl_804D1528[];
extern char beMessengerArgData_meta[];
void beMessengerArgData_register();
void *beMessengerArgData_getMetaCall();
}
extern "C" {
void beMessengerArgData_registerNow(){
 meta_registerNow((int)beMessengerArgData_register);
}
void beMessengerArgData_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beMessengerArgData_meta,(int)igObject_register,(int)fn_800237D0,(int)beMessengerArgData_getMetaCall,(int)beMessengerArgData_className,48,(int)beMessengerArgData_vtableRead,(int)beMessengerArgData_fieldInit,0,(int)lbl_804D1528);
}
void *beMessengerArgData_getMetaCall(){return beMessengerArgData_getMeta();}
}
#pragma pop

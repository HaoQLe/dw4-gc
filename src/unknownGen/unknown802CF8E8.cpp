#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beMessengerArgData_fieldInit();
void *beMessengerArgData_getMeta();
void beMessengerArgData_vtableRead();
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char lbl_8041F828[];
extern char lbl_804D1528[];
extern char lbl_8053503C[];
void beMessengerArgData_register();
void *beMessengerArgData_getMetaCall();
}
extern "C" {
void fn_802CF8E8(){
 fn_80066188((int)beMessengerArgData_register);
}
void beMessengerArgData_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_8053503C,(int)igObject_register,(int)fn_800237D0,(int)beMessengerArgData_getMetaCall,(int)lbl_8041F828,48,(int)beMessengerArgData_vtableRead,(int)beMessengerArgData_fieldInit,0,(int)lbl_804D1528);
}
void *beMessengerArgData_getMetaCall(){return beMessengerArgData_getMeta();}
}
#pragma pop

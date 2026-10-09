#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beAction2InfoWork_fieldInit();
void *beAction2InfoWork_getMeta();
void beAction2InfoWork_vtableRead();
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char lbl_80420EBC[];
extern char lbl_804D2F04[];
extern char lbl_80535764[];
void beAction2InfoWork_register();
void *beAction2InfoWork_getMetaCall();
}
extern "C" {
void fn_802E5714(){
 fn_80066188((int)beAction2InfoWork_register);
}
void beAction2InfoWork_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535764,(int)igObject_register,(int)fn_800237D0,(int)beAction2InfoWork_getMetaCall,(int)lbl_80420EBC,96,(int)beAction2InfoWork_vtableRead,(int)beAction2InfoWork_fieldInit,0,(int)lbl_804D2F04);
}
void *beAction2InfoWork_getMetaCall(){return beAction2InfoWork_getMeta();}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beMemory_fieldInit();
void *beMemory_getMeta();
void beMemory_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_80284550();
void fn_802B1AC8();
void igInfoManager_register();
extern char lbl_8041F8BC[];
extern char lbl_804D15EC[];
extern char lbl_80535068[];
void beMemory_register();
void *beMemory_getMetaCall();
}
extern "C" {
void fn_802CFC84(){
 fn_80066188((int)beMemory_register);
}
void beMemory_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535068,(int)igInfoManager_register,(int)fn_80284550,(int)beMemory_getMetaCall,(int)lbl_8041F8BC,36,(int)beMemory_vtableRead,(int)beMemory_fieldInit,0,(int)lbl_804D15EC);
}
void *beMemory_getMetaCall(){return beMemory_getMeta();}
}
#pragma pop

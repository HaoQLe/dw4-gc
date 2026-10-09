#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beAction2Data_fieldInit();
void *beAction2Data_getMeta();
void beAction2Data_vtableRead();
void *fn_80023CF4();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igNamedObject_register();
extern char lbl_804210D4[];
extern char lbl_804D31A0[];
extern char lbl_80535820[];
void beAction2Data_register();
void *beAction2Data_getMetaCall();
}
extern "C" {
void fn_802E707C(){
 fn_80066188((int)beAction2Data_register);
}
void beAction2Data_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535820,(int)igNamedObject_register,(int)fn_80023CF4,(int)beAction2Data_getMetaCall,(int)lbl_804210D4,16,(int)beAction2Data_vtableRead,(int)beAction2Data_fieldInit,0,(int)lbl_804D31A0);
}
void *beAction2Data_getMetaCall(){return beAction2Data_getMeta();}
}
#pragma pop

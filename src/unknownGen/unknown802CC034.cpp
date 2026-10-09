#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beModelCtrlJUMP_getMeta();
void beModelCtrlJUMP_vtableRead();
void *fn_80023CF4();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802CC1D0();
void igNamedObject_register();
extern char lbl_8041F2E4[];
extern char lbl_80534F20[];
extern void *lbl_80534F24;
void beModelCtrlJUMP_register();
void *beModelCtrlJUMP_getMetaCall();
}
extern "C" {
void fn_802CC034(){
 fn_80066188((int)beModelCtrlJUMP_register);
}
void beModelCtrlJUMP_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534F20,(int)igNamedObject_register,(int)fn_80023CF4,(int)beModelCtrlJUMP_getMetaCall,(int)lbl_8041F2E4,12,(int)beModelCtrlJUMP_vtableRead,0,0,0);
}
void *beModelCtrlJUMP_getMetaCall(){return beModelCtrlJUMP_getMeta();}
void *beModelCtrlACTION_getMeta(){
 if(!lbl_80534F24 || !(reinterpret_cast<unsigned int *>(lbl_80534F24)[0x24/4]&4)) fn_802CC1D0();
 return lbl_80534F24;
}
}
#pragma pop

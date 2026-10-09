#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beModelCtrlACTION_getMeta();
void beModelCtrlACTION_vtableRead();
void *fn_80023CF4();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802CC3B4();
void igNamedObject_register();
extern char lbl_8041F2F4[];
extern char lbl_80534F24[];
extern void *lbl_80534F28;
void beModelCtrlACTION_register();
void *beModelCtrlACTION_getMetaCall();
}
extern "C" {
void fn_802CC1D0(){
 fn_80066188((int)beModelCtrlACTION_register);
}
void beModelCtrlACTION_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534F24,(int)igNamedObject_register,(int)fn_80023CF4,(int)beModelCtrlACTION_getMetaCall,(int)lbl_8041F2F4,12,(int)beModelCtrlACTION_vtableRead,0,0,0);
}
void *beModelCtrlACTION_getMetaCall(){return beModelCtrlACTION_getMeta();}
void *beModelCtrlLABELCTRL_getMeta(){
 if(!lbl_80534F28 || !(reinterpret_cast<unsigned int *>(lbl_80534F28)[0x24/4]&4)) fn_802CC3B4();
 return lbl_80534F28;
}
}
#pragma pop

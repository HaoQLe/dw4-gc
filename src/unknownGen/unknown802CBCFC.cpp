#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beModelCtrlMSGBOX_getMeta();
void beModelCtrlMSGBOX_vtableRead();
void *fn_80023CF4();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802CBE98();
void igNamedObject_register();
extern char lbl_8041F2C0[];
extern char lbl_80534F18[];
extern void *lbl_80534F1C;
void beModelCtrlMSGBOX_register();
void *beModelCtrlMSGBOX_getMetaCall();
}
extern "C" {
void fn_802CBCFC(){
 fn_80066188((int)beModelCtrlMSGBOX_register);
}
void beModelCtrlMSGBOX_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534F18,(int)igNamedObject_register,(int)fn_80023CF4,(int)beModelCtrlMSGBOX_getMetaCall,(int)lbl_8041F2C0,12,(int)beModelCtrlMSGBOX_vtableRead,0,0,0);
}
void *beModelCtrlMSGBOX_getMetaCall(){return beModelCtrlMSGBOX_getMeta();}
void *beModelCtrlCTRL_getMeta(){
 if(!lbl_80534F1C || !(reinterpret_cast<unsigned int *>(lbl_80534F1C)[0x24/4]&4)) fn_802CBE98();
 return lbl_80534F1C;
}
}
#pragma pop

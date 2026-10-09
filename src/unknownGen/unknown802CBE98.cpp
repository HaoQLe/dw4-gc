#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beModelCtrlCTRL_getMeta();
void beModelCtrlCTRL_vtableRead();
void *fn_80023CF4();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802CC034();
void igNamedObject_register();
extern char lbl_8041F2D4[];
extern char lbl_80534F1C[];
extern void *lbl_80534F20;
void beModelCtrlCTRL_register();
void *beModelCtrlCTRL_getMetaCall();
}
extern "C" {
void fn_802CBE98(){
 fn_80066188((int)beModelCtrlCTRL_register);
}
void beModelCtrlCTRL_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534F1C,(int)igNamedObject_register,(int)fn_80023CF4,(int)beModelCtrlCTRL_getMetaCall,(int)lbl_8041F2D4,12,(int)beModelCtrlCTRL_vtableRead,0,0,0);
}
void *beModelCtrlCTRL_getMetaCall(){return beModelCtrlCTRL_getMeta();}
void *beModelCtrlJUMP_getMeta(){
 if(!lbl_80534F20 || !(reinterpret_cast<unsigned int *>(lbl_80534F20)[0x24/4]&4)) fn_802CC034();
 return lbl_80534F20;
}
}
#pragma pop

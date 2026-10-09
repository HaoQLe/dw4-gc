#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beModelCtrlLABEL_getMeta();
void beModelCtrlLABEL_vtableRead();
void *fn_80023CF4();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802CC7BC();
void igNamedObject_register();
extern char lbl_8041F320[];
extern char lbl_80534F30[];
extern void *lbl_80534F34;
void beModelCtrlLABEL_register();
void *beModelCtrlLABEL_getMetaCall();
}
extern "C" {
void fn_802CC5D8(){
 fn_80066188((int)beModelCtrlLABEL_register);
}
void beModelCtrlLABEL_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534F30,(int)igNamedObject_register,(int)fn_80023CF4,(int)beModelCtrlLABEL_getMetaCall,(int)lbl_8041F320,12,(int)beModelCtrlLABEL_vtableRead,0,0,0);
}
void *beModelCtrlLABEL_getMetaCall(){return beModelCtrlLABEL_getMeta();}
void *beModelCtrlLUACALL_getMeta(){
 if(!lbl_80534F34 || !(reinterpret_cast<unsigned int *>(lbl_80534F34)[0x24/4]&4)) fn_802CC7BC();
 return lbl_80534F34;
}
}
#pragma pop

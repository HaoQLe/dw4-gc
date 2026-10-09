#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802AA788();
void igFileName_fieldInit();
void *igFileName_getMeta();
void igFileName_vtableRead();
void igNamedObject_register();
extern char lbl_8041BB84[];
extern char lbl_804CD978[];
extern char lbl_80534368[];
void igFileName_register();
void *igFileName_getMetaCall();
}
extern "C" {
void fn_802AB088(){
 fn_80066188((int)igFileName_register);
}
void igFileName_register(){
 fn_802AA788();
 fn_80066204(0,(int)lbl_80534368,(int)igNamedObject_register,(int)fn_80023CF4,(int)igFileName_getMetaCall,(int)lbl_8041BB84,16,(int)igFileName_vtableRead,(int)igFileName_fieldInit,0,(int)lbl_804CD978);
}
void *igFileName_getMetaCall(){return igFileName_getMeta();}
}
#pragma pop

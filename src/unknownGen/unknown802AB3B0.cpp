#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8002C31C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802AA788();
void fn_802AB598();
void igAdxFile_fieldInit();
void *igAdxFile_getMeta();
void igAdxFile_vtableRead();
void igFile_register();
extern char lbl_8041BB9C[];
extern char lbl_80534370[];
void igAdxFile_register();
void *igAdxFile_getMetaCall();
}
extern "C" {
void fn_802AB3B0(){
 fn_80066188((int)igAdxFile_register);
}
void igAdxFile_register(){
 fn_802AA788();
 fn_80066204(0,(int)lbl_80534370,(int)igFile_register,(int)fn_8002C31C,(int)igAdxFile_getMetaCall,(int)lbl_8041BB9C,104,(int)igAdxFile_vtableRead,(int)igAdxFile_fieldInit,(int)fn_802AB598,0);
}
void *igAdxFile_getMetaCall(){return igAdxFile_getMeta();}
}
#pragma pop

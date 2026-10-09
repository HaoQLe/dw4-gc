#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8012FEB0();
void igInstanceScene_fieldInit();
void *igInstanceScene_getMeta();
void igInstanceScene_vtableRead();
void igOptVisitObject_register();
extern char lbl_8049E954[];
extern void *lbl_805641A8;
void igInstanceScene_register();
void *igInstanceScene_getMetaCall();
}
extern "C" {
void fn_80146C84(){
 fn_80066188((int)igInstanceScene_register);
}
void igInstanceScene_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805641A8,(int)igOptVisitObject_register,(int)fn_8012FEB0,(int)igInstanceScene_getMetaCall,(int)lbl_8049E954,104,(int)igInstanceScene_vtableRead,(int)igInstanceScene_fieldInit,0,0);
}
void *igInstanceScene_getMetaCall(){return igInstanceScene_getMeta();}
}
#pragma pop

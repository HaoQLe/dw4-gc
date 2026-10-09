#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802AD8A0();
void fn_802B1AC8();
void fn_802B1B48();
void igInsightPlugin_register();
extern char lbl_8041C7E8[];
extern char lbl_804CEA80[];
extern char lbl_80534498[];
void libBecRuntimePlugin_fieldInit();
void *libBecRuntimePlugin_getMeta();
void libBecRuntimePlugin_register();
void *libBecRuntimePlugin_getMetaCall();
}
extern "C" {
void fn_802B2428(){
 fn_80066188((int)libBecRuntimePlugin_register);
}
void libBecRuntimePlugin_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534498,(int)igInsightPlugin_register,(int)fn_802AD8A0,(int)libBecRuntimePlugin_getMetaCall,(int)lbl_8041C7E8,164,(int)fn_802B1B48,(int)libBecRuntimePlugin_fieldInit,0,(int)lbl_804CEA80);
}
void *libBecRuntimePlugin_getMetaCall(){return libBecRuntimePlugin_getMeta();}
}
#pragma pop

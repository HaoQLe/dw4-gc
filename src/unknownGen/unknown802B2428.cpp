#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802AD8A0();
void fn_802B1AC8();
void fn_802B1B48();
void igInsightPlugin_register();
extern char libBecRuntimePlugin_className[];
extern char lbl_804CEA80[];
extern char libBecRuntimePlugin_meta[];
void libBecRuntimePlugin_fieldInit();
void *libBecRuntimePlugin_getMeta();
void libBecRuntimePlugin_register();
void *libBecRuntimePlugin_getMetaCall();
}
extern "C" {
void libBecRuntimePlugin_registerNow(){
 meta_registerNow((int)libBecRuntimePlugin_register);
}
void libBecRuntimePlugin_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)libBecRuntimePlugin_meta,(int)igInsightPlugin_register,(int)fn_802AD8A0,(int)libBecRuntimePlugin_getMetaCall,(int)libBecRuntimePlugin_className,164,(int)fn_802B1B48,(int)libBecRuntimePlugin_fieldInit,0,(int)lbl_804CEA80);
}
void *libBecRuntimePlugin_getMetaCall(){return libBecRuntimePlugin_getMeta();}
}
#pragma pop

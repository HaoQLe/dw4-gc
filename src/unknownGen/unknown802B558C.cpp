#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beTransformSync_fieldInit();
void *beTransformSync_getMeta();
void beTransformSync_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_801BC078();
void fn_802B1AC8();
void igTransform_register();
extern char beTransformSync_className[];
extern char beTransformSync_dependencies[];
extern char beTransformSync_meta[];
void beTransformSync_register();
void *beTransformSync_getMetaCall();
}
extern "C" {
void beTransformSync_arkRegister(){
 meta_registerNow((int)beTransformSync_register);
}
void beTransformSync_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beTransformSync_meta,(int)igTransform_register,(int)fn_801BC078,(int)beTransformSync_getMetaCall,(int)beTransformSync_className,112,(int)beTransformSync_vtableRead,(int)beTransformSync_fieldInit,0,(int)beTransformSync_dependencies);
}
void *beTransformSync_getMetaCall(){return beTransformSync_getMeta();}
}
#pragma pop

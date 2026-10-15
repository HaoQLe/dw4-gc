#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_800ABC8C();
void *fn_800AC294();
void fn_800B43D8();
void igModelViewMatrixAttr_fieldInit();
void *igModelViewMatrixAttr_getMeta();
void igModelViewMatrixAttr_vtableRead();
void igVisualAttribute_register();
extern char igModelViewMatrixAttr_className[];
extern void *igModelViewMatrixAttr_meta;
void igModelViewMatrixAttr_register();
void *igModelViewMatrixAttr_getMetaCall();
}
extern "C" {
void igModelViewMatrixAttr_registerNow(){
 meta_registerNow((int)igModelViewMatrixAttr_register);
}
void igModelViewMatrixAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igModelViewMatrixAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igModelViewMatrixAttr_getMetaCall,(int)igModelViewMatrixAttr_className,76,(int)igModelViewMatrixAttr_vtableRead,(int)igModelViewMatrixAttr_fieldInit,(int)fn_800B43D8,0);
}
void *igModelViewMatrixAttr_getMetaCall(){return igModelViewMatrixAttr_getMeta();}
}
#pragma pop

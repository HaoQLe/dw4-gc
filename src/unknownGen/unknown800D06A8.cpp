#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CE2F8();
void igObject_register();
void *igPrimLengthArray_fieldInit();
extern char igPrimLengthArray_className[];
extern void *lbl_805621F4;
extern void *igPrimLengthArray_meta;
void *igPrimLengthArray_getMeta();
void igPrimLengthArray_registerNow();
void igPrimLengthArray_register();
void *igPrimLengthArray_getMetaCall();
}
extern "C" {
void *igPrimLengthArray_create(void *object){
 igPrimLengthArray_registerNow();
 return meta_createInstance(igPrimLengthArray_meta,object);
}
void *fn_800D06E0(){
 if(!igPrimLengthArray_meta) igPrimLengthArray_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igPrimLengthArray_meta;
}
void *igPrimLengthArray_getMeta(){
 if(!igPrimLengthArray_meta || !(reinterpret_cast<unsigned int *>(igPrimLengthArray_meta)[0x24/4]&4)) igPrimLengthArray_registerNow();
 return igPrimLengthArray_meta;
}
void igPrimLengthArray_registerNow(){
 meta_registerNow((int)igPrimLengthArray_register);
}
void igPrimLengthArray_register(){
 fn_800CE2F8();
 meta_registerClass(1,(int)&igPrimLengthArray_meta,(int)igObject_register,(int)fn_800237D0,(int)igPrimLengthArray_getMetaCall,(int)igPrimLengthArray_className,20,0,(int)igPrimLengthArray_fieldInit,0,0);
}
void *igPrimLengthArray_getMetaCall(){return igPrimLengthArray_getMeta();}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CE2F8();
void *fn_800CFE78();
void *igVertexArray1_1_fieldInit();
void igVertexArray_register();
extern char igVertexArray1_1_className[];
extern char lbl_8055EAC4[8];
extern void *igVertexArray1_1_meta;
extern void *igVertexArray_meta;
void *igVertexArray1_1_getMeta();
void igVertexArray1_1_registerNow();
void igVertexArray1_1_register();
void *igVertexArray1_1_getMetaCall();
void *igVertexArray1_1_parentMeta();
}
extern "C" {
void *igVertexArray1_1_create(void *object){
 igVertexArray1_1_registerNow();
 return meta_createInstance(igVertexArray1_1_meta,object);
}
void *igVertexArray1_1_getMeta(){
 if(!igVertexArray1_1_meta || !(reinterpret_cast<unsigned int *>(igVertexArray1_1_meta)[0x24/4]&4)) igVertexArray1_1_registerNow();
 return igVertexArray1_1_meta;
}
void igVertexArray1_1_registerNow(){
 meta_registerNow((int)igVertexArray1_1_register);
}
void igVertexArray1_1_register(){
 fn_800CE2F8();
 meta_registerClass(1,(int)&igVertexArray1_1_meta,(int)igVertexArray_register,(int)igVertexArray1_1_parentMeta,(int)igVertexArray1_1_getMetaCall,(int)igVertexArray1_1_className,48,0,(int)igVertexArray1_1_fieldInit,(int)fn_800CFE78,(int)lbl_8055EAC4);
}
void *igVertexArray1_1_getMetaCall(){return igVertexArray1_1_getMeta();}
void *igVertexArray1_1_parentMeta(){return igVertexArray_meta;}
}
#pragma pop

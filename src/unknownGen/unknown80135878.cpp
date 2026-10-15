#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void igAttrContainer_register();
void igReplaceAttr_fieldInit();
extern char igReplaceAttr_dependencies[];
extern char igReplaceAttr_className[];
extern void *igReplaceAttr_meta;
extern void *igAttrContainer_meta;
void *igReplaceAttr_getMeta();
void igReplaceAttr_arkRegister();
void igReplaceAttr_register();
void *igReplaceAttr_getMetaCall();
void *fn_80135970();
}
extern "C" {
void *igReplaceAttr_getMeta(){
 if(!igReplaceAttr_meta || !(reinterpret_cast<unsigned int *>(igReplaceAttr_meta)[0x24/4]&4)) igReplaceAttr_arkRegister();
 return igReplaceAttr_meta;
}
void igReplaceAttr_arkRegister(){
 meta_registerNow((int)igReplaceAttr_register);
}
void igReplaceAttr_register(){
 fn_8012FC48();
 meta_registerClass(1,(int)&igReplaceAttr_meta,(int)igAttrContainer_register,(int)fn_80135970,(int)igReplaceAttr_getMetaCall,(int)igReplaceAttr_className,44,0,(int)igReplaceAttr_fieldInit,0,(int)igReplaceAttr_dependencies);
}
void *igReplaceAttr_getMetaCall(){return igReplaceAttr_getMeta();}
void *fn_80135970(){return igAttrContainer_meta;}
}
#pragma pop

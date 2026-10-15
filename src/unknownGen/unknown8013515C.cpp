#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void igChildContainer_register();
void igReplaceChild_fieldInit();
extern char igReplaceChild_className[];
extern char igReplaceChild_dependencies[8];
extern void *igReplaceChild_meta;
extern void *igChildContainer_meta;
void *igReplaceChild_getMeta();
void igReplaceChild_arkRegister();
void igReplaceChild_register();
void *igReplaceChild_getMetaCall();
void *fn_80135250();
}
extern "C" {
void *igReplaceChild_getMeta(){
 if(!igReplaceChild_meta || !(reinterpret_cast<unsigned int *>(igReplaceChild_meta)[0x24/4]&4)) igReplaceChild_arkRegister();
 return igReplaceChild_meta;
}
void igReplaceChild_arkRegister(){
 meta_registerNow((int)igReplaceChild_register);
}
void igReplaceChild_register(){
 fn_8012FC48();
 meta_registerClass(1,(int)&igReplaceChild_meta,(int)igChildContainer_register,(int)fn_80135250,(int)igReplaceChild_getMetaCall,(int)igReplaceChild_className,44,0,(int)igReplaceChild_fieldInit,0,(int)igReplaceChild_dependencies);
}
void *igReplaceChild_getMetaCall(){return igReplaceChild_getMeta();}
void *fn_80135250(){return igChildContainer_meta;}
}
#pragma pop

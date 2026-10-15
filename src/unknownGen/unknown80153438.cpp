#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void fn_80153534();
void igAttrEdit_register();
extern char igAttrEditForNode_className[];
extern char lbl_8055FD80[8];
extern void *igAttrEditForNode_meta;
extern void *igAttrEdit_meta;
void *igAttrEditForNode_getMeta();
void igAttrEditForNode_registerNow();
void igAttrEditForNode_register();
void *igAttrEditForNode_getMetaCall();
void *igAttrEditForNode_parentMeta();
}
extern "C" {
void *igAttrEditForNode_getMeta(){
 if(!igAttrEditForNode_meta || !(reinterpret_cast<unsigned int *>(igAttrEditForNode_meta)[0x24/4]&4)) igAttrEditForNode_registerNow();
 return igAttrEditForNode_meta;
}
void igAttrEditForNode_registerNow(){
 meta_registerNow((int)igAttrEditForNode_register);
}
void igAttrEditForNode_register(){
 fn_8012FC48();
 meta_registerClass(1,(int)&igAttrEditForNode_meta,(int)igAttrEdit_register,(int)igAttrEditForNode_parentMeta,(int)igAttrEditForNode_getMetaCall,(int)igAttrEditForNode_className,40,0,(int)fn_80153534,0,(int)lbl_8055FD80);
}
void *igAttrEditForNode_getMetaCall(){return igAttrEditForNode_getMeta();}
void *igAttrEditForNode_parentMeta(){return igAttrEdit_meta;}
}
#pragma pop

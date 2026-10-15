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
extern char igAttrEditForNode_dependencies[8];
extern void *igAttrEditForNode_meta;
extern void *igAttrEdit_meta;
void *igAttrEditForNode_getMeta();
void igAttrEditForNode_arkRegister();
void igAttrEditForNode_register();
void *igAttrEditForNode_getMetaCall();
void *igAttrEditForNode_parentMeta();
}
extern "C" {
void *igAttrEditForNode_parentMeta(){return igAttrEdit_meta;}
}
#pragma pop

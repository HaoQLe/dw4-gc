#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029F84();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_801308D0();
void igOptBase_register();
void igOptTraverseGraph_fieldInit();
extern char igOptVisitObject_className[];
extern char igOptTraverseGraph_className[];
extern char igOptVisitObject_dependencies[8];
extern char igOptVisitObject_fieldTypes[4];
extern char igOptVisitObject_fieldNames[4];
extern char igOptVisitObject_fieldStorage[4];
extern char igOptVisitObject_fieldOffsets[4];
extern char igOptTraverseGraph_dependencies[8];
extern void *igOptVisitObject_meta;
extern void *igOptTraverseGraph_meta;
void *igOptVisitObject_getMeta();
void igOptVisitObject_arkRegister();
void igOptVisitObject_register();
void *igOptVisitObject_getMetaCall();
void igOptVisitObject_fieldInit();
void *igOptTraverseGraph_getMeta();
void igOptTraverseGraph_arkRegister();
void igOptTraverseGraph_register();
void *igOptTraverseGraph_getMetaCall();
}
extern "C" {
void *igOptTraverseGraph_getMeta(){
 if(!igOptTraverseGraph_meta || !(reinterpret_cast<unsigned int *>(igOptTraverseGraph_meta)[0x24/4]&4)) igOptTraverseGraph_arkRegister();
 return igOptTraverseGraph_meta;
}
void igOptTraverseGraph_arkRegister(){
 meta_registerNow((int)igOptTraverseGraph_register);
}
void igOptTraverseGraph_register(){
 fn_8012FC48();
 meta_registerClass(1,(int)&igOptTraverseGraph_meta,(int)igOptBase_register,(int)fn_801308D0,(int)igOptTraverseGraph_getMetaCall,(int)igOptTraverseGraph_className,52,0,(int)igOptTraverseGraph_fieldInit,0,(int)igOptTraverseGraph_dependencies);
}
void *igOptTraverseGraph_getMetaCall(){return igOptTraverseGraph_getMeta();}
}
#pragma pop

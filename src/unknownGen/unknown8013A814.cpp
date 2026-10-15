#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029F84();
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_801308D0();
void igOptBase_register();
void igOptTraverseGraph_fieldInit();
extern char igOptVisitObject_className[];
extern char igOptTraverseGraph_className[];
extern char lbl_8055F798[8];
extern char lbl_8055F7A0[4];
extern char lbl_8055F7A4[4];
extern char lbl_8055F7A8[4];
extern char lbl_8055F7AC[4];
extern char lbl_8055F7B0[8];
extern void *igOptVisitObject_meta;
extern void *igOptTraverseGraph_meta;
void *igOptVisitObject_getMeta();
void igOptVisitObject_registerNow();
void igOptVisitObject_register();
void *igOptVisitObject_getMetaCall();
void igOptVisitObject_fieldInit();
void *igOptTraverseGraph_getMeta();
void igOptTraverseGraph_registerNow();
void igOptTraverseGraph_register();
void *igOptTraverseGraph_getMetaCall();
}
extern "C" {
void *igOptVisitObject_getMeta(){
 if(!igOptVisitObject_meta || !(reinterpret_cast<unsigned int *>(igOptVisitObject_meta)[0x24/4]&4)) igOptVisitObject_registerNow();
 return igOptVisitObject_meta;
}
void igOptVisitObject_registerNow(){
 meta_registerNow((int)igOptVisitObject_register);
}
void igOptVisitObject_register(){
 fn_8012FC48();
 meta_registerClass(1,(int)&igOptVisitObject_meta,(int)igOptBase_register,(int)fn_801308D0,(int)igOptVisitObject_getMetaCall,(int)igOptVisitObject_className,44,0,(int)igOptVisitObject_fieldInit,0,(int)lbl_8055F798);
}
void *igOptVisitObject_getMetaCall(){return igOptVisitObject_getMeta();}
void igOptVisitObject_fieldInit(){
 void *value0=igOptVisitObject_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055F7A0,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_80029F84();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_8055F7A4,lbl_8055F7A8,lbl_8055F7AC,value1);
}
void *igOptTraverseGraph_getMeta(){
 if(!igOptTraverseGraph_meta || !(reinterpret_cast<unsigned int *>(igOptTraverseGraph_meta)[0x24/4]&4)) igOptTraverseGraph_registerNow();
 return igOptTraverseGraph_meta;
}
void igOptTraverseGraph_registerNow(){
 meta_registerNow((int)igOptTraverseGraph_register);
}
void igOptTraverseGraph_register(){
 fn_8012FC48();
 meta_registerClass(1,(int)&igOptTraverseGraph_meta,(int)igOptBase_register,(int)fn_801308D0,(int)igOptTraverseGraph_getMetaCall,(int)igOptTraverseGraph_className,52,0,(int)igOptTraverseGraph_fieldInit,0,(int)lbl_8055F7B0);
}
void *igOptTraverseGraph_getMetaCall(){return igOptTraverseGraph_getMeta();}
}
#pragma pop

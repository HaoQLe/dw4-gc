#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CE2F8();
void *fn_800CFE78();
void *igVertexArray1_1_fieldInit();
void igVertexArray_register();
extern char lbl_804888F8[];
extern char lbl_8055EAC4[8];
extern void *lbl_80562DDC;
extern void *lbl_80562DFC;
void *igVertexArray1_1_getMeta();
void fn_800CFC40();
void igVertexArray1_1_register();
void *igVertexArray1_1_getMetaCall();
void *igVertexArray1_1_parentMeta();
}
extern "C" {
void *fn_800CFBCC(void *object){
 fn_800CFC40();
 return fn_8006546C(lbl_80562DDC,object);
}
void *igVertexArray1_1_getMeta(){
 if(!lbl_80562DDC || !(reinterpret_cast<unsigned int *>(lbl_80562DDC)[0x24/4]&4)) fn_800CFC40();
 return lbl_80562DDC;
}
void fn_800CFC40(){
 fn_80066188((int)igVertexArray1_1_register);
}
void igVertexArray1_1_register(){
 fn_800CE2F8();
 fn_80066204(1,(int)&lbl_80562DDC,(int)igVertexArray_register,(int)igVertexArray1_1_parentMeta,(int)igVertexArray1_1_getMetaCall,(int)lbl_804888F8,48,0,(int)igVertexArray1_1_fieldInit,(int)fn_800CFE78,(int)lbl_8055EAC4);
}
void *igVertexArray1_1_getMetaCall(){return igVertexArray1_1_getMeta();}
void *igVertexArray1_1_parentMeta(){return lbl_80562DFC;}
}
#pragma pop

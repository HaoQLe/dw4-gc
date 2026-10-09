#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029F84();
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_801308D0();
void igOptBase_register();
void igOptTraverseGraph_fieldInit();
extern char lbl_8049D6F4[];
extern char lbl_8049D770[];
extern char lbl_8055F798[8];
extern char lbl_8055F7A0[4];
extern char lbl_8055F7A4[4];
extern char lbl_8055F7A8[4];
extern char lbl_8055F7AC[4];
extern char lbl_8055F7B0[8];
extern void *lbl_80563E54;
extern void *lbl_80563E5C;
void *igOptVisitObject_getMeta();
void fn_8013A850();
void igOptVisitObject_register();
void *igOptVisitObject_getMetaCall();
void igOptVisitObject_fieldInit();
void *igOptTraverseGraph_getMeta();
void fn_8013A9C4();
void igOptTraverseGraph_register();
void *igOptTraverseGraph_getMetaCall();
}
extern "C" {
void *igOptVisitObject_getMeta(){
 if(!lbl_80563E54 || !(reinterpret_cast<unsigned int *>(lbl_80563E54)[0x24/4]&4)) fn_8013A850();
 return lbl_80563E54;
}
void fn_8013A850(){
 fn_80066188((int)igOptVisitObject_register);
}
void igOptVisitObject_register(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_80563E54,(int)igOptBase_register,(int)fn_801308D0,(int)igOptVisitObject_getMetaCall,(int)lbl_8049D6F4,44,0,(int)igOptVisitObject_fieldInit,0,(int)lbl_8055F798);
}
void *igOptVisitObject_getMetaCall(){return igOptVisitObject_getMeta();}
void igOptVisitObject_fieldInit(){
 void *value0=lbl_80563E54;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055F7A0,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_80029F84();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_8055F7A4,lbl_8055F7A8,lbl_8055F7AC,value1);
}
void *igOptTraverseGraph_getMeta(){
 if(!lbl_80563E5C || !(reinterpret_cast<unsigned int *>(lbl_80563E5C)[0x24/4]&4)) fn_8013A9C4();
 return lbl_80563E5C;
}
void fn_8013A9C4(){
 fn_80066188((int)igOptTraverseGraph_register);
}
void igOptTraverseGraph_register(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_80563E5C,(int)igOptBase_register,(int)fn_801308D0,(int)igOptTraverseGraph_getMetaCall,(int)lbl_8049D770,52,0,(int)igOptTraverseGraph_fieldInit,0,(int)lbl_8055F7B0);
}
void *igOptTraverseGraph_getMetaCall(){return igOptTraverseGraph_getMeta();}
}
#pragma pop

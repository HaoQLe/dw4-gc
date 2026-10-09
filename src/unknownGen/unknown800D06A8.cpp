#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CE2F8();
void igObject_register();
void *igPrimLengthArray_fieldInit();
extern char lbl_80488A94[];
extern void *lbl_805621F4;
extern void *lbl_80562E24;
void *igPrimLengthArray_getMeta();
void fn_800D0758();
void igPrimLengthArray_register();
void *igPrimLengthArray_getMetaCall();
}
extern "C" {
void *fn_800D06A8(void *object){
 fn_800D0758();
 return fn_8006546C(lbl_80562E24,object);
}
void *fn_800D06E0(){
 if(!lbl_80562E24) lbl_80562E24=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562E24;
}
void *igPrimLengthArray_getMeta(){
 if(!lbl_80562E24 || !(reinterpret_cast<unsigned int *>(lbl_80562E24)[0x24/4]&4)) fn_800D0758();
 return lbl_80562E24;
}
void fn_800D0758(){
 fn_80066188((int)igPrimLengthArray_register);
}
void igPrimLengthArray_register(){
 fn_800CE2F8();
 fn_80066204(1,(int)&lbl_80562E24,(int)igObject_register,(int)fn_800237D0,(int)igPrimLengthArray_getMetaCall,(int)lbl_80488A94,20,0,(int)igPrimLengthArray_fieldInit,0,0);
}
void *igPrimLengthArray_getMetaCall(){return igPrimLengthArray_getMeta();}
}
#pragma pop

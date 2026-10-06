#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_802B1AC8();
void fn_802C5D70();
extern char lbl_8041EA3C[];
extern void *lbl_80534C40;
void *fn_802C5C6C();
void fn_802C5CB8();
void fn_802C5CE0();
void *fn_802C5D50();
}
extern "C" {
void *fn_802C5C6C(){
 if(!lbl_80534C40 || !(reinterpret_cast<unsigned int *>(lbl_80534C40)[0x24/4]&4)) fn_802C5CB8();
 return lbl_80534C40;
}
void fn_802C5CB8(){
 fn_80066188((int)fn_802C5CE0);
}
void fn_802C5CE0(){
 fn_802B1AC8();
 fn_80066204(1,(int)&lbl_80534C40,(int)fn_80066B08,(int)fn_800237D0,(int)fn_802C5D50,(int)lbl_8041EA3C,20,0,(int)fn_802C5D70,0,0);
}
void *fn_802C5D50(){return fn_802C5C6C();}
}
#pragma pop

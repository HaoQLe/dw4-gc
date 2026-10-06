#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B2E3C();
void fn_802E3D20();
void fn_803250AC();
void *fn_80335D14();
void fn_80335D60();
void fn_803360A0();
extern char lbl_8045400C[];
extern char lbl_80536064[];
extern void *lbl_80536068;
void fn_80335ED8();
void *fn_80335F44();
}
extern "C" {
void fn_80335EB0(){
 fn_80066188((int)fn_80335ED8);
}
void fn_80335ED8(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536064,(int)fn_802E3D20,(int)fn_802B2E3C,(int)fn_80335F44,(int)lbl_8045400C,28,(int)fn_80335D60,0,0,0);
}
void *fn_80335F44(){return fn_80335D14();}
void *fn_80335F64(void *object){
 fn_803360A0();
 return fn_8006546C(lbl_80536068,object);
}
void *fn_80335FA4(){
 if(!lbl_80536068 || !(reinterpret_cast<unsigned int *>(lbl_80536068)[0x24/4]&4)) fn_803360A0();
 return lbl_80536068;
}
}
#pragma pop

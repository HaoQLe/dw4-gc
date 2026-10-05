#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CAEE0();
void *fn_800CB078();
void fn_800CB4AC();
void fn_800CB9E8();
extern char lbl_8047F6B0[];
extern char lbl_8055E970[8];
extern void *lbl_805621F4;
extern void *lbl_80562C08;
void *fn_800CB8F4();
void fn_800CB930();
void fn_800CB958();
void *fn_800CB9C8();
}
extern "C" {
void *fn_800CB8B8(){
 if(!lbl_80562C08) lbl_80562C08=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562C08;
}
void *fn_800CB8F4(){
 if(!lbl_80562C08 || !(reinterpret_cast<unsigned int *>(lbl_80562C08)[0x24/4]&4)) fn_800CB930();
 return lbl_80562C08;
}
void fn_800CB930(){
 fn_80066188((int)fn_800CB958);
}
void fn_800CB958(){
 fn_800CAEE0();
 fn_80066204(1,(int)&lbl_80562C08,(int)fn_800CB4AC,(int)fn_800CB078,(int)fn_800CB9C8,(int)lbl_8047F6B0,12,0,(int)fn_800CB9E8,0,(int)lbl_8055E970);
}
void *fn_800CB9C8(){return fn_800CB8F4();}
}
#pragma pop

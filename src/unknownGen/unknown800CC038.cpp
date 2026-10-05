#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CAEE0();
void fn_800CB958();
void *fn_800CBA80();
void fn_800CBF94();
void fn_800CC1E4();
extern char lbl_8047FFA4[];
extern void *lbl_80562C08;
extern void *lbl_80562C50;
extern void *lbl_80562C54;
void fn_800CC060();
void *fn_800CC0C8();
}
extern "C" {
void fn_800CC038(){
 fn_80066188((int)fn_800CC060);
}
void fn_800CC060(){
 fn_800CAEE0();
 fn_80066204(0,(int)&lbl_80562C50,(int)fn_800CB958,(int)fn_800CC0C8,(int)fn_800CBA80,(int)lbl_8047FFA4,12,(int)fn_800CBF94,0,0,0);
}
void *fn_800CC0C8(){return lbl_80562C08;}
void *fn_800CC0D0(void *object){
 fn_800CC1E4();
 return fn_8006546C(lbl_80562C54,object);
}
void *fn_800CC108(){
 if(!lbl_80562C54 || !(reinterpret_cast<unsigned int *>(lbl_80562C54)[0x24/4]&4)) fn_800CC1E4();
 return lbl_80562C54;
}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CAEE0();
void *fn_800CB078();
void fn_800CB4AC();
void fn_800CBBDC();
extern char lbl_8047FE50[];
extern void *lbl_80562C14;
void *fn_800CBAEC();
void fn_800CBB28();
void fn_800CBB50();
void *fn_800CBBBC();
}
extern "C" {
void *fn_800CBAEC(){
 if(!lbl_80562C14 || !(reinterpret_cast<unsigned int *>(lbl_80562C14)[0x24/4]&4)) fn_800CBB28();
 return lbl_80562C14;
}
void fn_800CBB28(){
 fn_80066188((int)fn_800CBB50);
}
void fn_800CBB50(){
 fn_800CAEE0();
 fn_80066204(1,(int)&lbl_80562C14,(int)fn_800CB4AC,(int)fn_800CB078,(int)fn_800CBBBC,(int)lbl_8047FE50,16,0,(int)fn_800CBBDC,0,0);
}
void *fn_800CBBBC(){return fn_800CBAEC();}
}
#pragma pop

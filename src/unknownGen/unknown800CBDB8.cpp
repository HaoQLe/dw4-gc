#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CAEE0();
void fn_800CAFEC();
void *fn_800CB094();
void fn_800CBCD8();
void fn_800CBE5C();
extern char lbl_8047FE90[];
extern char lbl_8055E9B0[8];
extern void *lbl_80562B74;
extern void *lbl_80562C24;
void fn_800CBDE0();
void *fn_800CBE54();
}
extern "C" {
void fn_800CBDB8(){
 fn_80066188((int)fn_800CBDE0);
}
void fn_800CBDE0(){
 fn_800CAEE0();
 fn_80066204(0,(int)&lbl_80562C24,(int)fn_800CAFEC,(int)fn_800CBE54,(int)fn_800CB094,(int)lbl_8047FE90,48,(int)fn_800CBCD8,(int)fn_800CBE5C,0,(int)lbl_8055E9B0);
}
void *fn_800CBE54(){return lbl_80562B74;}
}
#pragma pop

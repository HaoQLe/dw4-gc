#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_800635C8(void *,void *,void *,int);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_800CAEE0();
void fn_800CB1F4();
void *fn_800CBC9C();
extern char lbl_8047EC18[];
extern char lbl_8047F350[];
extern char lbl_8055E948[8];
extern void *lbl_80562B9C;
extern void *lbl_80562BA4;
void *fn_800CB100();
void fn_800CB13C();
void fn_800CB164();
void *fn_800CB1D4();
}
extern "C" {
void *fn_800CB094(){return fn_800CBC9C();}
void *fn_800CB0B4(){
 char *data=lbl_8047EC18;
 if(!lbl_80562B9C) lbl_80562B9C=fn_800635C8(data+0x72C,data+0x3E4,data+0x588,0x69);
 return lbl_80562B9C;
}
void *fn_800CB100(){
 if(!lbl_80562BA4 || !(reinterpret_cast<unsigned int *>(lbl_80562BA4)[0x24/4]&4)) fn_800CB13C();
 return lbl_80562BA4;
}
void fn_800CB13C(){
 fn_80066188((int)fn_800CB164);
}
void fn_800CB164(){
 fn_800CAEE0();
 fn_80066204(1,(int)&lbl_80562BA4,(int)fn_80066B08,(int)fn_800237D0,(int)fn_800CB1D4,(int)lbl_8047F350,12,0,(int)fn_800CB1F4,0,(int)lbl_8055E948);
}
void *fn_800CB1D4(){return fn_800CB100();}
}
#pragma pop

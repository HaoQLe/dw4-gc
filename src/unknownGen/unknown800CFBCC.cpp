#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CE2F8();
void fn_800CFD04();
void *fn_800CFE78();
void fn_800D0108();
extern char lbl_804888F8[];
extern char lbl_8055EAC4[8];
extern void *lbl_80562DDC;
extern void *lbl_80562DFC;
void *fn_800CFC04();
void fn_800CFC40();
void fn_800CFC68();
void *fn_800CFCDC();
void *fn_800CFCFC();
}
extern "C" {
void *fn_800CFBCC(void *object){
 fn_800CFC40();
 return fn_8006546C(lbl_80562DDC,object);
}
void *fn_800CFC04(){
 if(!lbl_80562DDC || !(reinterpret_cast<unsigned int *>(lbl_80562DDC)[0x24/4]&4)) fn_800CFC40();
 return lbl_80562DDC;
}
void fn_800CFC40(){
 fn_80066188((int)fn_800CFC68);
}
void fn_800CFC68(){
 fn_800CE2F8();
 fn_80066204(1,(int)&lbl_80562DDC,(int)fn_800D0108,(int)fn_800CFCFC,(int)fn_800CFCDC,(int)lbl_804888F8,48,0,(int)fn_800CFD04,(int)fn_800CFE78,(int)lbl_8055EAC4);
}
void *fn_800CFCDC(){return fn_800CFC04();}
void *fn_800CFCFC(){return lbl_80562DFC;}
}
#pragma pop

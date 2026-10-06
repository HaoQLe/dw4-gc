#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8033FB70();
void fn_8033FBBC();
void fn_8033FE80();
void fn_803401C4();
extern char lbl_80454E18[];
extern char lbl_804E38D4[];
extern char lbl_804E38D8[];
extern char lbl_804E38DC[];
extern char lbl_804E38E0[];
extern void *lbl_805365EC;
extern void *lbl_805365F4;
extern void *lbl_80536604;
void fn_8033FC7C();
void *fn_8033FCF0();
void *fn_8033FD10();
void fn_8033FD20();
}
extern "C" {
void fn_8033FC54(){
 fn_80066188((int)fn_8033FC7C);
}
void fn_8033FC7C(){
 fn_803250AC();
 fn_80066204(0,(int)&lbl_805365EC,(int)fn_803401C4,(int)fn_8033FD10,(int)fn_8033FCF0,(int)lbl_80454E18,28,(int)fn_8033FBBC,(int)fn_8033FD20,0,0);
}
void *fn_8033FCF0(){return fn_8033FB70();}
void *fn_8033FD10(){return lbl_80536604;}
void fn_8033FD20(){
 void *meta=lbl_805365EC;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E38D4,0x1);
 fn_800659C0(meta,lbl_804E38D8,lbl_804E38DC,lbl_804E38E0,field);
}
void *fn_8033FDA0(void *object){
 fn_8033FE80();
 return fn_8006546C(lbl_805365F4,object);
}
void *fn_8033FDE0(){
 if(!lbl_805365F4 || !(reinterpret_cast<unsigned int *>(lbl_805365F4)[0x24/4]&4)) fn_8033FE80();
 return lbl_805365F4;
}
}
#pragma pop

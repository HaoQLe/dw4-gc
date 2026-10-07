#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_8033FE80();
extern char lbl_804E38D4[];
extern char lbl_804E38D8[];
extern char lbl_804E38DC[];
extern char lbl_804E38E0[];
extern void *lbl_805365EC;
extern void *lbl_805365F4;
}
extern "C" {
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

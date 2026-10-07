#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *fn_8006546C(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80338DA4();
extern char lbl_80454368[];
extern char lbl_804E26F8[];
extern char lbl_804E2708[];
extern char lbl_804E2718[];
extern char lbl_804E2728[];
extern char lbl_804E2738[];
extern char lbl_804E2754[];
extern void *lbl_80536160;
extern void *lbl_80536174;
extern void *lbl_80536178;
extern void *lbl_805621F4;
}
extern "C" {
void fn_80338A30(){
 void *meta=lbl_80536160;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E26F8,0x4);
 fn_800659C0(meta,lbl_804E2708,lbl_804E2718,lbl_804E2728,field);
}
void *fn_80338AB0(){
 if(!lbl_80536174) lbl_80536174=fn_800635C8(lbl_80454368,lbl_804E2738,lbl_804E2754,0x7);
 return lbl_80536174;
}
void *fn_80338B10(void *object){
 fn_80338DA4();
 return fn_8006546C(lbl_80536178,object);
}
void *fn_80338B50(){
 if(!lbl_80536178) lbl_80536178=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80536178;
}
void *fn_80338BA4(){
 if(!lbl_80536178 || !(reinterpret_cast<unsigned int *>(lbl_80536178)[0x24/4]&4)) fn_80338DA4();
 return lbl_80536178;
}
}
#pragma pop

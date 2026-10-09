#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_802C587C();
extern char lbl_804D05C8[];
extern char lbl_804D05D0[];
extern char lbl_804D05D8[];
extern char lbl_804D05E0[];
extern void *lbl_80534BF8;
extern void *lbl_80534C04;
}
extern "C" {
void beModelCtrlSCSound_fieldInit(){
 void *meta=lbl_80534BF8;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D05C8,0x2);
 fn_800659C0(meta,lbl_804D05D0,lbl_804D05D8,lbl_804D05E0,field);
}
void *fn_802C579C(void *object){
 fn_802C587C();
 return fn_8006546C(lbl_80534C04,object);
}
void *beModelCtrlSCHitBox_getMeta(){
 if(!lbl_80534C04 || !(reinterpret_cast<unsigned int *>(lbl_80534C04)[0x24/4]&4)) fn_802C587C();
 return lbl_80534C04;
}
}
#pragma pop

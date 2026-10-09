#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
void *fn_8006546C(void *,void *);
void fn_804070F4();
extern char lbl_80462848[];
extern char lbl_804F0A98[];
extern char lbl_804F0AA4[];
extern void *lbl_8055C9D8;
extern void *lbl_8055C9DC;
}
extern "C" {
void *fn_80406FA0(){
 if(!lbl_8055C9D8) lbl_8055C9D8=fn_800635C8(lbl_80462848,lbl_804F0A98,lbl_804F0AA4,0x3);
 return lbl_8055C9D8;
}
void *fn_80407000(void *object){
 fn_804070F4();
 return fn_8006546C(lbl_8055C9DC,object);
}
void *igRotateMode_getMeta(){
 if(!lbl_8055C9DC || !(reinterpret_cast<unsigned int *>(lbl_8055C9DC)[0x24/4]&4)) fn_804070F4();
 return lbl_8055C9DC;
}
}
#pragma pop

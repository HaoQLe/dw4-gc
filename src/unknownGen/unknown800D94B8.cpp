#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8004C430(void *,void *);
void fn_8004C924(void *);
void fn_800D8B90(void *,void *,int);
extern char lbl_80413774[];
extern char lbl_804F5870[];
}
extern "C" {
void fn_800D94B8(int p0){
 fn_8004C924((void *)p0);
 fn_8004C430((void *)p0,lbl_80413774);
}
int fn_800D94F4(){return 0;}
void fn_800D94FC(int p0,int p1,int p2,int p3,int p4,int p5){
 fn_800D8B90((void *)p1,lbl_804F5870,28);
}
int fn_800D9530(){return 1;}
}
#pragma pop

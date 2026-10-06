#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *fn_8006546C(void *,void *);
void fn_802C511C();
extern char lbl_8041CD10[];
extern char lbl_804D0568[];
extern char lbl_804D0578[];
extern void *lbl_80534BE0;
extern void *lbl_80534BE4;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802C4E44(){
 if(!lbl_80534BE0) lbl_80534BE0=fn_800635C8(lbl_8041CD10,lbl_804D0568,lbl_804D0578,0x4);
 return lbl_80534BE0;
}
void *fn_802C4EA4(void *object){
 fn_802C511C();
 return fn_8006546C(lbl_80534BE4,object);
}
void *fn_802C4EE4(){
 if(!lbl_80534BE4) lbl_80534BE4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80534BE4;
}
void *fn_802C4F38(){
 if(!lbl_80534BE4 || !(reinterpret_cast<unsigned int *>(lbl_80534BE4)[0x24/4]&4)) fn_802C511C();
 return lbl_80534BE4;
}
}
#pragma pop

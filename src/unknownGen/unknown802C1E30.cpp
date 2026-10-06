#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *fn_8006546C(void *,void *);
void fn_802C2080();
extern char lbl_8041CD10[];
extern char lbl_804D0108[];
extern char lbl_804D0128[];
extern void *lbl_80534AA4;
extern void *lbl_80534AA8;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802C1E30(){
 if(!lbl_80534AA4) lbl_80534AA4=fn_800635C8(lbl_8041CD10,lbl_804D0108,lbl_804D0128,0x8);
 return lbl_80534AA4;
}
void *fn_802C1E90(void *object){
 fn_802C2080();
 return fn_8006546C(lbl_80534AA8,object);
}
void *fn_802C1ED0(){
 if(!lbl_80534AA8) lbl_80534AA8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80534AA8;
}
void *fn_802C1F24(){
 if(!lbl_80534AA8 || !(reinterpret_cast<unsigned int *>(lbl_80534AA8)[0x24/4]&4)) fn_802C2080();
 return lbl_80534AA8;
}
}
#pragma pop

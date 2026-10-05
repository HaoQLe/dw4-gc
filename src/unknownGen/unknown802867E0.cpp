#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802868C0();
extern void *lbl_80515D24;
}
extern "C" {
void *fn_802867E0(void *object){
 fn_802868C0();
 return fn_8006546C(lbl_80515D24,object);
}
void *fn_80286820(){
 if(!lbl_80515D24 || !(reinterpret_cast<unsigned int *>(lbl_80515D24)[0x24/4]&4)) fn_802868C0();
 return lbl_80515D24;
}
}
#pragma pop

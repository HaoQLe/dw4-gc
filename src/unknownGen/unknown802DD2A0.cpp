#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802DD410();
extern void *lbl_80535470;
}
extern "C" {
void *fn_802DD2A0(void *object){
 fn_802DD410();
 return fn_8006546C(lbl_80535470,object);
}
void *fn_802DD2E0(){
 if(!lbl_80535470 || !(reinterpret_cast<unsigned int *>(lbl_80535470)[0x24/4]&4)) fn_802DD410();
 return lbl_80535470;
}
}
#pragma pop

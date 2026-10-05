#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802D5B20();
extern void *lbl_80535210;
}
extern "C" {
void *fn_802D5A08(void *object){
 fn_802D5B20();
 return fn_8006546C(lbl_80535210,object);
}
void *fn_802D5A48(){
 if(!lbl_80535210 || !(reinterpret_cast<unsigned int *>(lbl_80535210)[0x24/4]&4)) fn_802D5B20();
 return lbl_80535210;
}
}
#pragma pop

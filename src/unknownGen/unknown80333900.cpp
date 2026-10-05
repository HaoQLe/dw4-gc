#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80333B8C();
extern void *lbl_80535F94;
}
extern "C" {
void *fn_80333900(void *object){
 fn_80333B8C();
 return fn_8006546C(lbl_80535F94,object);
}
void *fn_80333940(){
 if(!lbl_80535F94 || !(reinterpret_cast<unsigned int *>(lbl_80535F94)[0x24/4]&4)) fn_80333B8C();
 return lbl_80535F94;
}
}
#pragma pop

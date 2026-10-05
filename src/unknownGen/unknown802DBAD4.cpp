#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802DBCB0();
extern void *lbl_80535418;
}
extern "C" {
void *fn_802DBAD4(void *object){
 fn_802DBCB0();
 return fn_8006546C(lbl_80535418,object);
}
void *fn_802DBB14(){
 if(!lbl_80535418 || !(reinterpret_cast<unsigned int *>(lbl_80535418)[0x24/4]&4)) fn_802DBCB0();
 return lbl_80535418;
}
}
#pragma pop

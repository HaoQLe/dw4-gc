#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802DBA18();
extern void *lbl_80535414;
}
extern "C" {
void *fn_802DB958(){
 if(!lbl_80535414 || !(reinterpret_cast<unsigned int *>(lbl_80535414)[0x24/4]&4)) fn_802DBA18();
 return lbl_80535414;
}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802E2AF8();
extern void *lbl_80535698;
}
extern "C" {
void *beBkColorInfo_getMeta(){
 if(!lbl_80535698 || !(reinterpret_cast<unsigned int *>(lbl_80535698)[0x24/4]&4)) fn_802E2AF8();
 return lbl_80535698;
}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *lbl_80562718;
extern void *lbl_80562720;
extern void *lbl_80562734;
}
extern "C" {
void *fn_800C6604(){return lbl_80562718;}
void *fn_800C660C(){return lbl_80562720;}
void fn_800C6614(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+12)=value;}
void *fn_800C661C(){return lbl_80562734;}
int fn_800C6624(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+32);}
}
#pragma pop

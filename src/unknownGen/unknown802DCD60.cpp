#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802DCED0();
extern void *lbl_80535460;
}
extern "C" {
void *fn_802DCD60(void *object){
 fn_802DCED0();
 return fn_8006546C(lbl_80535460,object);
}
void *fn_802DCDA0(){
 if(!lbl_80535460 || !(reinterpret_cast<unsigned int *>(lbl_80535460)[0x24/4]&4)) fn_802DCED0();
 return lbl_80535460;
}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802CD440();
void *fn_80307E6C();
extern void *lbl_80534F6C;
}
extern "C" {
void *fn_802CD360(){return fn_80307E6C();}
void *fn_802CD380(){
 if(!lbl_80534F6C || !(reinterpret_cast<unsigned int *>(lbl_80534F6C)[0x24/4]&4)) fn_802CD440();
 return lbl_80534F6C;
}
}
#pragma pop

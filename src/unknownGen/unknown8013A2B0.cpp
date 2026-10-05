#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8013A3DC();
extern void *lbl_80563E28;
}
extern "C" {
void *fn_8013A2B0(){
 if(!lbl_80563E28 || !(reinterpret_cast<unsigned int *>(lbl_80563E28)[0x24/4]&4)) fn_8013A3DC();
 return lbl_80563E28;
}
}
#pragma pop

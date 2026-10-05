#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801403D4();
extern void *lbl_80563FCC;
}
extern "C" {
void *fn_801402CC(){
 if(!lbl_80563FCC || !(reinterpret_cast<unsigned int *>(lbl_80563FCC)[0x24/4]&4)) fn_801403D4();
 return lbl_80563FCC;
}
}
#pragma pop

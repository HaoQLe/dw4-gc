#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8010DC78();
extern void *lbl_805635C8;
extern void *lbl_8056373C;
}
extern "C" {
void *fn_8010DB2C(){return lbl_8056373C;}
void *fn_8010DB34(){
 if(!lbl_805635C8 || !(reinterpret_cast<unsigned int *>(lbl_805635C8)[0x24/4]&4)) fn_8010DC78();
 return lbl_805635C8;
}
}
#pragma pop

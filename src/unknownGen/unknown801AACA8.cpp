#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065DBC(int);
void fn_801AAE78();
void fn_8020AEC0();
void fn_8020AFFC();
void *fn_8020B028();
extern void *lbl_80564680;
}
extern "C" {
void fn_801AACA8(){
 fn_8020AFFC();
 fn_80065DBC((int)fn_8020AEC0);
}
void *fn_801AACD4(){return fn_8020B028();}
void *fn_801AACF4(){
 if(!lbl_80564680 || !(reinterpret_cast<unsigned int *>(lbl_80564680)[0x24/4]&4)) fn_801AAE78();
 return lbl_80564680;
}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065DBC(int);
void fn_801C523C();
void fn_801DB2E8();
void fn_801DB5DC();
void *fn_801DB624();
extern void *lbl_805651A8;
}
extern "C" {
void fn_801C50A8(){
 fn_801DB5DC();
 fn_80065DBC((int)fn_801DB2E8);
}
void *fn_801C50D4(){return fn_801DB624();}
void *fn_801C50F4(){
 if(!lbl_805651A8 || !(reinterpret_cast<unsigned int *>(lbl_805651A8)[0x24/4]&4)) fn_801C523C();
 return lbl_805651A8;
}
}
#pragma pop

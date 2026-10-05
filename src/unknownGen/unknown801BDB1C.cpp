#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80065DBC(int);
void fn_801BDD18();
void fn_801F5C1C();
void fn_801F5CE8();
void *fn_801F5D14();
extern void *lbl_805621F4;
extern void *lbl_80564E5C;
}
extern "C" {
void fn_801BDB1C(){
 fn_801F5CE8();
 fn_80065DBC((int)fn_801F5C1C);
}
void *fn_801BDB48(){return fn_801F5D14();}
void *fn_801BDB68(void *object){
 fn_801BDD18();
 return fn_8006546C(lbl_80564E5C,object);
}
void *fn_801BDBA0(){
 if(!lbl_80564E5C) lbl_80564E5C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564E5C;
}
void *fn_801BDBDC(){
 if(!lbl_80564E5C || !(reinterpret_cast<unsigned int *>(lbl_80564E5C)[0x24/4]&4)) fn_801BDD18();
 return lbl_80564E5C;
}
}
#pragma pop

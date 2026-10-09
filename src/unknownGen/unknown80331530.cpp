#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8033192C();
extern void *lbl_80535F04;
}
extern "C" {
void *fn_80331530(void *object){
 fn_8033192C();
 return fn_8006546C(lbl_80535F04,object);
}
void *beNDMWStatusCtrlDisk_getMeta(){
 if(!lbl_80535F04 || !(reinterpret_cast<unsigned int *>(lbl_80535F04)[0x24/4]&4)) fn_8033192C();
 return lbl_80535F04;
}
}
#pragma pop

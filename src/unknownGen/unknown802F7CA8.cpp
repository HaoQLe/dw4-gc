#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8028A730(void *,void *);
extern void *lbl_80534FBC;
extern void *lbl_80535124;
}
extern "C" {
void fn_802F7CA8(int p0){
 void *value0=fn_8028A730(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),lbl_80534FBC);
 *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16)=value0;
 void *value1=fn_8028A730(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),lbl_80535124);
 *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20)=value1;
}
void fn_802F7D00(){}
int fn_802F7D04(){return 0;}
}
#pragma pop

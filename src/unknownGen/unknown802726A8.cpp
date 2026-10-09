#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802727F4(void *,...);
void *fn_80278854(void *);
extern char lbl_804C9A50[];
extern char lbl_804C9A68[];
}
extern "C" {
void *igLuaState_virtual5C(int p0){
 void *value0;
 value0=fn_80278854(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12));
 if((int)(int)value0!=0){
  fn_802727F4(lbl_804C9A68,(void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(lbl_804C9A50)+((int)value0<<2)));
 }
 return value0;
}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802727F4(void *,...);
void *fn_80272B28(void *,void *);
extern char lbl_804C9A50[];
extern char lbl_804C9A94[];
}
extern "C" {
void *igLuaState_virtual60(int p0,int p1){
 void *value0;
 value0=fn_80272B28(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),(void *)p1);
 if((int)(int)value0!=0){
  fn_802727F4(lbl_804C9A94,(void *)p1,(void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(lbl_804C9A50)+((int)value0<<2)));
 }
 return value0;
}
}
#pragma pop

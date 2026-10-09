#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80068128(void *,void *);
void fn_8021A1E0(void *,void *);
void fn_8028A398(void *,void *);
extern char lbl_80565AF4[4];
}
extern "C" {
void *igViewerDataPumpManager_virtual6C(int p0,int p1){
 void *value0;
 value0=fn_80068128((void *)p1,*reinterpret_cast<void **>((lbl_80565AF4+0)));
 if((unsigned char)(int)value0){
  fn_8021A1E0(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16),(void *)p1);
  fn_8028A398(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),(void *)p0);
  return (void *)1;
 } else {
  return (void *)0;
 }
}
}
#pragma pop

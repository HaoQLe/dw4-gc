#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8002DB4C(int);
void *fn_80065218(void *);
void *fn_80066710(void *);
extern char lbl_804761D8[];
}
extern "C" {
void *fn_800651B4(int p0){
 void *value0;
 fn_80066710((void *)p0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=lbl_804761D8;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+28)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+96)=(void *)0;
 if((unsigned int)p0!=0){
  fn_80065218((void *)p0);
 }
 value0=fn_8002DB4C(0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+40)=value0;
 return (void *)p0;
}
}
#pragma pop

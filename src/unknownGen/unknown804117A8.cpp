#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8011BFA4(void *,void *);
void fn_80411044(void *,float);
void fn_8041125C(void *,float);
void fn_80411580(void *);
extern char lbl_8055CA7C[];
}
struct UnknownGenL804117A8_8 {
 int m08;
 int m0C;
 int m10;
};
extern "C" {
void fn_804117A8(int p0,float f0){
 void *value0;
 UnknownGenL804117A8_8 local0;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8);
 fn_80411044((void *)p0,f0);
 if(*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+132)){
  fn_80411580((void *)p0);
 }
 fn_8041125C((void *)p0,f0);
 local0.m08=(int)2;
 local0.m0C=(int)0;
 local0.m10=(int)(int)*reinterpret_cast<void **>((lbl_8055CA7C+0));
 fn_8011BFA4(value0,&local0);
}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8011BFA4(void *,void *);
void fn_80128CF4(void *,void *);
void fn_801DB6E4(void *,float,float,float,float,float);
extern char lbl_80462E28[];
extern void *lbl_8055C8F0;
}
struct UnknownGenL8040B834_8 {
 int m08;
 int m0C;
 int m10;
};
extern "C" {
void fn_8040B834(int p0){
 UnknownGenL8040B834_8 local0;
 float value0=*reinterpret_cast<float *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12))+32);
 float value1=*reinterpret_cast<float *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12))+28);
 float value2=*reinterpret_cast<float *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12))+36);
 float value3=*reinterpret_cast<float *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12))+40);
 fn_801DB6E4(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+80),value0,*reinterpret_cast<float *>((lbl_80462E28+0)),value1,value2,value3);
 fn_80128CF4((reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12))+44),(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+80))+272));
 local0.m08=(int)2;
 local0.m0C=(int)0;
 local0.m10=(int)(int)lbl_8055C8F0;
 fn_8011BFA4(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),&local0);
}
}
#pragma pop

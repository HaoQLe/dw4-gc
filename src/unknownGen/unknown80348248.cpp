#include <unknownGen.h>
#include <meta/beNDMWAfsSetup.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80068128(void *,void *);
void fn_80069128(void *,void *);
void fn_8028A398(void *,void *);
void *fn_8028A730(void *,void *);
extern char lbl_80535584[];
extern char lbl_80536828[];
}
extern "C" {
void *beNDMWAfsSetup_virtual6C(int p0,int p1){
 void *value0;
 void *value1;
 value0=fn_80068128((void *)p1,*reinterpret_cast<void **>((lbl_80536828+0)));
 if((unsigned char)(int)value0){
  value1=fn_8028A730(reinterpret_cast<Meta::beNDMWAfsSetup *>((void *)p0)->_insight,*reinterpret_cast<void **>((lbl_80535584+0)));
  if(!value1){
   return (void *)0;
  } else {
   fn_80069128(reinterpret_cast<Meta::beNDMWAfsSetup *>((void *)p0)->_infoList,(void *)p1);
   fn_8028A398(reinterpret_cast<Meta::beNDMWAfsSetup *>((void *)p0)->_insight,(void *)p0);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+32)=(void *)0;
   return (void *)1;
  }
 }
 return (void *)0;
}
}
#pragma pop

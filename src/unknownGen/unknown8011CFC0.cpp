#include <unknownGen.h>
#include <meta/igGeometry.h>
#include <meta/igTextElement.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8011BFA4(void *,void *);
extern void *lbl_805635BC;
}
struct UnknownGenL8011CFC0_8 {
 int m08;
 int m0C;
 int m10;
};
extern "C" {
void igTextElement_virtual174(int p0){
 UnknownGenL8011CFC0_8 local0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12))+52)=(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12))+52)+(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16));
 local0.m08=(int)2;
 local0.m0C=(int)0;
 local0.m10=(int)(int)lbl_805635BC;
 fn_8011BFA4(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),&local0);
}
void *igTextElement_virtualC4(int p0,int p1){
 void *value0;
 void *value1;
 value0=reinterpret_cast<Meta::igTextElement *>((void *)p0)->_geometry;
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+0)!=0){
  return (void *)p0;
 }
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+36);
 if(!value1){
  return value1;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value1)+24)=reinterpret_cast<Meta::igGeometry *>(value0)->_attributes;
 return value1;
}
}
#pragma pop

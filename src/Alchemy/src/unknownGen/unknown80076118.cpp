#include <unknownGen.h>
#include <meta/igGamecubeCallStackTracer.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80041660(void *,void *,int);
void *igCallStackTracer_virtual64();
extern void *lbl_8055DC74;
}
extern "C" {
int igVirtualCFuncMetaField_virtual6C(){return 4;}
void *igGamecubeCallStackTracer_virtual60(int p0){
 void *value0;
 value0=(void *)reinterpret_cast<Meta::igGamecubeCallStackTracer *>((void *)p0)->_count;
 if((int)(int)value0<(int)(int)(void *)reinterpret_cast<Meta::igGamecubeCallStackTracer *>((void *)p0)->_capacity){
  reinterpret_cast<Meta::igGamecubeCallStackTracer *>((void *)p0)->_count=(int)(reinterpret_cast<char *>(value0)+1);
 } else {
  fn_80041660((void *)p0,(reinterpret_cast<char *>(value0)+1),4);
 }
 *reinterpret_cast<int *>(reinterpret_cast<char *>(reinterpret_cast<Meta::igGamecubeCallStackTracer *>((void *)p0)->_data)+((int)value0<<2))=(int)(int)lbl_8055DC74;
 return reinterpret_cast<Meta::igGamecubeCallStackTracer *>((void *)p0)->_data;
}
void *igGamecubeCallStackTracer_virtual64(){return igCallStackTracer_virtual64();}
}
#pragma pop

#include <unknownGen.h>
#include <meta/igMetaObject.h>
#include <meta/igParameterSet.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065A58(void *);
void fn_800667A4();
void fn_800667CC();
}
extern "C" {
void igParameterSet_virtual0C(){return fn_800667A4();}
void igParameterSet_virtual34(int p0,int p1){
 fn_800667CC();
 if((unsigned char)p1){
  reinterpret_cast<Meta::igMetaObject *>(reinterpret_cast<Meta::igParameterSet *>((void *)p0)->_dynamicMeta)->_sizeofSize=(int)1;
  fn_80065A58(reinterpret_cast<Meta::igParameterSet *>((void *)p0)->_dynamicMeta);
  return;
 } else {
  return;
 }
}
}
#pragma pop

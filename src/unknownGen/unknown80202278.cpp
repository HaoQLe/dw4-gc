#include <unknownGen.h>
#include <meta/igAttrListList.h>
#include <meta/igNodeListList.h>
#include <meta/igShaderData.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800667E0();
void *fn_80069090(void *);
void fn_800691E8(void *,void *);
}
extern "C" {
void *igShaderData_virtual44(int p0){
 void *value0;
 void *value1;
 fn_800667E0();
 value0=reinterpret_cast<Meta::igShaderData *>((void *)p0)->_childLists;
 if((int)(int)(void *)reinterpret_cast<Meta::igAttrListList *>(reinterpret_cast<Meta::igShaderData *>((void *)p0)->_attrPushLists)->_count!=(int)(int)(void *)reinterpret_cast<Meta::igNodeListList *>(value0)->_count){
  fn_800691E8(value0,(void *)reinterpret_cast<Meta::igAttrListList *>(reinterpret_cast<Meta::igShaderData *>((void *)p0)->_attrPushLists)->_count);
  value1=fn_80069090(reinterpret_cast<Meta::igShaderData *>((void *)p0)->_childLists);
  return value1;
 } else {
  return value0;
 }
}
}
#pragma pop

#include <unknownGen.h>
#include <meta/igAttrStackList.h>
#include <meta/igAttrStackManager.h>
#include <meta/igIntList.h>
#include <meta/igLightStateAttrPool.h>
#include <meta/igNonRefCountedAttrList.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801D397C(void *);
void fn_801D4CFC(void *);
}
extern "C" {
void *igAttrStackManager_virtual5C(int p0){
 void *value2;
 void *value0;
 void *value1;
 if((int)(int)(void *)reinterpret_cast<Meta::igAttrStackManager *>((void *)p0)->_numAttrStacks>0){
  value2=(void *)0;
  while((int)(int)value2<(int)(int)(void *)reinterpret_cast<Meta::igAttrStackManager *>((void *)p0)->_numAttrStacks){
   fn_801D397C((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(reinterpret_cast<Meta::igAttrStackList *>(reinterpret_cast<Meta::igAttrStackManager *>((void *)p0)->_attrStacks)->_data)+((int)value2<<2)));
   value2=(reinterpret_cast<char *>(value2)+1);
  }
  reinterpret_cast<Meta::igIntList *>(reinterpret_cast<Meta::igAttrStackManager *>((void *)p0)->_attrIncrementalUpdateList)->_count=(int)0;
  value0=reinterpret_cast<Meta::igAttrStackManager *>((void *)p0)->_attrRootUpdateList;
  reinterpret_cast<Meta::igIntList *>(value0)->_count=(int)0;
  fn_801D4CFC((void *)p0);
  reinterpret_cast<Meta::igNonRefCountedAttrList *>(reinterpret_cast<Meta::igAttrStackManager *>((void *)p0)->_updateLightAttrs)->_count=(int)0;
  value1=reinterpret_cast<Meta::igAttrStackManager *>((void *)p0)->_lightDisableAttrPool;
  reinterpret_cast<Meta::igLightStateAttrPool *>(value1)->_freeIndex=(int)0;
  return value1;
 } else {
  return (void *)p0;
 }
}
}
#pragma pop

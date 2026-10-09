#include <unknownGen.h>
#include <meta/igAllAttrStatistics.h>
#include <meta/igAllNodeStatistics.h>
#include <meta/igStatistics.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800691E8(void *,int);
void fn_801A2244(void *,void *,int);
void fn_801A2CFC(void *,void *,void *);
extern void *lbl_80564634;
}
extern "C" {
void *igStatistics_virtual70(int p0,int p1){
 if(!lbl_80564634){
  return (void *)0;
 } else {
  if(!*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+0)){
   return (void *)1;
  } else {
   fn_800691E8(reinterpret_cast<Meta::igAllNodeStatistics *>(reinterpret_cast<Meta::igStatistics *>((void *)p0)->_nodeStatistics)->_nodeStatisticsList,0);
   fn_800691E8(reinterpret_cast<Meta::igAllAttrStatistics *>(reinterpret_cast<Meta::igStatistics *>((void *)p0)->_attrStatistics)->_attrStatisticsList,0);
   fn_801A2244((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+0),1);
   fn_801A2CFC((void *)p0,(void *)(int)reinterpret_cast<Meta::igStatistics *>((void *)p0)->_level,reinterpret_cast<Meta::igStatistics *>((void *)p0)->_optInterface);
   return (void *)1;
  }
 }
}
}
#pragma pop

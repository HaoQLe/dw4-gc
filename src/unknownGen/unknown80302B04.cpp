#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *beLuaState_meta;
}
extern "C" {
void *beLuaState_virtual58(){return beLuaState_meta;}
void *fn_80302B14(void *p0){
 void *value0;
 value0=(void *)0;
 if((int)*reinterpret_cast<int *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(p0)+56))+16))+((int)*reinterpret_cast<void **>(reinterpret_cast<char *>(p0)+40)<<2))!=0){
  value0=(void *)1;
 }
 return value0;
}
}
#pragma pop

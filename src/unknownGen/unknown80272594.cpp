#include <unknownGen.h>
#include <meta/igLuaState.h>
#include <meta/igMemoryPool.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800607F4(void *);
void *fn_80068430(void *);
void fn_80270BC4(void *);
void *fn_80272264(void *);
void fn_80272558(void *);
void fn_80275FF8(void *);
void fn_8027BC14(void *);
void *fn_8027E9D4(int,void *);
void fn_80280C08(void *);
extern void *lbl_80562220;
extern char lbl_80562298[1];
extern char lbl_80566068[1];
extern void *lbl_80566070;
}
extern "C" {
void igLuaState_virtual24(int p0){
 void *value4;
 void *value5;
 void *value6;
 void *value0;
 void *value1;
 void *value2;
 void *value7;
 void *value8;
 void *value3;
 value5=fn_80068430((void *)p0);
 if((void *)(int)*reinterpret_cast<unsigned char *>((lbl_80562298+0))){
  value4=value5;
 } else {
  value6=fn_800607F4(lbl_80562220);
  value4=value6;
 }
 if(value4){
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>(value4)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+4)=(reinterpret_cast<char *>(value0)+1);
 }
 value1=reinterpret_cast<Meta::igLuaState *>((void *)p0)->_memPool;
 if(value1){
  value2=(void *)reinterpret_cast<Meta::igMemoryPool *>(value1)->_refCount;
  reinterpret_cast<Meta::igMemoryPool *>(value1)->_refCount=(unsigned int)(reinterpret_cast<char *>(value2)+-1);
  if(!((unsigned int)(int)(void *)reinterpret_cast<Meta::igMemoryPool *>(value1)->_refCount&0x7FFFFF)){
   fn_80066E1C(value1);
  }
 }
 reinterpret_cast<Meta::igLuaState *>((void *)p0)->_memPool=(Meta::igMemoryPool *)value4;
 value7=fn_8027E9D4(0,reinterpret_cast<Meta::igLuaState *>((void *)p0)->_memPool);
 reinterpret_cast<Meta::igLuaState *>((void *)p0)->_luaState=(void *)value7;
 if(!(void *)(int)*reinterpret_cast<unsigned char *>((lbl_80566068+0))){
  fn_80272558((void *)p0);
 }
 value8=fn_80272264(reinterpret_cast<Meta::igLuaState *>((void *)p0)->_luaState);
 lbl_80566070=value8;
 value3=reinterpret_cast<Meta::igLuaState *>((void *)p0)->_luaState;
 fn_80275FF8(value3);
 fn_80280C08(value3);
 fn_8027BC14(value3);
 fn_80270BC4(value3);
}
}
#pragma pop

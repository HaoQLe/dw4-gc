#include <unknownGen.h>
#include <meta/beLua.h>
#include <meta/beLuaState.h>
#include <meta/beSystem.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8028A730(void *,void *);
extern char lbl_805346A8[];
}
extern "C" {
void beLua_virtual64(int p0){
 void *value2;
 void *value0;
 void *value1;
 value2=fn_8028A730(reinterpret_cast<Meta::beLua *>((void *)p0)->_insight,*reinterpret_cast<void **>((lbl_805346A8+0)));
 reinterpret_cast<Meta::beLua *>((void *)p0)->_system=(Meta::beSystem *)value2;
 value0=reinterpret_cast<Meta::beLua *>((void *)p0)->_luaState;
 if(value0){
  value1=(void *)reinterpret_cast<Meta::beLuaState *>(value0)->_refCount;
  reinterpret_cast<Meta::beLuaState *>(value0)->_refCount=(unsigned int)(reinterpret_cast<char *>(value1)+-1);
  if(!((unsigned int)(int)(void *)reinterpret_cast<Meta::beLuaState *>(value0)->_refCount&0x7FFFFF)){
   fn_80066E1C(value0);
  }
 }
 reinterpret_cast<Meta::beLua *>((void *)p0)->_luaState=(Meta::beLuaState *)0;
}
}
#pragma pop

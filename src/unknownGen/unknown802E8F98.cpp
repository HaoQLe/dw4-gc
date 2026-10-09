#include <unknownGen.h>
#include <meta/beLuaDataObject.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80056378(void *);
void fn_800667B4(void *);
}
extern "C" {
void beLuaDataObject_virtual28(int p0){
 void *value0;
 value0=reinterpret_cast<Meta::beLuaDataObject *>((void *)p0)->_data;
 if(value0){
  fn_80056378(value0);
 }
 reinterpret_cast<Meta::beLuaDataObject *>((void *)p0)->_data=(void *)0;
 fn_800667B4((void *)p0);
}
}
#pragma pop

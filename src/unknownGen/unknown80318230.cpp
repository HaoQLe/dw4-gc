#include <unknownGen.h>
#include <meta/beWeapon.h>
#include <meta/beWeaponAttachDataList.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void beWeapon_virtual88(int p0){
 void *value0;
 void *value1;
 value0=reinterpret_cast<Meta::beWeapon *>((void *)p0)->_attachDataList;
 if(value0){
  value1=(void *)reinterpret_cast<Meta::beWeaponAttachDataList *>(value0)->_refCount;
  reinterpret_cast<Meta::beWeaponAttachDataList *>(value0)->_refCount=(unsigned int)(reinterpret_cast<char *>(value1)+-1);
  if(!((unsigned int)(int)(void *)reinterpret_cast<Meta::beWeaponAttachDataList *>(value0)->_refCount&0x7FFFFF)){
   fn_80066E1C(value0);
  }
 }
 reinterpret_cast<Meta::beWeapon *>((void *)p0)->_attachDataList=(Meta::beWeaponAttachDataList *)0;
}
}
#pragma pop

#include "unknown8004B394.h"
#pragma push
#pragma auto_inline off
extern "C" {
const char *fn_8004B394(void *object,int index){
 Unknown800496E8Owner *owner=reinterpret_cast<Unknown800496E8Owner *>(object);
 if(index>=0 && index<32){int value=reinterpret_cast<int *>(owner->unknown60)[index];if(value!=-1) return fn_80074398(owner->unknown30,value);}
 return NULL;
}
const char *fn_8004B3E4(void *object,int index){
 Unknown800496E8Owner *owner=reinterpret_cast<Unknown800496E8Owner *>(object);
 if(index>=0 && index<32){int value=reinterpret_cast<int *>(owner->unknown60+0x84)[index];if(value!=-1) return fn_80074398(owner->unknown30,value);}
 return NULL;
}
const char *fn_8004B434(void *object,int index){
 Unknown800496E8Owner *owner=reinterpret_cast<Unknown800496E8Owner *>(object);
 if(index>=0 && index<32){int value=reinterpret_cast<int *>(owner->unknown60+0x104)[index];if(value!=-1) return fn_80074398(owner->unknown30,value);}
 return NULL;
}
const char *fn_8004B484(void *object,int index){
 Unknown800496E8Owner *owner=reinterpret_cast<Unknown800496E8Owner *>(object);
 if(index>=0 && index<16){int value=reinterpret_cast<int *>(owner->unknown60+0x184)[index];if(value!=-1) return fn_80074398(owner->unknown30,value);}
 return NULL;
}
const char *fn_8004B4D4(void *object,int index){
 Unknown800496E8Owner *owner=reinterpret_cast<Unknown800496E8Owner *>(object);
 if(index>=0 && index<64){int value=reinterpret_cast<int *>(owner->unknown60+0x1C4)[index];if(value!=-1) return fn_80074398(owner->unknown30,value);}
 return NULL;
}
Unknown8004B394Result fn_8004B524(Unknown800496E8Owner *object,void *entry,int b,int c,int d){
 char name[0x100];char description[0x100];int code,length;
 int value=object->slotA0(entry,name,0xFF,&code,description,0xFF,&length).unknown00;
 reinterpret_cast<Unknown8004B394Stream *>(object->unknown5C)->slot70(entry,name,code,description,length,b,c,d);
 return Unknown8004B394Result(value);
}
Unknown8004B394Result fn_8004B5D8(Unknown800496E8Owner *object,int a,int b,int c,int *d,int e,int f,int *g){
 int value;
 if(fn_80054344(object->unknown4C)){
  value=reinterpret_cast<Unknown8004B5D8Stream *>(object->unknown4C)->slot6C(a,b,c,d,e,f,g).unknown00;
  if(value==kFailure__3Gap && reinterpret_cast<Unknown8004B5D8Stream *>(object->unknown5C)->slot64()){
   value=reinterpret_cast<Unknown8004B5D8Stream *>(object->unknown5C)->slot6C(a,b,c,d,e,f,g).unknown00;
   reinterpret_cast<Unknown8004B5D8Stream *>(object->unknown4C)->slot74(a,b,*d,e,*g);
   ++lbl_8056212C;
  }else ++lbl_80562130;
 }else{
  value=reinterpret_cast<Unknown8004B5D8Stream *>(object->unknown5C)->slot6C(a,b,c,d,e,f,g).unknown00;
  ++lbl_8056212C;
 }
 Unknown8004B394Result result(value);
 ++lbl_80562128;
 return result;
}
void fn_8004B76C(Unknown800496E8Owner *object,int item){
 Unknown800496E8Record record;
 const Unknown80042DECResult &result=object->slot6C(item,&record);
 if(result.unknown00!=kSuccess__3Gap) return;
 object->slot98(&record,reinterpret_cast<char *>(object)+0x324,0x2003);
 Unknown800496E8Lock lock(object->unknown08);
 int length=strlen(reinterpret_cast<Unknown8004B394Text *>(object)->unknown324);
 for(int offset=0;offset<length;offset+=0x80){
  char saved=reinterpret_cast<Unknown8004B394Text *>(object)->unknown324[offset+0x80];
  reinterpret_cast<Unknown8004B394Text *>(object)->unknown324[offset+0x80]=0;
  fn_8006B434(reinterpret_cast<Unknown8004B394Text *>(object)->unknown324+offset);
  fn_8006B6CC();
  reinterpret_cast<Unknown8004B394Text *>(object)->unknown324[offset+0x80]=saved;
 }
}
void fn_8004B8A0(Unknown800496E8Owner *object){
 int offset=0;
 while(offset!=-1){object->slotA4(offset);offset=object->slot88(offset);}
}
void fn_8004B914(Unknown800496E8Owner *object){
 int size=object->unknown54->unknown08;
 Unknown800496E8Record record;
 for(int i=0;i<size;++i){
  int item=reinterpret_cast<int *>(object->unknown54->unknown10)[i];
  if(item!=-1){
   const Unknown80042DECResult &result=object->slot6C(item,&record);
   if(result.unknown00!=kFailure__3Gap && record.unknown00!=3 && record.unknown00!=8 && record.unknown00!=2 && record.unknown00!=7) object->slotA4(item);
  }
 }
}
}
#pragma pop

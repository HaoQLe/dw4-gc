#include "unknown8004B394.h"
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8004BF04(void *record){fn_8004C0BC(record);return record;}
void *fn_8004BF34(void *record,const void *other){memcpy(record,other,0x94);return record;}
void *fn_8004BF68(Unknown800496E8Record *record,int a,unsigned int b,int c,int d,const char *e,const char *f,const char *g,const char *h,const char *i,unsigned int j,const char *k){
 fn_8004C0BC(record);
 record->unknown00=a;record->unknown08=b;record->unknown0C=c;record->unknown10=d;
 record->unknown2C=e;record->unknown30=f;record->unknown34=g;record->unknown38=h;
 record->unknown44=i;record->unknown48=j;record->unknown40=k;
 return record;
}
void *fn_8004BFF8(Unknown800496E8Record *record,int a,int b,int c,const char *e,const char *f,const char *g,const char *h,const char *i,unsigned int j){
 fn_8004C0BC(record);
 record->unknown00=13;record->unknown14=a;record->unknown18=b;record->unknown1C=c;
 record->unknown2C=e;record->unknown30=f;record->unknown34=g;record->unknown38=h;
 record->unknown44=i;record->unknown48=j;
 return record;
}
void *fn_8004C080(void *record,int flag){
 if(record && static_cast<short>(flag)>0) fn_800564E8(record);
 return record;
}
void fn_8004C0BC(void *record){memset(record,0,0x94);}
int fn_8004C0E4(void *record){
 unsigned int mask=reinterpret_cast<Unknown800496E8Record *>(record)->unknown50;
 int i;
 for(i=0;i<16;++i){if(!(mask&(3<<(i*2)))) return i;}
 return 0;
}
int fn_8004C11C(void *record,int index){
 if(index<16) return (reinterpret_cast<Unknown800496E8Record *>(record)->unknown50>>(index*2))&3;
 return 0;
}
int fn_8004C140(void *record,int index){
 if(index<16) return reinterpret_cast<int *>(reinterpret_cast<Unknown800496E8Record *>(record)->unknown54)[index];
 return -1;
}
void fn_8004C160(void *record,int index,int value){
 if(index<16){
  Unknown800496E8Record *r=reinterpret_cast<Unknown800496E8Record *>(record);
  int shift=index*2;
  r->unknown50=(1u<<shift)|(r->unknown50&~(3u<<shift));
  reinterpret_cast<int *>(r->unknown54)[index]=value;
 }
}
unsigned int fn_8004C19C(void *record,int index){
 if(index<16) return reinterpret_cast<unsigned int *>(reinterpret_cast<Unknown800496E8Record *>(record)->unknown54)[index];
 return -1;
}
void fn_8004C1BC(void *record,int index,unsigned int value){
 if(index<16){
  Unknown800496E8Record *r=reinterpret_cast<Unknown800496E8Record *>(record);
  int shift=index*2;
  r->unknown50=(2u<<shift)|(r->unknown50&~(3u<<shift));
  reinterpret_cast<unsigned int *>(r->unknown54)[index]=value;
 }
}
const char *fn_8004C1F8(void *record,int index){
 if(index<16) return reinterpret_cast<const char **>(reinterpret_cast<Unknown800496E8Record *>(record)->unknown54)[index];
 return NULL;
}
void fn_8004C218(void *record,int index,const char * value){
 if(index<16){
  Unknown800496E8Record *r=reinterpret_cast<Unknown800496E8Record *>(record);
  int shift=index*2;
  r->unknown50=(3<<shift)|(r->unknown50&~(3u<<shift));
  reinterpret_cast<const char * *>(r->unknown54)[index]=value;
 }
}
void fn_8004C24C(void *record,int index,Unknown8004A41CValue *value){
 if(value && index<16){
  value->unknown00=fn_8004C19C(record,index);
  value->unknown04=fn_8004C19C(record,index+1);
  value->unknown08=reinterpret_cast<const char *>(fn_8004C19C(record,index+2));
 }
}
void fn_8004C2B8(void *record,int index,const Unknown8004A41CValue *value){
 if(value && index<16){
  fn_8004C1BC(record,index,value->unknown00);
  fn_8004C1BC(record,index+1,value->unknown04);
  fn_8004C1BC(record,index+2,reinterpret_cast<unsigned int>(value->unknown08));
 }
}
void fn_8004C324(Unknown8004C324 *object,Unknown8004C324Source *source){
 object->unknown28.adopt(source->unknownC8);
 object->slotAC(source->unknownA0);
 if(!object->unknown18 && !lbl_80562134){
  int result=fn_8006EF84(lbl_80469528,object->unknown20,object->unknown28.value);
  if(result!=1 && result==2) lbl_80562134=1;
 }
 fn_80042A44(source,object->unknown0C,object->unknown18);
}
void fn_8004C430(Unknown8004C324 *object,const char *text){object->unknown1C.adopt(text);}
void fn_8004C4C8(Unknown8004C324 *object,Unknown80042DECValue *value){
 unknown80042DECRetain(value);
 unknown80042DECRelease(reinterpret_cast<Unknown80042DECValue *>(object->unknown18));
 object->unknown18=value;
}
int fn_8004C538(Unknown8004C538 *object,int value){
 Unknown800442F8Reference reference(reinterpret_cast<Unknown80042DECValue *>(fn_8002EBEC(fn_80068430(object))));
 reinterpret_cast<Unknown8004C538Target *>(reference.value)->unknownA0=value;
 reinterpret_cast<Unknown8004C538Target *>(reference.value)->slot74(object->unknown1C);
 if(reinterpret_cast<Unknown8004C538Target *>(reference.value)->unknown08==0){
  const char *prefix=object->unknown28;
  int length=strlen(object->unknown1C);
  int prefixLength=strlen(prefix);
  char *name=fn_800681C4(object,prefixLength+length+strlen(lbl_8055D870)+1);
  strcpy(name,object->unknown28);
  strcat(name,lbl_8055D870);
  strcat(name,object->unknown1C);
  reinterpret_cast<Unknown8004C538Target *>(reference.value)->slot74(name);
  fn_80068390(object,name);
 }
 object->slot5C(fn_80043A68(reference.value,reinterpret_cast<const char *>(object->unknown20)));
 if(!object->unknown18) object->slot5C(fn_80043A68(reference.value,lbl_8055D874));
 return object->unknown18 ? 1 : 0;
}
int fn_8004C6AC(Unknown8004C538 *object,void (*callback)(Unknown8004C538 *)){
 void *table=reinterpret_cast<void **>(_arkCore__Q23Gap4Core)[0x40/4];
 Unknown800442F8Reference value=fn_8006F35C(table,object->unknown1C);
 if(!value.value){
  void *context=fn_80068430(object);
  unknown80042DECRelease(value.value);
  value.value=fn_80032668(context);
  fn_80043BFC(value.value,object->unknown1C);
  fn_8006F404(table,value.value);
 }
 reinterpret_cast<Unknown8004C538Target *>(value.value)->slot64(object);
 if(!object->unknown18) object->slotB0(callback);
 if(!object->unknown18 && callback) callback(object);
 if(object->unknown18){
  Unknown800442F8Reference other(object->slot54(1));
  unknown80042DECRetain(other.value);
  unknown8004B394Drop(other.value);
  fn_80066490(other.value,object->unknown20);
  reinterpret_cast<Unknown8004C538Target *>(other.value)->unknown14=0;
  reinterpret_cast<Unknown8004C538Target *>(other.value)->slot5C(object->unknown18);
  reinterpret_cast<Unknown8004C538Target *>(other.value)->unknown0C=reinterpret_cast<Unknown8004C538Target *>(value.value)->unknown08;
  fn_80069128(value.value,other.value);
  return 1;
 }
 return 0;
}
void fn_8004C924(Unknown8004C924 *object){
 fn_800427A0(object);
 object->unknown10=2;
 object->unknown14=0;
}
void fn_8004C960(Unknown8004C924 *object){
 object->slot5C(NULL);
 fn_800667D4(object);
}
void fn_8004C9A4(Unknown8004C924 *object,Unknown8004C924Source *source){
 object->slot5C(fn_80042A14(reinterpret_cast<void **>(source->unknown18->unknown10)[object->unknown1C],object->unknown20));
 fn_80042A44(source,object->unknown0C,object->unknown18);
}
void fn_8004CA1C(Unknown8004C924 *object,Unknown8004C924Source *source){
 Unknown8004C924Value *value=fn_80042FB8(reinterpret_cast<void **>(source->unknown18->unknown10)[object->unknown20],object->unknown24);
 if(value) fn_80042A44(source,object->unknown0C,value->slot60(reinterpret_cast<void *>(object->unknown1C)));
 else fn_80042A44(source,object->unknown0C,NULL);
}
}
#pragma pop

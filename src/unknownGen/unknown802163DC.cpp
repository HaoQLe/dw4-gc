#include <unknownGen.h>
#include <meta/igMetaObject.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void *fn_800237D0();
void *fn_80024D1C();
void *meta_newMetaObject(void *);
void *fn_8002D0F4();
void *fn_800365B4();
void *fn_80053998(void *,void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void fn_8006588C(void *,void *,void *);
void *fn_800658E4(void *,void *);
UnknownGenFactory *fn_800658F8(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void igDataList_register();
void *igMersenneTwisterRandomNumber_getMeta();
void igObjectRegistryMap_fieldInit();
void igObject_register();
extern char igDataList_vtable[];
extern char igLongStack_className[];
extern char igHistogramBase_className[];
extern char igRandomNumber_className[];
extern char igObjectRegistryMap_className[];
extern char igObjectRegistryMap_vtable[];
extern char igHistogramBase_vtable[];
extern char igLongStack_vtable[];
extern char lbl_804BCE20[];
extern char lbl_80560B70[6];
extern char lbl_80560B78[8];
extern char lbl_80560B80[4];
extern char lbl_80560B8C[4];
extern char lbl_80560B90[4];
extern char lbl_80560B94[4];
extern char lbl_80560B98[8];
extern void *lbl_805621F4;
extern char lbl_805659A8[1];
extern char lbl_805659A9[1];
extern void *igLongStack_meta;
extern char lbl_805659C8[4];
extern void *igHistogramBase_meta;
extern void *igRandomNumber_meta;
extern void *igObjectRegistryMap_meta;
void fn_80216620();
void *igLongStack_getMeta();
void *igLongStack_vtableRead();
void igLongStack_registerNow();
void igLongStack_register();
void *igLongStack_getMetaCall();
void fn_802167DC();
void *igHistogramBase_getMeta();
void *igHistogramBase_vtableRead();
void igHistogramBase_registerNow();
void igHistogramBase_register();
void *igHistogramBase_getMetaCall();
void igHistogramBase_fieldInit();
void *igRandomNumber_getMeta();
void igRandomNumber_registerNow();
void igRandomNumber_register();
void *igRandomNumber_getMetaCall();
void *fn_80216BCC();
void *igMersenneTwisterRandomNumber_getMetaCall();
void *igObjectRegistryMap_getMeta();
void *igObjectRegistryMap_vtableRead();
void igObjectRegistryMap_registerNow();
void igObjectRegistryMap_register();
void *igObjectRegistryMap_getMetaCall();
}
struct UnknownGenObject802166CC_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot802168D4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802168D4(){fn_8006665C(this);}
};
struct UnknownGenObject802168D4 : UnknownGenRoot802168D4 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject802168D4(){unknown00=igHistogramBase_vtable;}
};
struct UnknownGenRoot80216C74 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80216C74(){fn_8006665C(this);}
};
struct UnknownGenObject80216C74 : UnknownGenRoot80216C74 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject80216C74(){unknown00=igObjectRegistryMap_vtable;}
};
extern "C" {
UnknownGenHolder *dtor_802163DC(UnknownGenHolder *object,short flags){
 if(object){
  UnknownGenValue *value=object->unknown00;
  if(value){
   --value->unknown04;
   if(!(reinterpret_cast<volatile unsigned int *>(value)[1]&0x7FFFFF)) fn_80066E1C(value);
  }
  if(flags>0) __dl__FPv(object);
 }
 return object;
}
UnknownGenHolder *fn_80216450(UnknownGenHolder *object,short flags){
 if(object){
  UnknownGenValue *value=object->unknown00;
  if(value){
   --value->unknown04;
   if(!(reinterpret_cast<volatile unsigned int *>(value)[1]&0x7FFFFF)) fn_80066E1C(value);
  }
  if(flags>0) __dl__FPv(object);
 }
 return object;
}
UnknownGenHolder *fn_802164C4(UnknownGenHolder *object,short flags){
 if(object){
  UnknownGenValue *value=object->unknown00;
  if(value){
   --value->unknown04;
   if(!(reinterpret_cast<volatile unsigned int *>(value)[1]&0x7FFFFF)) fn_80066E1C(value);
  }
  if(flags>0) __dl__FPv(object);
 }
 return object;
}
UnknownGenHolder *fn_80216538(UnknownGenHolder *object,short flags){
 if(object){
  UnknownGenValue *value=object->unknown00;
  if(value){
   --value->unknown04;
   if(!(reinterpret_cast<volatile unsigned int *>(value)[1]&0x7FFFFF)) fn_80066E1C(value);
  }
  if(flags>0) __dl__FPv(object);
 }
 return object;
}
UnknownGenHolder *fn_802165AC(UnknownGenHolder *object,short flags){
 if(object){
  UnknownGenValue *value=object->unknown00;
  if(value){
   --value->unknown04;
   if(!(reinterpret_cast<volatile unsigned int *>(value)[1]&0x7FFFFF)) fn_80066E1C(value);
  }
  if(flags>0) __dl__FPv(object);
 }
 return object;
}
void fn_80216620(){
 if((int)*reinterpret_cast<signed char *>((lbl_805659A9+0))==0){
  *reinterpret_cast<unsigned char *>((lbl_805659A8+0))=0;
  *reinterpret_cast<unsigned char *>((lbl_805659A9+0))=1;
 }
 if((void *)(int)*reinterpret_cast<unsigned char *>((lbl_805659A8+0))){
  return;
 }
 *reinterpret_cast<unsigned char *>((lbl_805659A8+0))=1;
}
void *fn_80216654(){
 if(!igLongStack_meta) igLongStack_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igLongStack_meta;
}
void *igLongStack_getMeta(){
 if(!igLongStack_meta || !(reinterpret_cast<unsigned int *>(igLongStack_meta)[0x24/4]&4)) igLongStack_registerNow();
 return igLongStack_meta;
}
void *igLongStack_vtableRead(){
 UnknownGenObject802166CC_0 object;
 fn_8006665C(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_804BCE20;
 object.unknown00=igLongStack_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igLongStack_registerNow(){
 meta_registerNow((int)igLongStack_register);
}
void igLongStack_register(){
 fn_80216620();
 meta_registerClass(0,(int)&igLongStack_meta,(int)igDataList_register,(int)fn_80024D1C,(int)igLongStack_getMetaCall,(int)igLongStack_className,20,(int)igLongStack_vtableRead,(int)fn_802167DC,0,0);
}
void *igLongStack_getMetaCall(){return igLongStack_getMeta();}
void fn_802167DC(){
 void *meta=igLongStack_meta;
 UnknownGenField *field=reinterpret_cast<UnknownGenField *>(fn_800658F8(meta,lbl_80560B70));
 void *type=fn_80053998(reinterpret_cast<void **>(meta)[0x28/4],field);
 field=reinterpret_cast<UnknownGenFactory *>(field)->slot54(1);
 field->unknown3C=fn_8002D0F4();
 field->unknown38=0;
 field->unknown1C=lbl_805659C8;
 fn_8006588C(meta,type,field);
 unknownGenDrop(reinterpret_cast<UnknownGenValue *>(field));
}
void *igHistogramBase_getMeta(){
 if(!igHistogramBase_meta || !(reinterpret_cast<unsigned int *>(igHistogramBase_meta)[0x24/4]&4)) igHistogramBase_registerNow();
 return igHistogramBase_meta;
}
void *igHistogramBase_vtableRead(){
 UnknownGenObject802168D4 object;
 object.unknown00=igHistogramBase_vtable;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igHistogramBase_registerNow(){
 meta_registerNow((int)igHistogramBase_register);
}
void igHistogramBase_register(){
 fn_80216620();
 meta_registerClass(0,(int)&igHistogramBase_meta,(int)igObject_register,(int)fn_800237D0,(int)igHistogramBase_getMetaCall,(int)igHistogramBase_className,12,(int)igHistogramBase_vtableRead,(int)igHistogramBase_fieldInit,0,(int)lbl_80560B78);
}
void *igHistogramBase_getMetaCall(){return igHistogramBase_getMeta();}
void igHistogramBase_fieldInit(){
 void *value0=igHistogramBase_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_80560B80,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 fn_800659C0(value0,lbl_80560B8C,lbl_80560B90,lbl_80560B94,value1);
}
void *fn_80216AA0(){
 if(!igRandomNumber_meta) igRandomNumber_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igRandomNumber_meta;
}
void *igRandomNumber_getMeta(){
 if(!igRandomNumber_meta || !(reinterpret_cast<unsigned int *>(igRandomNumber_meta)[0x24/4]&4)) igRandomNumber_registerNow();
 return igRandomNumber_meta;
}
void igRandomNumber_registerNow(){
 meta_registerNow((int)igRandomNumber_register);
}
void igRandomNumber_register(){
 fn_80216620();
 meta_registerClass(1,(int)&igRandomNumber_meta,(int)igObject_register,(int)fn_800237D0,(int)igRandomNumber_getMetaCall,(int)igRandomNumber_className,8,0,(int)fn_80216BCC,0,0);
}
void *igRandomNumber_getMetaCall(){return igRandomNumber_getMeta();}
void *fn_80216BCC(){
 void *value0=igRandomNumber_meta;
 reinterpret_cast<Meta::igMetaObject *>(value0)->_abstractProxy=(void *)(void *)igMersenneTwisterRandomNumber_getMetaCall;
 return value0;
}
void *igMersenneTwisterRandomNumber_getMetaCall(){return igMersenneTwisterRandomNumber_getMeta();}
void *igObjectRegistryMap_create(void *object){
 igObjectRegistryMap_registerNow();
 return meta_createInstance(igObjectRegistryMap_meta,object);
}
void *igObjectRegistryMap_getMeta(){
 if(!igObjectRegistryMap_meta || !(reinterpret_cast<unsigned int *>(igObjectRegistryMap_meta)[0x24/4]&4)) igObjectRegistryMap_registerNow();
 return igObjectRegistryMap_meta;
}
void *igObjectRegistryMap_vtableRead(){
 UnknownGenObject80216C74 object;
 object.unknown00=igObjectRegistryMap_vtable;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igObjectRegistryMap_registerNow(){
 meta_registerNow((int)igObjectRegistryMap_register);
}
void igObjectRegistryMap_register(){
 fn_80216620();
 meta_registerClass(0,(int)&igObjectRegistryMap_meta,(int)igObject_register,(int)fn_800237D0,(int)igObjectRegistryMap_getMetaCall,(int)igObjectRegistryMap_className,16,(int)igObjectRegistryMap_vtableRead,(int)igObjectRegistryMap_fieldInit,0,(int)lbl_80560B98);
}
void *igObjectRegistryMap_getMetaCall(){return igObjectRegistryMap_getMeta();}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024D1C();
void *fn_80029E64(void *);
void *fn_8002D0F4();
void *fn_800365B4();
void *fn_80053998(void *,void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_8006588C(void *,void *,void *);
void *fn_800658E4(void *,void *);
UnknownGenFactory *fn_800658F8(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800A325C(void *);
void igDataList_register();
void *igMersenneTwisterRandomNumber_getMeta();
void igObjectRegistryMap_fieldInit();
void igObject_register();
extern char lbl_80472FA0[];
extern char lbl_804BA2C8[];
extern char lbl_804BA318[];
extern char lbl_804BA328[];
extern char lbl_804BA348[];
extern char lbl_804BC948[];
extern char lbl_804BCA64[];
extern char lbl_804BCDC0[];
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
extern void *lbl_805659C4;
extern char lbl_805659C8[4];
extern void *lbl_805659DC;
extern void *lbl_805659E4;
extern void *lbl_805659EC;
void fn_80216620();
void *igLongStack_getMeta();
void *igLongStack_vtableRead();
void fn_80216724();
void igLongStack_register();
void *igLongStack_getMetaCall();
void fn_802167DC();
void *igHistogramBase_getMeta();
void *igHistogramBase_vtableRead();
void fn_8021695C();
void igHistogramBase_register();
void *igHistogramBase_getMetaCall();
void igHistogramBase_fieldInit();
void *igRandomNumber_getMeta();
void fn_80216B18();
void igRandomNumber_register();
void *igRandomNumber_getMetaCall();
void *fn_80216BCC();
void *igMersenneTwisterRandomNumber_getMetaCall();
void *igObjectRegistryMap_getMeta();
void *igObjectRegistryMap_vtableRead();
void fn_80216CFC();
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
 inline ~UnknownGenObject802168D4(){unknown00=lbl_804BCA64;}
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
 inline ~UnknownGenObject80216C74(){unknown00=lbl_804BC948;}
};
extern "C" {
UnknownGenHolder *dtor_802163DC(UnknownGenHolder *object,short flags){
 if(object){
  UnknownGenValue *value=object->unknown00;
  if(value){
   --value->unknown04;
   if(!(reinterpret_cast<volatile unsigned int *>(value)[1]&0x7FFFFF)) fn_80066E1C(value);
  }
  if(flags>0) fn_800A325C(object);
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
  if(flags>0) fn_800A325C(object);
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
  if(flags>0) fn_800A325C(object);
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
  if(flags>0) fn_800A325C(object);
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
  if(flags>0) fn_800A325C(object);
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
 if(!lbl_805659C4) lbl_805659C4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805659C4;
}
void *igLongStack_getMeta(){
 if(!lbl_805659C4 || !(reinterpret_cast<unsigned int *>(lbl_805659C4)[0x24/4]&4)) fn_80216724();
 return lbl_805659C4;
}
void *igLongStack_vtableRead(){
 UnknownGenObject802166CC_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_804BCE20;
 object.unknown00=lbl_804BCDC0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80216724(){
 fn_80066188((int)igLongStack_register);
}
void igLongStack_register(){
 fn_80216620();
 fn_80066204(0,(int)&lbl_805659C4,(int)igDataList_register,(int)fn_80024D1C,(int)igLongStack_getMetaCall,(int)lbl_804BA2C8,20,(int)igLongStack_vtableRead,(int)fn_802167DC,0,0);
}
void *igLongStack_getMetaCall(){return igLongStack_getMeta();}
void fn_802167DC(){
 void *meta=lbl_805659C4;
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
 if(!lbl_805659DC || !(reinterpret_cast<unsigned int *>(lbl_805659DC)[0x24/4]&4)) fn_8021695C();
 return lbl_805659DC;
}
void *igHistogramBase_vtableRead(){
 UnknownGenObject802168D4 object;
 object.unknown00=lbl_804BCA64;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8021695C(){
 fn_80066188((int)igHistogramBase_register);
}
void igHistogramBase_register(){
 fn_80216620();
 fn_80066204(0,(int)&lbl_805659DC,(int)igObject_register,(int)fn_800237D0,(int)igHistogramBase_getMetaCall,(int)lbl_804BA318,12,(int)igHistogramBase_vtableRead,(int)igHistogramBase_fieldInit,0,(int)lbl_80560B78);
}
void *igHistogramBase_getMetaCall(){return igHistogramBase_getMeta();}
void igHistogramBase_fieldInit(){
 void *value0=lbl_805659DC;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_80560B80,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 fn_800659C0(value0,lbl_80560B8C,lbl_80560B90,lbl_80560B94,value1);
}
void *fn_80216AA0(){
 if(!lbl_805659E4) lbl_805659E4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805659E4;
}
void *igRandomNumber_getMeta(){
 if(!lbl_805659E4 || !(reinterpret_cast<unsigned int *>(lbl_805659E4)[0x24/4]&4)) fn_80216B18();
 return lbl_805659E4;
}
void fn_80216B18(){
 fn_80066188((int)igRandomNumber_register);
}
void igRandomNumber_register(){
 fn_80216620();
 fn_80066204(1,(int)&lbl_805659E4,(int)igObject_register,(int)fn_800237D0,(int)igRandomNumber_getMetaCall,(int)lbl_804BA328,8,0,(int)fn_80216BCC,0,0);
}
void *igRandomNumber_getMetaCall(){return igRandomNumber_getMeta();}
void *fn_80216BCC(){
 void *value0=lbl_805659E4;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+60)=(void *)igMersenneTwisterRandomNumber_getMetaCall;
 return value0;
}
void *igMersenneTwisterRandomNumber_getMetaCall(){return igMersenneTwisterRandomNumber_getMeta();}
void *fn_80216C00(void *object){
 fn_80216CFC();
 return fn_8006546C(lbl_805659EC,object);
}
void *igObjectRegistryMap_getMeta(){
 if(!lbl_805659EC || !(reinterpret_cast<unsigned int *>(lbl_805659EC)[0x24/4]&4)) fn_80216CFC();
 return lbl_805659EC;
}
void *igObjectRegistryMap_vtableRead(){
 UnknownGenObject80216C74 object;
 object.unknown00=lbl_804BC948;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80216CFC(){
 fn_80066188((int)igObjectRegistryMap_register);
}
void igObjectRegistryMap_register(){
 fn_80216620();
 fn_80066204(0,(int)&lbl_805659EC,(int)igObject_register,(int)fn_800237D0,(int)igObjectRegistryMap_getMetaCall,(int)lbl_804BA348,16,(int)igObjectRegistryMap_vtableRead,(int)igObjectRegistryMap_fieldInit,0,(int)lbl_80560B98);
}
void *igObjectRegistryMap_getMetaCall(){return igObjectRegistryMap_getMeta();}
}
#pragma pop

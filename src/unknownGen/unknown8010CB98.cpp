#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80023FDC();
void *fn_80024180();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800A325C(void *);
void *fn_8010F0F4();
void igGeometryElement_register();
void igNonRefCountedObjectList_register();
void igObjectList_register();
void igObject_register();
void igTextElement_fieldInit();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476DA8[];
extern char lbl_80476E0C[];
extern char lbl_80494624[];
extern char lbl_8049463C[];
extern char lbl_80494648[];
extern char lbl_80494654[];
extern char lbl_80495B3C[];
extern char lbl_80497ED4[];
extern char lbl_80497F38[];
extern char lbl_80497F9C[];
extern char lbl_80498064[];
extern char lbl_804980C8[];
extern char lbl_8055EEB0[8];
extern char lbl_8055EEB8[8];
extern char lbl_8055EEC0[8];
extern char lbl_8055EEC8[7];
extern char lbl_8055EED0[4];
extern char lbl_8055EEDC[4];
extern char lbl_8055EEE0[4];
extern char lbl_8055EEE4[4];
extern void *lbl_805621F4;
extern char lbl_80563570[1];
extern char lbl_80563571[1];
extern void *lbl_80563574;
extern void *lbl_80563578;
extern void *lbl_8056357C;
extern void *lbl_80563584;
extern void *lbl_80563770;
void fn_8010CBD4();
void *igNonRefCountedViewList_getMeta();
void *igNonRefCountedViewList_vtableRead();
void fn_8010CCF0();
void igNonRefCountedViewList_register();
void *igNonRefCountedViewList_getMetaCall();
void *igViewList_getMeta();
void *igViewList_vtableRead();
void fn_8010CE8C();
void igViewList_register();
void *igViewList_getMetaCall();
void *igView_getMeta();
void fn_8010CF7C();
void igView_register();
void *igView_getMetaCall();
void igView_fieldInit();
void *igTextElement_getMeta();
void *igTextElement_vtableRead();
void fn_8010D32C();
void igTextElement_register();
void *igTextElement_getMetaCall();
void *igTextElement_parentMeta();
}
struct UnknownGenObject8010CC80_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8010CE1C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot8010D130 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010D130(){fn_8006665C(this);}
};
struct UnknownGenObject8010D130_0 : UnknownGenRoot8010D130 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[28];
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject8010D130_0(){unknown00=lbl_80497ED4;}
};
struct UnknownGenObject8010D130 : UnknownGenObject8010D130_0 {
 UnknownGenRefMember unknown2C;
 UnknownGenRefMember unknown30;
 UnknownGenString unknown34;
 char unknown38[8];
 inline ~UnknownGenObject8010D130(){unknown00=lbl_80495B3C;}
};
extern "C" {
void *fn_8010CB98(int p0,int p1,int p2,int p3,int p4,int p5){
 if((int)p0!=0){
  if((int)(short)p1>0){
   fn_800A325C((void *)p0);
  }
 }
 return (void *)p0;
}
void fn_8010CBD4(){
 if((int)*reinterpret_cast<signed char *>((lbl_80563571+0))==0){
  *reinterpret_cast<unsigned char *>((lbl_80563570+0))=0;
  *reinterpret_cast<unsigned char *>((lbl_80563571+0))=1;
 }
 if((void *)(int)*reinterpret_cast<unsigned char *>((lbl_80563570+0))){
  return;
 }
 *reinterpret_cast<unsigned char *>((lbl_80563570+0))=1;
}
void *fn_8010CC08(){
 if(!lbl_80563574) lbl_80563574=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563574;
}
void *igNonRefCountedViewList_getMeta(){
 if(!lbl_80563574 || !(reinterpret_cast<unsigned int *>(lbl_80563574)[0x24/4]&4)) fn_8010CCF0();
 return lbl_80563574;
}
void *igNonRefCountedViewList_vtableRead(){
 UnknownGenObject8010CC80_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476DA8;
 object.unknown00=lbl_804980C8;
 object.unknown00=lbl_80498064;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8010CCF0(){
 fn_80066188((int)igNonRefCountedViewList_register);
}
void igNonRefCountedViewList_register(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_80563574,(int)igNonRefCountedObjectList_register,(int)fn_80023FDC,(int)igNonRefCountedViewList_getMetaCall,(int)lbl_80494624,20,(int)igNonRefCountedViewList_vtableRead,0,0,(int)lbl_8055EEB0);
}
void *igNonRefCountedViewList_getMetaCall(){return igNonRefCountedViewList_getMeta();}
void *fn_8010CDA4(){
 if(!lbl_80563578) lbl_80563578=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563578;
}
void *igViewList_getMeta(){
 if(!lbl_80563578 || !(reinterpret_cast<unsigned int *>(lbl_80563578)[0x24/4]&4)) fn_8010CE8C();
 return lbl_80563578;
}
void *igViewList_vtableRead(){
 UnknownGenObject8010CE1C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_80497F9C;
 object.unknown00=lbl_80497F38;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8010CE8C(){
 fn_80066188((int)igViewList_register);
}
void igViewList_register(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_80563578,(int)igObjectList_register,(int)fn_80024180,(int)igViewList_getMetaCall,(int)lbl_8049463C,20,(int)igViewList_vtableRead,0,0,(int)lbl_8055EEB8);
}
void *igViewList_getMetaCall(){return igViewList_getMeta();}
void *igView_getMeta(){
 if(!lbl_8056357C || !(reinterpret_cast<unsigned int *>(lbl_8056357C)[0x24/4]&4)) fn_8010CF7C();
 return lbl_8056357C;
}
void fn_8010CF7C(){
 fn_80066188((int)igView_register);
}
void igView_register(){
 fn_8010CBD4();
 fn_80066204(1,(int)&lbl_8056357C,(int)igObject_register,(int)fn_800237D0,(int)igView_getMetaCall,(int)lbl_8055EEC8,12,0,(int)igView_fieldInit,0,(int)lbl_8055EEC0);
}
void *igView_getMetaCall(){return igView_getMeta();}
void igView_fieldInit(){
 void *value0=lbl_8056357C;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055EED0,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_8010F0F4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 fn_800659C0(value0,lbl_8055EEDC,lbl_8055EEE0,lbl_8055EEE4,value1);
}
void *fn_8010D0B8(){
 if(!lbl_80563584) lbl_80563584=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563584;
}
void *igTextElement_getMeta(){
 if(!lbl_80563584 || !(reinterpret_cast<unsigned int *>(lbl_80563584)[0x24/4]&4)) fn_8010D32C();
 return lbl_80563584;
}
void *igTextElement_vtableRead(){
 UnknownGenObject8010D130 object;
 object.unknown00=lbl_80497ED4;
 object.unknown08.value=0;
 object.unknown28.value=0;
 object.unknown00=lbl_80495B3C;
 object.unknown2C.value=0;
 object.unknown30.value=0;
 object.unknown34.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
UnknownGenHolder *dtor_8010D2B8(UnknownGenHolder *object,short flags){
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
void fn_8010D32C(){
 fn_80066188((int)igTextElement_register);
}
void igTextElement_register(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_80563584,(int)igGeometryElement_register,(int)igTextElement_parentMeta,(int)igTextElement_getMetaCall,(int)lbl_80494654,56,(int)igTextElement_vtableRead,(int)igTextElement_fieldInit,0,(int)lbl_80494648);
}
void *igTextElement_getMetaCall(){return igTextElement_getMeta();}
void *igTextElement_parentMeta(){return lbl_80563770;}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80023FDC();
void *fn_80024180();
void fn_8002907C();
void fn_80029694();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_800A325C(void *);
void fn_8010D3F4();
void *fn_8010F0F4();
void fn_801120FC();
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
void *fn_8010CC44();
void *fn_8010CC80();
void fn_8010CCF0();
void fn_8010CD18();
void *fn_8010CD84();
void *fn_8010CDE0();
void *fn_8010CE1C();
void fn_8010CE8C();
void fn_8010CEB4();
void *fn_8010CF20();
void *fn_8010CF40();
void fn_8010CF7C();
void fn_8010CFA4();
void *fn_8010D010();
void fn_8010D030();
void *fn_8010D0F4();
void *fn_8010D130();
void fn_8010D32C();
void fn_8010D354();
void *fn_8010D3CC();
void *fn_8010D3EC();
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
void *fn_8010CC44(){
 if(!lbl_80563574 || !(reinterpret_cast<unsigned int *>(lbl_80563574)[0x24/4]&4)) fn_8010CCF0();
 return lbl_80563574;
}
void *fn_8010CC80(){
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
 fn_80066188((int)fn_8010CD18);
}
void fn_8010CD18(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_80563574,(int)fn_80029694,(int)fn_80023FDC,(int)fn_8010CD84,(int)lbl_80494624,20,(int)fn_8010CC80,0,0,(int)lbl_8055EEB0);
}
void *fn_8010CD84(){return fn_8010CC44();}
void *fn_8010CDA4(){
 if(!lbl_80563578) lbl_80563578=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563578;
}
void *fn_8010CDE0(){
 if(!lbl_80563578 || !(reinterpret_cast<unsigned int *>(lbl_80563578)[0x24/4]&4)) fn_8010CE8C();
 return lbl_80563578;
}
void *fn_8010CE1C(){
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
 fn_80066188((int)fn_8010CEB4);
}
void fn_8010CEB4(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_80563578,(int)fn_8002907C,(int)fn_80024180,(int)fn_8010CF20,(int)lbl_8049463C,20,(int)fn_8010CE1C,0,0,(int)lbl_8055EEB8);
}
void *fn_8010CF20(){return fn_8010CDE0();}
void *fn_8010CF40(){
 if(!lbl_8056357C || !(reinterpret_cast<unsigned int *>(lbl_8056357C)[0x24/4]&4)) fn_8010CF7C();
 return lbl_8056357C;
}
void fn_8010CF7C(){
 fn_80066188((int)fn_8010CFA4);
}
void fn_8010CFA4(){
 fn_8010CBD4();
 fn_80066204(1,(int)&lbl_8056357C,(int)fn_80066B08,(int)fn_800237D0,(int)fn_8010D010,(int)lbl_8055EEC8,12,0,(int)fn_8010D030,0,(int)lbl_8055EEC0);
}
void *fn_8010D010(){return fn_8010CF40();}
void fn_8010D030(){
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
void *fn_8010D0F4(){
 if(!lbl_80563584 || !(reinterpret_cast<unsigned int *>(lbl_80563584)[0x24/4]&4)) fn_8010D32C();
 return lbl_80563584;
}
void *fn_8010D130(){
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
 fn_80066188((int)fn_8010D354);
}
void fn_8010D354(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_80563584,(int)fn_801120FC,(int)fn_8010D3EC,(int)fn_8010D3CC,(int)lbl_80494654,56,(int)fn_8010D130,(int)fn_8010D3F4,0,(int)lbl_80494648);
}
void *fn_8010D3CC(){return fn_8010D0F4();}
void *fn_8010D3EC(){return lbl_80563770;}
}
#pragma pop

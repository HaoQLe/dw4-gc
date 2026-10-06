#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800A325C(void *);
void fn_8010CBD4();
void fn_8010D3F4();
void fn_801120FC();
extern char lbl_80494648[];
extern char lbl_80494654[];
extern char lbl_80495B3C[];
extern char lbl_80497ED4[];
extern void *lbl_805621F4;
extern void *lbl_80563584;
extern void *lbl_80563770;
void *fn_8010D0F4();
void *fn_8010D130();
void fn_8010D32C();
void fn_8010D354();
void *fn_8010D3CC();
void *fn_8010D3EC();
}
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

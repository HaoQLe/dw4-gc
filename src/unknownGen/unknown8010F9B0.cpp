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
void *fn_8010F4FC();
void fn_8010FD10();
void fn_80112DF0();
extern char lbl_80494B44[];
extern char lbl_80494B60[];
extern char lbl_8049618C[];
extern char lbl_80497724[];
extern void *lbl_805621F4;
extern void *lbl_8056366C;
void *fn_8010F9EC();
void *fn_8010FA28();
void fn_8010FC50();
void fn_8010FC78();
void *fn_8010FCF0();
}
struct UnknownGenRoot8010FA28 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010FA28(){fn_8006665C(this);}
};
struct UnknownGenObject8010FA28 : UnknownGenRoot8010FA28 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 char unknown20[16];
 inline ~UnknownGenObject8010FA28(){unknown00=lbl_8049618C;}
};
extern "C" {
void *fn_8010F9B0(){
 if(!lbl_8056366C) lbl_8056366C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8056366C;
}
void *fn_8010F9EC(){
 if(!lbl_8056366C || !(reinterpret_cast<unsigned int *>(lbl_8056366C)[0x24/4]&4)) fn_8010FC50();
 return lbl_8056366C;
}
void *fn_8010FA28(){
 UnknownGenObject8010FA28 object;
 object.unknown00=lbl_80497724;
 object.unknown00=lbl_8049618C;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
UnknownGenHolder *dtor_8010FBDC(UnknownGenHolder *object,short flags){
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
void fn_8010FC50(){
 fn_80066188((int)fn_8010FC78);
}
void fn_8010FC78(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_8056366C,(int)fn_80112DF0,(int)fn_8010F4FC,(int)fn_8010FCF0,(int)lbl_80494B60,36,(int)fn_8010FA28,(int)fn_8010FD10,0,(int)lbl_80494B44);
}
void *fn_8010FCF0(){return fn_8010F9EC();}
}
#pragma pop

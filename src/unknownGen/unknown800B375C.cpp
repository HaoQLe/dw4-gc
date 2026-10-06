#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800A325C(void *);
void fn_800ABC8C();
void fn_800B3A18();
void fn_800B3F08();
extern char lbl_80478F7C[];
extern char lbl_80478F90[];
extern char lbl_8047BC70[];
extern char lbl_8047E058[];
extern void *lbl_80562734;
extern void *lbl_80562764;
void *fn_800B375C();
void *fn_800B3798();
void fn_800B3950();
void fn_800B3978();
void *fn_800B39F0();
void *fn_800B3A10();
}
struct UnknownGenRoot800B3798 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B3798(){fn_8006665C(this);}
};
struct UnknownGenObject800B3798 : UnknownGenRoot800B3798 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 char unknown10[8];
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 char unknown20[24];
 inline ~UnknownGenObject800B3798(){unknown00=lbl_8047BC70;}
};
extern "C" {
void *fn_800B375C(){
 if(!lbl_80562734 || !(reinterpret_cast<unsigned int *>(lbl_80562734)[0x24/4]&4)) fn_800B3950();
 return lbl_80562734;
}
void *fn_800B3798(){
 UnknownGenObject800B3798 object;
 object.unknown00=lbl_8047E058;
 object.unknown00=lbl_8047BC70;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown18.value=0;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
UnknownGenHolder *dtor_800B38DC(UnknownGenHolder *object,short flags){
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
void fn_800B3950(){
 fn_80066188((int)fn_800B3978);
}
void fn_800B3978(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562734,(int)fn_800B3F08,(int)fn_800B3A10,(int)fn_800B39F0,(int)lbl_80478F90,44,(int)fn_800B3798,(int)fn_800B3A18,0,(int)lbl_80478F7C);
}
void *fn_800B39F0(){return fn_800B375C();}
void *fn_800B3A10(){return lbl_80562764;}
}
#pragma pop

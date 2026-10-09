#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void arkRegister__Q33Gap4Core10igRegistryFv();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_8006665C(void *);
void fn_800A325C(void *);
extern char lbl_80471328[];
extern void *lbl_80561658;
extern void *lbl_805621F4;
}
struct UnknownGenRoot80026B8C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80026B8C(){fn_8006665C(this);}
};
struct UnknownGenObject80026B8C : UnknownGenRoot80026B8C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[4];
 inline ~UnknownGenObject80026B8C(){unknown00=lbl_80471328;}
};
extern "C" {
void *fn_80026ADC(void *object){
 arkRegister__Q33Gap4Core10igRegistryFv();
 return fn_8006546C(lbl_80561658,object);
}
void *fn_80026B14(){
 if(!lbl_80561658) lbl_80561658=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80561658;
}
void *igRegistry_getMeta(){
 if(!lbl_80561658 || !(reinterpret_cast<unsigned int *>(lbl_80561658)[0x24/4]&4)) arkRegister__Q33Gap4Core10igRegistryFv();
 return lbl_80561658;
}
void *igRegistry_vtableRead(){
 UnknownGenObject80026B8C object;
 object.unknown00=lbl_80471328;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
UnknownGenHolder *dtor_80026C8C(UnknownGenHolder *object,short flags){
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
}
#pragma pop

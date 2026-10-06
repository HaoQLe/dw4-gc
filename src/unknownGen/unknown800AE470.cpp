#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800284EC();
void fn_8002EABC();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800A325C(void *);
void fn_800ABC8C();
void fn_800AE6D4();
extern char lbl_80472460[];
extern char lbl_8047650C[];
extern char lbl_80478240[];
extern char lbl_8047AD50[];
extern char lbl_8055DFD8[8];
extern void *lbl_805624FC;
void *fn_800AE470();
void *fn_800AE4AC();
void fn_800AE618();
void fn_800AE640();
void *fn_800AE6B4();
}
struct UnknownGenRoot800AE4AC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800AE4AC(){fn_8006665C(this);}
};
struct UnknownGenObject800AE4AC_0 : UnknownGenRoot800AE4AC {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800AE4AC_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject800AE4AC_1 : UnknownGenObject800AE4AC_0 {
 inline ~UnknownGenObject800AE4AC_1(){unknown00=lbl_80472460;}
};
struct UnknownGenObject800AE4AC : UnknownGenObject800AE4AC_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 char unknown18[8];
 inline ~UnknownGenObject800AE4AC(){unknown00=lbl_8047AD50;}
};
extern "C" {
void *fn_800AE470(){
 if(!lbl_805624FC || !(reinterpret_cast<unsigned int *>(lbl_805624FC)[0x24/4]&4)) fn_800AE618();
 return lbl_805624FC;
}
void *fn_800AE4AC(){
 UnknownGenObject800AE4AC object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472460;
 object.unknown00=lbl_8047AD50;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
UnknownGenHolder *dtor_800AE5A4(UnknownGenHolder *object,short flags){
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
void fn_800AE618(){
 fn_80066188((int)fn_800AE640);
}
void fn_800AE640(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805624FC,(int)fn_8002EABC,(int)fn_800284EC,(int)fn_800AE6B4,(int)lbl_80478240,24,(int)fn_800AE4AC,(int)fn_800AE6D4,0,(int)lbl_8055DFD8);
}
void *fn_800AE6B4(){return fn_800AE470();}
}
#pragma pop

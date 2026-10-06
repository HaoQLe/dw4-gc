#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800A325C(void *);
void fn_8012FC48();
void *fn_801308D0();
void fn_801327DC();
void fn_8013B97C();
void *fn_801A1FE8();
void fn_801A2070();
extern char lbl_8049C08C[];
extern char lbl_8049C0EC[];
extern char lbl_804A2FEC[];
extern char lbl_804A3074[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F560[8];
extern void *lbl_80563B54;
extern void *lbl_80563B58;
void *fn_80132364();
void *fn_801323A0();
void fn_80132490();
void fn_801324B8();
void *fn_80132520();
void *fn_80132540();
void *fn_8013257C();
void fn_80132720();
void fn_80132748();
void *fn_801327BC();
}
struct UnknownGenRoot801323A0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801323A0(){fn_8006665C(this);}
};
struct UnknownGenObject801323A0_0 : UnknownGenRoot801323A0 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject801323A0_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject801323A0 : UnknownGenObject801323A0_0 {
 char unknown28[8];
 inline ~UnknownGenObject801323A0(){unknown00=lbl_804A2FEC;}
};
struct UnknownGenRoot8013257C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013257C(){fn_8006665C(this);}
};
struct UnknownGenObject8013257C_0 : UnknownGenRoot8013257C {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8013257C_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject8013257C : UnknownGenObject8013257C_0 {
 char unknown28[24];
 UnknownGenRefMember unknown40;
 char unknown44[4];
 inline ~UnknownGenObject8013257C(){unknown00=lbl_804A3074;}
};
extern "C" {
void *fn_80132324(){return fn_801A1FE8();}
void fn_80132344(){return fn_801A2070();}
void *fn_80132364(){
 if(!lbl_80563B54 || !(reinterpret_cast<unsigned int *>(lbl_80563B54)[0x24/4]&4)) fn_80132490();
 return lbl_80563B54;
}
void *fn_801323A0(){
 UnknownGenObject801323A0 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A2FEC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80132490(){
 fn_80066188((int)fn_801324B8);
}
void fn_801324B8(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563B54,(int)fn_8013B97C,(int)fn_801308D0,(int)fn_80132520,(int)lbl_8049C08C,40,(int)fn_801323A0,0,0,0);
}
void *fn_80132520(){return fn_80132364();}
void *fn_80132540(){
 if(!lbl_80563B58 || !(reinterpret_cast<unsigned int *>(lbl_80563B58)[0x24/4]&4)) fn_80132720();
 return lbl_80563B58;
}
void *fn_8013257C(){
 UnknownGenObject8013257C object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A3074;
 object.unknown40.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
UnknownGenHolder *fn_801326AC(UnknownGenHolder *object,short flags){
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
void fn_80132720(){
 fn_80066188((int)fn_80132748);
}
void fn_80132748(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563B58,(int)fn_8013B97C,(int)fn_801308D0,(int)fn_801327BC,(int)lbl_8049C0EC,68,(int)fn_8013257C,(int)fn_801327DC,0,(int)lbl_8055F560);
}
void *fn_801327BC(){return fn_80132540();}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800A325C(void *);
void fn_8012FC48();
void *fn_8012FEB0();
void fn_80132C7C();
void fn_8013A878();
extern char lbl_8049BC80[];
extern char lbl_8049C1EC[];
extern char lbl_8049C1FC[];
extern char lbl_804A3108[];
extern char lbl_804A46AC[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern void *lbl_80563B78;
extern void *lbl_80563B7C;
void *fn_8013291C();
void *fn_80132958();
void fn_80132BBC();
void fn_80132BE4();
void *fn_80132C5C();
}
struct UnknownGenRoot80132958 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80132958(){fn_8006665C(this);}
};
struct UnknownGenObject80132958_0 : UnknownGenRoot80132958 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80132958_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80132958_1 : UnknownGenObject80132958_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject80132958_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject80132958 : UnknownGenObject80132958_1 {
 char unknown2C[40];
 UnknownGenRefMember unknown54;
 UnknownGenRefMember unknown58;
 UnknownGenRefMember unknown5C;
 inline ~UnknownGenObject80132958(){unknown00=lbl_804A3108;}
};
extern "C" {
void *fn_801328D0(){
 char *data=lbl_8049BC80;
 if(!lbl_80563B78) lbl_80563B78=fn_800635C8(data+0x45C,data+0x554,data+0x560,0x3);
 return lbl_80563B78;
}
void *fn_8013291C(){
 if(!lbl_80563B7C || !(reinterpret_cast<unsigned int *>(lbl_80563B7C)[0x24/4]&4)) fn_80132BBC();
 return lbl_80563B7C;
}
void *fn_80132958(){
 UnknownGenObject80132958 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A46AC;
 object.unknown28.value=0;
 object.unknown00=lbl_804A3108;
 object.unknown54.value=0;
 object.unknown58.value=0;
 object.unknown5C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
UnknownGenHolder *fn_80132B48(UnknownGenHolder *object,short flags){
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
void fn_80132BBC(){
 fn_80066188((int)fn_80132BE4);
}
void fn_80132BE4(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563B7C,(int)fn_8013A878,(int)fn_8012FEB0,(int)fn_80132C5C,(int)lbl_8049C1FC,96,(int)fn_80132958,(int)fn_80132C7C,0,(int)lbl_8049C1EC);
}
void *fn_80132C5C(){return fn_8013291C();}
}
#pragma pop

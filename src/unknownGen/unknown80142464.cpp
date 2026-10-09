#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void *fn_80026B14();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void *fn_80071694(void *,void *);
void fn_8012FC48();
void *fn_801308D0();
void *fn_8013B680();
void igInterface_register();
void igLockInterface_fieldInit();
void igOptBase_register();
extern char lbl_8049E264[];
extern char lbl_8049E28C[];
extern char lbl_8049E29C[];
extern char lbl_8049E2AC[];
extern char lbl_804A4A04[];
extern char lbl_804A6050[];
extern char lbl_804A60D8[];
extern char lbl_804A6148[];
extern char lbl_804A6460[];
extern char lbl_804AA1C0[];
extern char lbl_804AAF48[];
extern char lbl_8055F968[8];
extern char lbl_8055F970[8];
extern char lbl_8055F978[8];
extern char lbl_8055F980[8];
extern char lbl_8055F988[8];
extern char lbl_8055F990[4];
extern char lbl_8055F994[4];
extern char lbl_8055F998[4];
extern char lbl_8055F99C[4];
extern void *lbl_805621F4;
extern void *lbl_8056407C;
extern void *lbl_80564088;
extern void *lbl_80564090;
void *igMacroOpt_getMeta();
void *igMacroOpt_vtableRead();
void fn_80142608();
void igMacroOpt_register();
void *igMacroOpt_getMetaCall();
void igMacroOpt_fieldInit();
void *igLogInterface_getMeta();
void *igLogInterface_vtableRead();
void fn_80142830();
void igLogInterface_register();
void *igLogInterface_getMetaCall();
void igLogInterface_fieldInit();
void *igLockInterface_getMeta();
void *igLockInterface_vtableRead();
void fn_80142B54();
void igLockInterface_register();
void *igLockInterface_getMetaCall();
}
struct UnknownGenRoot801424A0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801424A0(){fn_8006665C(this);}
};
struct UnknownGenObject801424A0_0 : UnknownGenRoot801424A0 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject801424A0_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject801424A0 : UnknownGenObject801424A0_0 {
 UnknownGenString unknown28;
 UnknownGenRefMember unknown2C;
 char unknown30[8];
 inline ~UnknownGenObject801424A0(){unknown00=lbl_804A6050;}
};
struct UnknownGenObject801427D8_0 {
 void *unknown00;
 char unknown04[36];
};
struct UnknownGenRoot801429C8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801429C8(){fn_8006665C(this);}
};
struct UnknownGenObject801429C8 : UnknownGenRoot801429C8 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 UnknownGenRefMember unknown28;
 char unknown2C[12];
 inline ~UnknownGenObject801429C8(){unknown00=lbl_804A6148;}
};
extern "C" {
void *igMacroOpt_getMeta(){
 if(!lbl_8056407C || !(reinterpret_cast<unsigned int *>(lbl_8056407C)[0x24/4]&4)) fn_80142608();
 return lbl_8056407C;
}
void *igMacroOpt_vtableRead(){
 UnknownGenObject801424A0 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A6050;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80142608(){
 fn_80066188((int)igMacroOpt_register);
}
void igMacroOpt_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_8056407C,(int)igOptBase_register,(int)fn_801308D0,(int)igMacroOpt_getMetaCall,(int)lbl_8049E264,48,(int)igMacroOpt_vtableRead,(int)igMacroOpt_fieldInit,0,(int)lbl_8055F968);
}
void *igMacroOpt_getMetaCall(){return igMacroOpt_getMeta();}
void igMacroOpt_fieldInit(){
 void *value0=lbl_8056407C;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055F970,2);
 void *value2=fn_800658E4(value0,value1);
 fn_80071694(value2,(void *)0);
 void *value3=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value4=fn_80026B14();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+56)=value4;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value3)+52)=1;
 fn_800659C0(value0,lbl_8055F978,lbl_8055F980,lbl_8055F988,value1);
}
void *fn_80142760(){
 if(!lbl_80564088) lbl_80564088=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564088;
}
void *igLogInterface_getMeta(){
 if(!lbl_80564088 || !(reinterpret_cast<unsigned int *>(lbl_80564088)[0x24/4]&4)) fn_80142830();
 return lbl_80564088;
}
void *igLogInterface_vtableRead(){
 UnknownGenObject801427D8_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AA1C0;
 object.unknown00=lbl_804A60D8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80142830(){
 fn_80066188((int)igLogInterface_register);
}
void igLogInterface_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564088,(int)igInterface_register,(int)fn_8013B680,(int)igLogInterface_getMetaCall,(int)lbl_8049E28C,36,(int)igLogInterface_vtableRead,(int)igLogInterface_fieldInit,0,0);
}
void *igLogInterface_getMetaCall(){return igLogInterface_getMeta();}
void igLogInterface_fieldInit(){
 void *value0=lbl_80564088;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055F990,1);
 fn_800659C0(value0,lbl_8055F994,lbl_8055F998,lbl_8055F99C,value1);
}
void *fn_80142950(){
 if(!lbl_80564090) lbl_80564090=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564090;
}
void *igLockInterface_getMeta(){
 if(!lbl_80564090 || !(reinterpret_cast<unsigned int *>(lbl_80564090)[0x24/4]&4)) fn_80142B54();
 return lbl_80564090;
}
void *igLockInterface_vtableRead(){
 UnknownGenObject801429C8 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AA1C0;
 object.unknown00=lbl_804A6148;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
UnknownGenHolder *dtor_80142AE0(UnknownGenHolder *object,short flags){
 if(object){
  UnknownGenValue *value=object->unknown00;
  if(value){
   --value->unknown04;
   if(!(reinterpret_cast<volatile unsigned int *>(value)[1]&0x7FFFFF)) fn_80066E1C(value);
  }
  if(flags>0) __dl__FPv(object);
 }
 return object;
}
void fn_80142B54(){
 fn_80066188((int)igLockInterface_register);
}
void igLockInterface_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564090,(int)igInterface_register,(int)fn_8013B680,(int)igLockInterface_getMetaCall,(int)lbl_8049E2AC,44,(int)igLockInterface_vtableRead,(int)igLockInterface_fieldInit,0,(int)lbl_8049E29C);
}
void *igLockInterface_getMetaCall(){return igLockInterface_getMeta();}
}
#pragma pop

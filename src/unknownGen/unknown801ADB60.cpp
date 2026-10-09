#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void *fn_8011148C();
void fn_801AA6DC();
void fn_801AE468(void *,short);
void fn_801AE970();
void *fn_801C7344();
void igGroup_register();
void igPropertyKey_register();
void igPropertyValue_register();
extern char lbl_8047650C[];
extern char lbl_804ABEB8[];
extern char lbl_804ABED0[];
extern char lbl_804ABEE0[];
extern char lbl_804B36B4[];
extern char lbl_804B3748[];
extern char lbl_804B37AC[];
extern char lbl_804B4038[];
extern char lbl_804B49CC[];
extern char lbl_804B977C[];
extern char lbl_804B97E0[];
extern char lbl_804B983C[];
extern char lbl_805601AC[8];
extern char lbl_805601B4[4];
extern char lbl_805601B8[4];
extern char lbl_805601BC[4];
extern char lbl_805601C0[4];
extern char lbl_805601C4[4];
extern char lbl_805601D0[4];
extern char lbl_805601D4[4];
extern char lbl_805601D8[4];
extern char lbl_805601DC[4];
extern char lbl_805601E0[4];
extern char lbl_805601E4[4];
extern char lbl_805601E8[4];
extern void *lbl_805621F4;
extern void *lbl_805647B0;
extern void *lbl_805647B8;
extern void *lbl_805647C0;
extern void *lbl_805647C8;
extern void *lbl_80564A34;
extern void *lbl_80564A38;
void *igSwitch_getMeta();
void *igSwitch_vtableRead();
void fn_801ADDC8();
void igSwitch_register();
void *igSwitch_getMetaCall();
void igSwitch_fieldInit();
void *igStringValue_getMeta();
void *igStringValue_vtableRead();
void fn_801ADFDC();
void igStringValue_register();
void *igStringValue_getMetaCall();
void *igStringValue_parentMeta();
void igStringValue_fieldInit();
void *igStringKey_getMeta();
void *igStringKey_vtableRead();
void fn_801AE20C();
void igStringKey_register();
void *igStringKey_getMetaCall();
void *igStringKey_parentMeta();
void igStringKey_fieldInit();
}
struct UnknownGenRoot801ADC10 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801ADC10(){fn_8006665C(this);}
};
struct UnknownGenObject801ADC10_0 : UnknownGenRoot801ADC10 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801ADC10_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801ADC10_1 : UnknownGenObject801ADC10_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject801ADC10_1(){unknown00=lbl_804B4038;}
};
struct UnknownGenObject801ADC10_2 : UnknownGenObject801ADC10_1 {
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject801ADC10_2(){unknown00=lbl_804B49CC;}
};
struct UnknownGenObject801ADC10 : UnknownGenObject801ADC10_2 {
 UnknownGenRefMember unknown20;
 char unknown24[12];
 inline ~UnknownGenObject801ADC10(){unknown00=lbl_804B36B4;}
};
struct UnknownGenRoot801ADF48 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801ADF48(){fn_8006665C(this);}
};
struct UnknownGenObject801ADF48 : UnknownGenRoot801ADF48 {
 char unknown04[4];
 UnknownGenString unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject801ADF48(){unknown00=lbl_804B97E0;}
};
struct UnknownGenRoot801AE178 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801AE178(){fn_8006665C(this);}
};
struct UnknownGenObject801AE178 : UnknownGenRoot801AE178 {
 char unknown04[4];
 UnknownGenString unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject801AE178(){unknown00=lbl_804B3748;}
};
struct UnknownGenObject801AE3AC {
 void *unknown00;
 char unknown04[4];
 int unknown08;
 char unknown0C[4];
 int unknown10;
 int unknown14;
 int unknown18;
 int unknown1C;
 int unknown20;
 int unknown24;
 int unknown28;
 int unknown2C;
 int unknown30;
 int unknown34;
 int unknown38;
 int unknown3C;
 int unknown40;
 int unknown44;
 int unknown48;
 char unknown4C[4];
 int unknown50;
 int unknown54;
 int unknown58;
 int unknown5C;
 int unknown60;
 int unknown64;
 int unknown68;
 int unknown6C;
 char unknown70[4];
 int unknown74;
 char unknown78[24];
};
extern "C" {
void *fn_801ADB60(void *object){
 fn_801ADDC8();
 return fn_8006546C(lbl_805647B0,object);
}
void *fn_801ADB98(){
 if(!lbl_805647B0) lbl_805647B0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805647B0;
}
void *igSwitch_getMeta(){
 if(!lbl_805647B0 || !(reinterpret_cast<unsigned int *>(lbl_805647B0)[0x24/4]&4)) fn_801ADDC8();
 return lbl_805647B0;
}
void *igSwitch_vtableRead(){
 UnknownGenObject801ADC10 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804B4038;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=lbl_804B49CC;
 object.unknown1C.value=0;
 object.unknown00=lbl_804B36B4;
 object.unknown20.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801ADDC8(){
 fn_80066188((int)igSwitch_register);
}
void igSwitch_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805647B0,(int)igGroup_register,(int)fn_8011148C,(int)igSwitch_getMetaCall,(int)lbl_804ABEB8,36,(int)igSwitch_vtableRead,(int)igSwitch_fieldInit,0,(int)lbl_805601AC);
}
void *igSwitch_getMetaCall(){return igSwitch_getMeta();}
void igSwitch_fieldInit(){
 void *value0=lbl_805647B0;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_805601B4,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_801C7344();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 fn_800659C0(value0,lbl_805601B8,lbl_805601BC,lbl_805601C0,value1);
}
void *igStringValue_getMeta(){
 if(!lbl_805647B8 || !(reinterpret_cast<unsigned int *>(lbl_805647B8)[0x24/4]&4)) fn_801ADFDC();
 return lbl_805647B8;
}
void *igStringValue_vtableRead(){
 UnknownGenObject801ADF48 object;
 object.unknown00=lbl_804B983C;
 object.unknown00=lbl_804B97E0;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801ADFDC(){
 fn_80066188((int)igStringValue_register);
}
void igStringValue_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805647B8,(int)igPropertyValue_register,(int)igStringValue_parentMeta,(int)igStringValue_getMetaCall,(int)lbl_804ABED0,12,(int)igStringValue_vtableRead,(int)igStringValue_fieldInit,0,0);
}
void *igStringValue_getMetaCall(){return igStringValue_getMeta();}
void *igStringValue_parentMeta(){return lbl_80564A34;}
void igStringValue_fieldInit(){
 void *value0=lbl_805647B8;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_805601C4,1);
 fn_800659C0(value0,lbl_805601D0,lbl_805601D4,lbl_805601D8,value1);
}
void *fn_801AE104(void *object){
 fn_801AE20C();
 return fn_8006546C(lbl_805647C0,object);
}
void *igStringKey_getMeta(){
 if(!lbl_805647C0 || !(reinterpret_cast<unsigned int *>(lbl_805647C0)[0x24/4]&4)) fn_801AE20C();
 return lbl_805647C0;
}
void *igStringKey_vtableRead(){
 UnknownGenObject801AE178 object;
 object.unknown00=lbl_804B977C;
 object.unknown00=lbl_804B3748;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801AE20C(){
 fn_80066188((int)igStringKey_register);
}
void igStringKey_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805647C0,(int)igPropertyKey_register,(int)igStringKey_parentMeta,(int)igStringKey_getMetaCall,(int)lbl_804ABEE0,12,(int)igStringKey_vtableRead,(int)igStringKey_fieldInit,0,0);
}
void *igStringKey_getMetaCall(){return igStringKey_getMeta();}
void *igStringKey_parentMeta(){return lbl_80564A38;}
void igStringKey_fieldInit(){
 void *value0=lbl_805647C0;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_805601DC,1);
 fn_800659C0(value0,lbl_805601E0,lbl_805601E4,lbl_805601E8,value1);
}
void *fn_801AE334(){
 if(!lbl_805647C8) lbl_805647C8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805647C8;
}
void *igSorter_getMeta(){
 if(!lbl_805647C8 || !(reinterpret_cast<unsigned int *>(lbl_805647C8)[0x24/4]&4)) fn_801AE970();
 return lbl_805647C8;
}
void *igSorter_vtableRead(){
 UnknownGenObject801AE3AC object;
 fn_8006665C(&object);
 object.unknown00=lbl_804B37AC;
 object.unknown08=0;
 object.unknown10=0;
 object.unknown14=0;
 object.unknown18=0;
 object.unknown1C=0;
 object.unknown20=0;
 object.unknown24=0;
 object.unknown28=0;
 object.unknown2C=0;
 object.unknown30=0;
 object.unknown34=0;
 object.unknown38=0;
 object.unknown3C=0;
 object.unknown40=0;
 object.unknown44=0;
 object.unknown48=0;
 object.unknown50=0;
 object.unknown54=0;
 object.unknown58=0;
 object.unknown5C=0;
 object.unknown60=0;
 object.unknown64=0;
 object.unknown68=0;
 object.unknown6C=0;
 object.unknown74=0;
 void *result=*reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
 fn_801AE468(&object,-1);
 return result;
}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *fn_80029F84();
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void igNodeUsageObjectDefinition_fieldInit();
void igObjectList_register();
void igObject_register();
void igOptStatistics_register();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8049BD98[];
extern char lbl_8049BDBC[];
extern char lbl_8049BDDC[];
extern char lbl_8049BDF4[];
extern char lbl_804A2E04[];
extern char lbl_804A46AC[];
extern char lbl_804A47D8[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAB9C[];
extern char lbl_804AABF8[];
extern char lbl_804AAC5C[];
extern char lbl_804AAF48[];
extern char lbl_8055F4CC[8];
extern char lbl_8055F4D4[4];
extern char lbl_8055F4D8[4];
extern char lbl_8055F4DC[4];
extern char lbl_8055F4E0[4];
extern char lbl_8055F4E4[8];
extern void *lbl_80563ADC;
extern void *lbl_80563AE4;
extern void *lbl_80563AE8;
extern void *lbl_80563E6C;
void *igStatisticsNodeUsage_getMeta();
void *igStatisticsNodeUsage_vtableRead();
void fn_80130BA0();
void igStatisticsNodeUsage_register();
void *igStatisticsNodeUsage_getMetaCall();
void *igStatisticsNodeUsage_parentMeta();
void igStatisticsNodeUsage_fieldInit();
void *igNodeUsageObjectDefinitionList_getMeta();
void *igNodeUsageObjectDefinitionList_vtableRead();
void fn_80130DC8();
void igNodeUsageObjectDefinitionList_register();
void *igNodeUsageObjectDefinitionList_getMetaCall();
void *igNodeUsageObjectDefinition_getMeta();
void *igNodeUsageObjectDefinition_vtableRead();
void fn_80131060();
void igNodeUsageObjectDefinition_register();
void *igNodeUsageObjectDefinition_getMetaCall();
}
struct UnknownGenRoot80130998 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80130998(){fn_8006665C(this);}
};
struct UnknownGenObject80130998_0 : UnknownGenRoot80130998 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80130998_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80130998_1 : UnknownGenObject80130998_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject80130998_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject80130998_2 : UnknownGenObject80130998_1 {
 UnknownGenString unknown2C;
 char unknown30[16];
 UnknownGenRefMember unknown40;
 inline ~UnknownGenObject80130998_2(){unknown00=lbl_804A47D8;}
};
struct UnknownGenObject80130998 : UnknownGenObject80130998_2 {
 UnknownGenRefMember unknown44;
 char unknown48[8];
 inline ~UnknownGenObject80130998(){unknown00=lbl_804A2E04;}
};
struct UnknownGenObject80130D58_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot80130EF0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80130EF0(){fn_8006665C(this);}
};
struct UnknownGenObject80130EF0 : UnknownGenRoot80130EF0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 char unknown1C[4];
 inline ~UnknownGenObject80130EF0(){unknown00=lbl_804AAB9C;}
};
extern "C" {
void *igStatisticsNodeUsage_getMeta(){
 if(!lbl_80563ADC || !(reinterpret_cast<unsigned int *>(lbl_80563ADC)[0x24/4]&4)) fn_80130BA0();
 return lbl_80563ADC;
}
void *igStatisticsNodeUsage_vtableRead(){
 UnknownGenObject80130998 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A46AC;
 object.unknown28.value=0;
 object.unknown00=lbl_804A47D8;
 object.unknown2C.value=0;
 object.unknown40.value=0;
 object.unknown00=lbl_804A2E04;
 object.unknown44.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80130BA0(){
 fn_80066188((int)igStatisticsNodeUsage_register);
}
void igStatisticsNodeUsage_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563ADC,(int)igOptStatistics_register,(int)igStatisticsNodeUsage_parentMeta,(int)igStatisticsNodeUsage_getMetaCall,(int)lbl_8049BD98,72,(int)igStatisticsNodeUsage_vtableRead,(int)igStatisticsNodeUsage_fieldInit,0,(int)lbl_8055F4CC);
}
void *igStatisticsNodeUsage_getMetaCall(){return igStatisticsNodeUsage_getMeta();}
void *igStatisticsNodeUsage_parentMeta(){return lbl_80563E6C;}
void igStatisticsNodeUsage_fieldInit(){
 void *value0=lbl_80563ADC;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055F4D4,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_80029F84();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_8055F4D8,lbl_8055F4DC,lbl_8055F4E0,value1);
}
void *fn_80130CE4(void *object){
 fn_80130DC8();
 return fn_8006546C(lbl_80563AE4,object);
}
void *igNodeUsageObjectDefinitionList_getMeta(){
 if(!lbl_80563AE4 || !(reinterpret_cast<unsigned int *>(lbl_80563AE4)[0x24/4]&4)) fn_80130DC8();
 return lbl_80563AE4;
}
void *igNodeUsageObjectDefinitionList_vtableRead(){
 UnknownGenObject80130D58_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804AAC5C;
 object.unknown00=lbl_804AABF8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80130DC8(){
 fn_80066188((int)igNodeUsageObjectDefinitionList_register);
}
void igNodeUsageObjectDefinitionList_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563AE4,(int)igObjectList_register,(int)fn_80024180,(int)igNodeUsageObjectDefinitionList_getMetaCall,(int)lbl_8049BDBC,20,(int)igNodeUsageObjectDefinitionList_vtableRead,0,0,(int)lbl_8055F4E4);
}
void *igNodeUsageObjectDefinitionList_getMetaCall(){return igNodeUsageObjectDefinitionList_getMeta();}
void *fn_80130E7C(void *object){
 fn_80131060();
 return fn_8006546C(lbl_80563AE8,object);
}
void *igNodeUsageObjectDefinition_getMeta(){
 if(!lbl_80563AE8 || !(reinterpret_cast<unsigned int *>(lbl_80563AE8)[0x24/4]&4)) fn_80131060();
 return lbl_80563AE8;
}
void *igNodeUsageObjectDefinition_vtableRead(){
 UnknownGenObject80130EF0 object;
 object.unknown00=lbl_804AAB9C;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown18.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80131060(){
 fn_80066188((int)igNodeUsageObjectDefinition_register);
}
void igNodeUsageObjectDefinition_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563AE8,(int)igObject_register,(int)fn_800237D0,(int)igNodeUsageObjectDefinition_getMetaCall,(int)lbl_8049BDF4,28,(int)igNodeUsageObjectDefinition_vtableRead,(int)igNodeUsageObjectDefinition_fieldInit,0,(int)lbl_8049BDDC);
}
void *igNodeUsageObjectDefinition_getMetaCall(){return igNodeUsageObjectDefinition_getMeta();}
}
#pragma pop

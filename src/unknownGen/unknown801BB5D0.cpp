#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void *fn_800B5424();
void *fn_800B58C8();
void *fn_8011148C();
void fn_801AA6DC();
void fn_801BBFC0();
void igGroup_register();
void igNode_register();
extern char lbl_8047650C[];
extern char lbl_804AED50[];
extern char lbl_804AED70[];
extern char lbl_804B4038[];
extern char lbl_804B4354[];
extern char lbl_804B43E8[];
extern char lbl_804B49CC[];
extern char lbl_805604B4[8];
extern char lbl_805604BC[4];
extern char lbl_805604C0[4];
extern char lbl_805604C4[4];
extern char lbl_805604C8[4];
extern char lbl_805604CC[8];
extern char lbl_805604D4[4];
extern char lbl_805604D8[4];
extern char lbl_805604DC[4];
extern char lbl_805604E0[4];
extern void *lbl_805621F4;
extern void *lbl_80564BC0;
extern void *lbl_80564DAC;
extern void *lbl_80564DB4;
extern void *lbl_80564DBC;
void *igLightStateSet_getMeta();
void *igLightStateSet_vtableRead();
void fn_801BB800();
void igLightStateSet_register();
void *igLightStateSet_getMetaCall();
void igLightStateSet_fieldInit();
void *igLightSet_getMeta();
void *igLightSet_vtableRead();
void fn_801BBB34();
void igLightSet_register();
void *igLightSet_getMetaCall();
void *fn_801BBBF0();
void igLightSet_fieldInit();
}
struct UnknownGenRoot801BB648 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801BB648(){fn_8006665C(this);}
};
struct UnknownGenObject801BB648_0 : UnknownGenRoot801BB648 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801BB648_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801BB648_1 : UnknownGenObject801BB648_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject801BB648_1(){unknown00=lbl_804B4038;}
};
struct UnknownGenObject801BB648_2 : UnknownGenObject801BB648_1 {
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject801BB648_2(){unknown00=lbl_804B49CC;}
};
struct UnknownGenObject801BB648 : UnknownGenObject801BB648_2 {
 UnknownGenRefMember unknown20;
 char unknown24[12];
 inline ~UnknownGenObject801BB648(){unknown00=lbl_804B4354;}
};
struct UnknownGenRoot801BB9CC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801BB9CC(){fn_8006665C(this);}
};
struct UnknownGenObject801BB9CC_0 : UnknownGenRoot801BB9CC {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801BB9CC_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801BB9CC_1 : UnknownGenObject801BB9CC_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject801BB9CC_1(){unknown00=lbl_804B4038;}
};
struct UnknownGenObject801BB9CC : UnknownGenObject801BB9CC_1 {
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 char unknown20[8];
 inline ~UnknownGenObject801BB9CC(){unknown00=lbl_804B43E8;}
};
extern "C" {
void *fn_801BB5D0(){
 if(!lbl_80564DAC) lbl_80564DAC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564DAC;
}
void *igLightStateSet_getMeta(){
 if(!lbl_80564DAC || !(reinterpret_cast<unsigned int *>(lbl_80564DAC)[0x24/4]&4)) fn_801BB800();
 return lbl_80564DAC;
}
void *igLightStateSet_vtableRead(){
 UnknownGenObject801BB648 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804B4038;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=lbl_804B49CC;
 object.unknown1C.value=0;
 object.unknown00=lbl_804B4354;
 object.unknown20.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801BB800(){
 fn_80066188((int)igLightStateSet_register);
}
void igLightStateSet_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564DAC,(int)igGroup_register,(int)fn_8011148C,(int)igLightStateSet_getMetaCall,(int)lbl_804AED50,36,(int)igLightStateSet_vtableRead,(int)igLightStateSet_fieldInit,0,(int)lbl_805604B4);
}
void *igLightStateSet_getMetaCall(){return igLightStateSet_getMeta();}
void igLightStateSet_fieldInit(){
 void *value0=lbl_80564DAC;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_805604BC,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_800B5424();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+40)=0;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+39)=2;
 fn_800659C0(value0,lbl_805604C0,lbl_805604C4,lbl_805604C8,value1);
}
void *fn_801BB954(){
 if(!lbl_80564DB4) lbl_80564DB4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564DB4;
}
void *igLightSet_getMeta(){
 if(!lbl_80564DB4 || !(reinterpret_cast<unsigned int *>(lbl_80564DB4)[0x24/4]&4)) fn_801BBB34();
 return lbl_80564DB4;
}
void *igLightSet_vtableRead(){
 UnknownGenObject801BB9CC object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804B4038;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=lbl_804B43E8;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801BBB34(){
 fn_80066188((int)igLightSet_register);
}
void igLightSet_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564DB4,(int)igNode_register,(int)fn_801BBBF0,(int)igLightSet_getMetaCall,(int)lbl_804AED70,32,(int)igLightSet_vtableRead,(int)igLightSet_fieldInit,0,(int)lbl_805604CC);
}
void *igLightSet_getMetaCall(){return igLightSet_getMeta();}
void *fn_801BBBF0(){return lbl_80564BC0;}
void igLightSet_fieldInit(){
 void *value0=lbl_80564DB4;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_805604D4,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_800B58C8();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+40)=0;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+39)=2;
 fn_800659C0(value0,lbl_805604D8,lbl_805604DC,lbl_805604E0,value1);
}
void *fn_801BBC90(){
 if(!lbl_80564DBC) lbl_80564DBC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564DBC;
}
void *igJoint_getMeta(){
 if(!lbl_80564DBC || !(reinterpret_cast<unsigned int *>(lbl_80564DBC)[0x24/4]&4)) fn_801BBFC0();
 return lbl_80564DBC;
}
}
#pragma pop

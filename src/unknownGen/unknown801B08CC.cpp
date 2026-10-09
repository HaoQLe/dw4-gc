#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80023CF4();
void *fn_80024180();
void *fn_800284EC();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80065D94(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void *fn_80202550();
void *fn_80202600();
void igInfo_register();
void igNamedObject_register();
void igObjectList_register();
void igObject_register();
void igShaderFactory_fieldInit();
extern char lbl_80472460[];
extern char lbl_80472FA0[];
extern char lbl_8047650C[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804AAFB8[];
extern char lbl_804AC9C8[];
extern char lbl_804AC9DC[];
extern char lbl_804AC9FC[];
extern char lbl_804ACA10[];
extern char lbl_804ACAA0[];
extern char lbl_804B39E8[];
extern char lbl_804B3A54[];
extern char lbl_804B3AB8[];
extern char lbl_804B9098[];
extern char lbl_804B90FC[];
extern char lbl_80560274[8];
extern char lbl_8056027C[4];
extern char lbl_80560280[4];
extern char lbl_80560284[4];
extern char lbl_80560288[4];
extern char lbl_8056028C[8];
extern char lbl_80560294[8];
extern void *lbl_805621F4;
extern void *lbl_805648D0;
extern void *lbl_805648D4;
extern void *lbl_805648DC;
extern void *lbl_805648E0;
extern void *lbl_805648E4;
extern void *lbl_805648E8;
void *igShaderProcessor_getMeta();
void *igShaderProcessor_vtableRead();
void fn_801B09BC();
void igShaderProcessor_register();
void *igShaderProcessor_getMetaCall();
void *igShaderInfo_getMeta();
void *igShaderInfo_vtableRead();
void fn_801B0BD8();
void igShaderInfo_register();
void *igShaderInfo_getMetaCall();
void igShaderInfo_fieldInit();
void *fn_801B0D2C();
void *fn_801B0D4C();
void *igShaderFunction_getMeta();
void fn_801B0DA8();
void igShaderFunction_register();
void *igShaderFunction_getMetaCall();
void *fn_801B0E54();
void *igShaderFactoryList_getMeta();
void *igShaderFactoryList_vtableRead();
void fn_801B0F3C();
void igShaderFactoryList_register();
void *igShaderFactoryList_getMetaCall();
void *igShaderFactory_getMeta();
void *igShaderFactory_vtableRead();
void fn_801B11CC();
void igShaderFactory_register();
void *igShaderFactory_getMetaCall();
}
struct UnknownGenObject801B097C_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenRoot801B0AE0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801B0AE0(){fn_8006665C(this);}
};
struct UnknownGenObject801B0AE0_0 : UnknownGenRoot801B0AE0 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801B0AE0_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801B0AE0_1 : UnknownGenObject801B0AE0_0 {
 inline ~UnknownGenObject801B0AE0_1(){unknown00=lbl_80472460;}
};
struct UnknownGenObject801B0AE0 : UnknownGenObject801B0AE0_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 char unknown18[8];
 inline ~UnknownGenObject801B0AE0(){unknown00=lbl_804B3A54;}
};
struct UnknownGenObject801B0ECC_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801B10B4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801B10B4(){fn_8006665C(this);}
};
struct UnknownGenObject801B10B4_0 : UnknownGenRoot801B10B4 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801B10B4_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801B10B4 : UnknownGenObject801B10B4_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[4];
 inline ~UnknownGenObject801B10B4(){unknown00=lbl_804B3AB8;}
};
extern "C" {
void *fn_801B08CC(void *object){
 fn_801B09BC();
 return fn_8006546C(lbl_805648D0,object);
}
void *fn_801B0904(){
 if(!lbl_805648D0) lbl_805648D0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805648D0;
}
void *igShaderProcessor_getMeta(){
 if(!lbl_805648D0 || !(reinterpret_cast<unsigned int *>(lbl_805648D0)[0x24/4]&4)) fn_801B09BC();
 return lbl_805648D0;
}
void *igShaderProcessor_vtableRead(){
 UnknownGenObject801B097C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804B39E8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801B09BC(){
 fn_80066188((int)igShaderProcessor_register);
}
void igShaderProcessor_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805648D0,(int)igObject_register,(int)fn_800237D0,(int)igShaderProcessor_getMetaCall,(int)lbl_804AC9C8,8,(int)igShaderProcessor_vtableRead,0,0,0);
}
void *igShaderProcessor_getMetaCall(){return igShaderProcessor_getMeta();}
void *fn_801B0A6C(void *object){
 fn_801B0BD8();
 return fn_8006546C(lbl_805648D4,object);
}
void *igShaderInfo_getMeta(){
 if(!lbl_805648D4 || !(reinterpret_cast<unsigned int *>(lbl_805648D4)[0x24/4]&4)) fn_801B0BD8();
 return lbl_805648D4;
}
void *igShaderInfo_vtableRead(){
 UnknownGenObject801B0AE0 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472460;
 object.unknown00=lbl_804B3A54;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801B0BD8(){
 fn_80066188((int)igShaderInfo_register);
}
void igShaderInfo_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805648D4,(int)igInfo_register,(int)fn_800284EC,(int)igShaderInfo_getMetaCall,(int)lbl_804AC9DC,24,(int)igShaderInfo_vtableRead,(int)igShaderInfo_fieldInit,(int)fn_801B0D2C,(int)lbl_80560274);
}
void *igShaderInfo_getMetaCall(){return igShaderInfo_getMeta();}
void igShaderInfo_fieldInit(){
 void *value0=lbl_805648D4;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8056027C,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_801B0E54();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 fn_800659C0(value0,lbl_80560280,lbl_80560284,lbl_80560288,value1);
 fn_80065D94((void *)fn_801B0D4C);
}
void *fn_801B0D2C(){return fn_80202550();}
void *fn_801B0D4C(){return fn_80202600();}
void *igShaderFunction_getMeta(){
 if(!lbl_805648DC || !(reinterpret_cast<unsigned int *>(lbl_805648DC)[0x24/4]&4)) fn_801B0DA8();
 return lbl_805648DC;
}
void fn_801B0DA8(){
 fn_80066188((int)igShaderFunction_register);
}
void igShaderFunction_register(){
 fn_801AA6DC();
 fn_80066204(1,(int)&lbl_805648DC,(int)igObject_register,(int)fn_800237D0,(int)igShaderFunction_getMetaCall,(int)lbl_804AC9FC,8,0,0,0,0);
}
void *igShaderFunction_getMetaCall(){return igShaderFunction_getMeta();}
void *fn_801B0E54(){
 if(!lbl_805648E0) lbl_805648E0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805648E0;
}
void *igShaderFactoryList_getMeta(){
 if(!lbl_805648E0 || !(reinterpret_cast<unsigned int *>(lbl_805648E0)[0x24/4]&4)) fn_801B0F3C();
 return lbl_805648E0;
}
void *igShaderFactoryList_vtableRead(){
 UnknownGenObject801B0ECC_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B90FC;
 object.unknown00=lbl_804B9098;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801B0F3C(){
 fn_80066188((int)igShaderFactoryList_register);
}
void igShaderFactoryList_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805648E0,(int)igObjectList_register,(int)fn_80024180,(int)igShaderFactoryList_getMetaCall,(int)lbl_804ACA10,20,(int)igShaderFactoryList_vtableRead,0,0,(int)lbl_8056028C);
}
void *igShaderFactoryList_getMetaCall(){return igShaderFactoryList_getMeta();}
void *fn_801B0FF0(){
 char *data=lbl_804AAFB8;
 if(!lbl_805648E4) lbl_805648E4=fn_800635C8(data+0x1AD4,data+0x1AB4,data+0x1AC4,0x4);
 return lbl_805648E4;
}
void *fn_801B103C(){
 if(!lbl_805648E8) lbl_805648E8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805648E8;
}
void *igShaderFactory_getMeta(){
 if(!lbl_805648E8 || !(reinterpret_cast<unsigned int *>(lbl_805648E8)[0x24/4]&4)) fn_801B11CC();
 return lbl_805648E8;
}
void *igShaderFactory_vtableRead(){
 UnknownGenObject801B10B4 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804B3AB8;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801B11CC(){
 fn_80066188((int)igShaderFactory_register);
}
void igShaderFactory_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805648E8,(int)igNamedObject_register,(int)fn_80023CF4,(int)igShaderFactory_getMetaCall,(int)lbl_804ACAA0,24,(int)igShaderFactory_vtableRead,(int)igShaderFactory_fieldInit,0,(int)lbl_80560294);
}
void *igShaderFactory_getMetaCall(){return igShaderFactory_getMeta();}
}
#pragma pop

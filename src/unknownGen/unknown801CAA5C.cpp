#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *fn_800284EC();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void igAnimationDatabase_fieldInit();
void igInfo_register();
void igObjectList_register();
extern char lbl_80472460[];
extern char lbl_80472FA0[];
extern char lbl_8047650C[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804B20C4[];
extern char lbl_804B20DC[];
extern char lbl_804B20F4[];
extern char lbl_804B566C[];
extern char lbl_804B6384[];
extern char lbl_804B63E8[];
extern char lbl_805609A8[8];
extern void *lbl_805621F4;
extern void *lbl_80565464;
extern void *lbl_80565468;
void *igAnimationDatabaseList_getMeta();
void *igAnimationDatabaseList_vtableRead();
void fn_801CAB44();
void igAnimationDatabaseList_register();
void *igAnimationDatabaseList_getMetaCall();
void *igAnimationDatabase_getMeta();
void *igAnimationDatabase_vtableRead();
void fn_801CAE80();
void igAnimationDatabase_register();
void *igAnimationDatabase_getMetaCall();
}
struct UnknownGenObject801CAAD4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801CACA8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801CACA8(){fn_8006665C(this);}
};
struct UnknownGenObject801CACA8_0 : UnknownGenRoot801CACA8 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801CACA8_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801CACA8_1 : UnknownGenObject801CACA8_0 {
 inline ~UnknownGenObject801CACA8_1(){unknown00=lbl_80472460;}
};
struct UnknownGenObject801CACA8 : UnknownGenObject801CACA8_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 char unknown28[8];
 inline ~UnknownGenObject801CACA8(){unknown00=lbl_804B566C;}
};
extern "C" {
void *fn_801CAA5C(){
 if(!lbl_80565464) lbl_80565464=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80565464;
}
void *igAnimationDatabaseList_getMeta(){
 if(!lbl_80565464 || !(reinterpret_cast<unsigned int *>(lbl_80565464)[0x24/4]&4)) fn_801CAB44();
 return lbl_80565464;
}
void *igAnimationDatabaseList_vtableRead(){
 UnknownGenObject801CAAD4_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B63E8;
 object.unknown00=lbl_804B6384;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801CAB44(){
 fn_80066188((int)igAnimationDatabaseList_register);
}
void igAnimationDatabaseList_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80565464,(int)igObjectList_register,(int)fn_80024180,(int)igAnimationDatabaseList_getMetaCall,(int)lbl_804B20C4,20,(int)igAnimationDatabaseList_vtableRead,0,0,(int)lbl_805609A8);
}
void *igAnimationDatabaseList_getMetaCall(){return igAnimationDatabaseList_getMeta();}
void *fn_801CABF8(void *object){
 fn_801CAE80();
 return fn_8006546C(lbl_80565468,object);
}
void *fn_801CAC30(){
 if(!lbl_80565468) lbl_80565468=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80565468;
}
void *igAnimationDatabase_getMeta(){
 if(!lbl_80565468 || !(reinterpret_cast<unsigned int *>(lbl_80565468)[0x24/4]&4)) fn_801CAE80();
 return lbl_80565468;
}
void *igAnimationDatabase_vtableRead(){
 UnknownGenObject801CACA8 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472460;
 object.unknown00=lbl_804B566C;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown1C.value=0;
 object.unknown20.value=0;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801CAE80(){
 fn_80066188((int)igAnimationDatabase_register);
}
void igAnimationDatabase_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80565468,(int)igInfo_register,(int)fn_800284EC,(int)igAnimationDatabase_getMetaCall,(int)lbl_804B20F4,40,(int)igAnimationDatabase_vtableRead,(int)igAnimationDatabase_fieldInit,0,(int)lbl_804B20DC);
}
void *igAnimationDatabase_getMetaCall(){return igAnimationDatabase_getMeta();}
}
#pragma pop

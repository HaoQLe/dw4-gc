#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void *fn_8011148C();
void fn_801AA6DC();
void igGroup_register();
void igTimeSwitch_fieldInit();
extern char lbl_8047650C[];
extern char lbl_804AAFB8[];
extern char lbl_804ABBC4[];
extern char lbl_804B4038[];
extern char lbl_804B49CC[];
extern char lbl_804B9A1C[];
extern char lbl_80560188[8];
extern void *lbl_805621F4;
extern void *lbl_80564740;
extern void *lbl_80564744;
void *igTimeSwitch_getMeta();
void *igTimeSwitch_vtableRead();
void fn_801AD1D8();
void igTimeSwitch_register();
void *igTimeSwitch_getMetaCall();
}
struct UnknownGenRoot801AD020 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801AD020(){fn_8006665C(this);}
};
struct UnknownGenObject801AD020_0 : UnknownGenRoot801AD020 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801AD020_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801AD020_1 : UnknownGenObject801AD020_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject801AD020_1(){unknown00=lbl_804B4038;}
};
struct UnknownGenObject801AD020_2 : UnknownGenObject801AD020_1 {
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject801AD020_2(){unknown00=lbl_804B49CC;}
};
struct UnknownGenObject801AD020 : UnknownGenObject801AD020_2 {
 UnknownGenRefMember unknown20;
 char unknown24[28];
 inline ~UnknownGenObject801AD020(){unknown00=lbl_804B9A1C;}
};
extern "C" {
void *fn_801ACF5C(){
 char *data=lbl_804AAFB8;
 if(!lbl_80564740) lbl_80564740=fn_800635C8(data+0x7A0,data+0xBF4,data+0xC00,0x3);
 return lbl_80564740;
}
void *fn_801ACFA8(){
 if(!lbl_80564744) lbl_80564744=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564744;
}
void *igTimeSwitch_getMeta(){
 if(!lbl_80564744 || !(reinterpret_cast<unsigned int *>(lbl_80564744)[0x24/4]&4)) fn_801AD1D8();
 return lbl_80564744;
}
void *igTimeSwitch_vtableRead(){
 UnknownGenObject801AD020 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804B4038;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=lbl_804B49CC;
 object.unknown1C.value=0;
 object.unknown00=lbl_804B9A1C;
 object.unknown20.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801AD1D8(){
 fn_80066188((int)igTimeSwitch_register);
}
void igTimeSwitch_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564744,(int)igGroup_register,(int)fn_8011148C,(int)igTimeSwitch_getMetaCall,(int)lbl_804ABBC4,56,(int)igTimeSwitch_vtableRead,(int)igTimeSwitch_fieldInit,0,(int)lbl_80560188);
}
void *igTimeSwitch_getMetaCall(){return igTimeSwitch_getMeta();}
}
#pragma pop

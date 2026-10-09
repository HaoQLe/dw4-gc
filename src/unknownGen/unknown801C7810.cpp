#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void *fn_8011148C();
void fn_801AA6DC();
void igBillboard_fieldInit();
void igGroup_register();
extern char lbl_8047650C[];
extern char lbl_804B1540[];
extern char lbl_804B4038[];
extern char lbl_804B49CC[];
extern char lbl_804B6C60[];
extern char lbl_80560850[8];
extern void *lbl_805621F4;
extern void *lbl_805652EC;
void *igBillboard_getMeta();
void *igBillboard_vtableRead();
void fn_801C7A40();
void igBillboard_register();
void *igBillboard_getMetaCall();
}
struct UnknownGenRoot801C7888 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C7888(){fn_8006665C(this);}
};
struct UnknownGenObject801C7888_0 : UnknownGenRoot801C7888 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801C7888_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801C7888_1 : UnknownGenObject801C7888_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject801C7888_1(){unknown00=lbl_804B4038;}
};
struct UnknownGenObject801C7888_2 : UnknownGenObject801C7888_1 {
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject801C7888_2(){unknown00=lbl_804B49CC;}
};
struct UnknownGenObject801C7888 : UnknownGenObject801C7888_2 {
 char unknown20[28];
 UnknownGenRefMember unknown3C;
 inline ~UnknownGenObject801C7888(){unknown00=lbl_804B6C60;}
};
extern "C" {
void *fn_801C7810(){
 if(!lbl_805652EC) lbl_805652EC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805652EC;
}
void *igBillboard_getMeta(){
 if(!lbl_805652EC || !(reinterpret_cast<unsigned int *>(lbl_805652EC)[0x24/4]&4)) fn_801C7A40();
 return lbl_805652EC;
}
void *igBillboard_vtableRead(){
 UnknownGenObject801C7888 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804B4038;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=lbl_804B49CC;
 object.unknown1C.value=0;
 object.unknown00=lbl_804B6C60;
 object.unknown3C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801C7A40(){
 fn_80066188((int)igBillboard_register);
}
void igBillboard_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805652EC,(int)igGroup_register,(int)fn_8011148C,(int)igBillboard_getMetaCall,(int)lbl_804B1540,64,(int)igBillboard_vtableRead,(int)igBillboard_fieldInit,0,(int)lbl_80560850);
}
void *igBillboard_getMetaCall(){return igBillboard_getMeta();}
}
#pragma pop

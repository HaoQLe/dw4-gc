#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_8011148C();
void fn_801AA6DC();
void igGroup_register();
void igTimeSwitch_fieldInit();
extern char igNamedObject_vtable[];
extern char lbl_804AAFB8[];
extern char igTimeSwitch_className[];
extern char igNode_vtable[];
extern char igGroup_vtable[];
extern char igTimeSwitch_vtable[];
extern char lbl_80560188[8];
extern void *lbl_805621F4;
extern void *lbl_80564740;
extern void *igTimeSwitch_meta;
void *igTimeSwitch_getMeta();
void *igTimeSwitch_vtableRead();
void igTimeSwitch_registerNow();
void igTimeSwitch_register();
void *igTimeSwitch_getMetaCall();
}
struct UnknownGenRoot801AD020 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801AD020(){igObject_construct(this);}
};
struct UnknownGenObject801AD020_0 : UnknownGenRoot801AD020 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801AD020_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject801AD020_1 : UnknownGenObject801AD020_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject801AD020_1(){unknown00=igNode_vtable;}
};
struct UnknownGenObject801AD020_2 : UnknownGenObject801AD020_1 {
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject801AD020_2(){unknown00=igGroup_vtable;}
};
struct UnknownGenObject801AD020 : UnknownGenObject801AD020_2 {
 UnknownGenRefMember unknown20;
 char unknown24[28];
 inline ~UnknownGenObject801AD020(){unknown00=igTimeSwitch_vtable;}
};
extern "C" {
void *fn_801ACF5C(){
 char *data=lbl_804AAFB8;
 if(!lbl_80564740) lbl_80564740=fn_800635C8(data+0x7A0,data+0xBF4,data+0xC00,0x3);
 return lbl_80564740;
}
void *fn_801ACFA8(){
 if(!igTimeSwitch_meta) igTimeSwitch_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igTimeSwitch_meta;
}
void *igTimeSwitch_getMeta(){
 if(!igTimeSwitch_meta || !(reinterpret_cast<unsigned int *>(igTimeSwitch_meta)[0x24/4]&4)) igTimeSwitch_registerNow();
 return igTimeSwitch_meta;
}
void *igTimeSwitch_vtableRead(){
 UnknownGenObject801AD020 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igNode_vtable;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=igGroup_vtable;
 object.unknown1C.value=0;
 object.unknown00=igTimeSwitch_vtable;
 object.unknown20.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igTimeSwitch_registerNow(){
 meta_registerNow((int)igTimeSwitch_register);
}
void igTimeSwitch_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igTimeSwitch_meta,(int)igGroup_register,(int)fn_8011148C,(int)igTimeSwitch_getMetaCall,(int)igTimeSwitch_className,56,(int)igTimeSwitch_vtableRead,(int)igTimeSwitch_fieldInit,0,(int)lbl_80560188);
}
void *igTimeSwitch_getMetaCall(){return igTimeSwitch_getMeta();}
}
#pragma pop

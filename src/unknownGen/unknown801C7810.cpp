#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void *fn_8011148C();
void fn_801AA6DC();
void igBillboard_fieldInit();
void igGroup_register();
extern char igNamedObject_vtable[];
extern char igBillboard_className[];
extern char igNode_vtable[];
extern char igGroup_vtable[];
extern char igBillboard_vtable[];
extern char lbl_80560850[8];
extern void *lbl_805621F4;
extern void *igBillboard_meta;
void *igBillboard_getMeta();
void *igBillboard_vtableRead();
void igBillboard_registerNow();
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
 inline ~UnknownGenObject801C7888_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject801C7888_1 : UnknownGenObject801C7888_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject801C7888_1(){unknown00=igNode_vtable;}
};
struct UnknownGenObject801C7888_2 : UnknownGenObject801C7888_1 {
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject801C7888_2(){unknown00=igGroup_vtable;}
};
struct UnknownGenObject801C7888 : UnknownGenObject801C7888_2 {
 char unknown20[28];
 UnknownGenRefMember unknown3C;
 inline ~UnknownGenObject801C7888(){unknown00=igBillboard_vtable;}
};
extern "C" {
void *fn_801C7810(){
 if(!igBillboard_meta) igBillboard_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igBillboard_meta;
}
void *igBillboard_getMeta(){
 if(!igBillboard_meta || !(reinterpret_cast<unsigned int *>(igBillboard_meta)[0x24/4]&4)) igBillboard_registerNow();
 return igBillboard_meta;
}
void *igBillboard_vtableRead(){
 UnknownGenObject801C7888 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igNode_vtable;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=igGroup_vtable;
 object.unknown1C.value=0;
 object.unknown00=igBillboard_vtable;
 object.unknown3C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igBillboard_registerNow(){
 meta_registerNow((int)igBillboard_register);
}
void igBillboard_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igBillboard_meta,(int)igGroup_register,(int)fn_8011148C,(int)igBillboard_getMetaCall,(int)igBillboard_className,64,(int)igBillboard_vtableRead,(int)igBillboard_fieldInit,0,(int)lbl_80560850);
}
void *igBillboard_getMetaCall(){return igBillboard_getMeta();}
}
#pragma pop

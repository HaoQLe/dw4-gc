#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void *fn_801B623C();
void igAttrSet_register();
void igNodeRefResolver_fieldInit();
void *igNodeRefResolver_parentMeta();
void igObjectRefResolver_register();
void *igOverrideAttrSet_getMeta();
void igOverrideAttrSet_vtableRead();
extern char igNamedObject_vtable[];
extern char igObjectRefResolver_vtable[];
extern char igOverrideAttrSet_className[];
extern char igNodeRefResolver_className[];
extern char igNodeRefResolver_vtable[];
extern char lbl_8056038C[8];
extern void *igOverrideAttrSet_meta;
extern void *igNodeRefResolver_meta;
void igOverrideAttrSet_register();
void *igOverrideAttrSet_getMetaCall();
void *igNodeRefResolver_getMeta();
void *igNodeRefResolver_vtableRead();
void igNodeRefResolver_registerNow();
void igNodeRefResolver_register();
void *igNodeRefResolver_getMetaCall();
}
struct UnknownGenRoot801B6AE4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801B6AE4(){fn_8006665C(this);}
};
struct UnknownGenObject801B6AE4_0 : UnknownGenRoot801B6AE4 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801B6AE4_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject801B6AE4_1 : UnknownGenObject801B6AE4_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject801B6AE4_1(){unknown00=igObjectRefResolver_vtable;}
};
struct UnknownGenObject801B6AE4 : UnknownGenObject801B6AE4_1 {
 UnknownGenString unknown14;
 UnknownGenString unknown18;
 UnknownGenRefMember unknown1C;
 char unknown20[16];
 inline ~UnknownGenObject801B6AE4(){unknown00=igNodeRefResolver_vtable;}
};
extern "C" {
void igOverrideAttrSet_registerNow(){
 meta_registerNow((int)igOverrideAttrSet_register);
}
void igOverrideAttrSet_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igOverrideAttrSet_meta,(int)igAttrSet_register,(int)fn_801B623C,(int)igOverrideAttrSet_getMetaCall,(int)igOverrideAttrSet_className,40,(int)igOverrideAttrSet_vtableRead,0,0,0);
}
void *igOverrideAttrSet_getMetaCall(){return igOverrideAttrSet_getMeta();}
void *igNodeRefResolver_getMeta(){
 if(!igNodeRefResolver_meta || !(reinterpret_cast<unsigned int *>(igNodeRefResolver_meta)[0x24/4]&4)) igNodeRefResolver_registerNow();
 return igNodeRefResolver_meta;
}
void *igNodeRefResolver_vtableRead(){
 UnknownGenObject801B6AE4 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igObjectRefResolver_vtable;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=igNodeRefResolver_vtable;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igNodeRefResolver_registerNow(){
 meta_registerNow((int)igNodeRefResolver_register);
}
void igNodeRefResolver_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igNodeRefResolver_meta,(int)igObjectRefResolver_register,(int)igNodeRefResolver_parentMeta,(int)igNodeRefResolver_getMetaCall,(int)igNodeRefResolver_className,40,(int)igNodeRefResolver_vtableRead,(int)igNodeRefResolver_fieldInit,0,(int)lbl_8056038C);
}
void *igNodeRefResolver_getMetaCall(){return igNodeRefResolver_getMeta();}
}
#pragma pop

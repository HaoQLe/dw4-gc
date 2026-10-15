#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void igObjectList_register();
void igObject_register();
void igRegistryValue_fieldInit();
extern char igRegistryValueList_className[];
extern char igRegistryValue_className[];
extern char igDataList_vtable[];
extern char igRegistryValue_vtable[];
extern char igRegistryValueList_vtable[];
extern char lbl_804767E4[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igRegistryValueList_dependencies[8];
extern char igRegistryValue_dependencies[8];
extern void *igRegistryValueList_meta;
extern void *igRegistryValue_meta;
extern void *lbl_805621F4;
void *igRegistryValueList_getMeta();
void *igRegistryValueList_vtableRead();
void igRegistryValueList_arkRegister();
void igRegistryValueList_register();
void *igRegistryValueList_getMetaCall();
void *igRegistryValue_getMeta();
void *igRegistryValue_vtableRead();
void igRegistryValue_arkRegister();
void igRegistryValue_register();
void *igRegistryValue_getMetaCall();
}
struct UnknownGenObject80026F1C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800270B4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800270B4(){igObject_construct(this);}
};
struct UnknownGenObject800270B4 : UnknownGenRoot800270B4 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject800270B4(){unknown00=igRegistryValue_vtable;}
};
extern "C" {
void *fn_80026EA4(){
 if(!igRegistryValueList_meta) igRegistryValueList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igRegistryValueList_meta;
}
}
#pragma pop

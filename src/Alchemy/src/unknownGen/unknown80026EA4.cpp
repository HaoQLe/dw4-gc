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
void fn_8006665C(void *);
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
extern char lbl_8055D140[8];
extern char lbl_8055D148[8];
extern void *igRegistryValueList_meta;
extern void *igRegistryValue_meta;
extern void *lbl_805621F4;
void *igRegistryValueList_getMeta();
void *igRegistryValueList_vtableRead();
void igRegistryValueList_registerNow();
void igRegistryValueList_register();
void *igRegistryValueList_getMetaCall();
void *igRegistryValue_getMeta();
void *igRegistryValue_vtableRead();
void igRegistryValue_registerNow();
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
 inline UnknownGenRoot800270B4(){fn_8006665C(this);}
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
void *igRegistryValueList_getMeta(){
 if(!igRegistryValueList_meta || !(reinterpret_cast<unsigned int *>(igRegistryValueList_meta)[0x24/4]&4)) igRegistryValueList_registerNow();
 return igRegistryValueList_meta;
}
void *igRegistryValueList_vtableRead(){
 UnknownGenObject80026F1C_0 object;
 fn_8006665C(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804767E4;
 object.unknown00=igRegistryValueList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igRegistryValueList_registerNow(){
 meta_registerNow((int)igRegistryValueList_register);
}
void igRegistryValueList_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igRegistryValueList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igRegistryValueList_getMetaCall,(int)igRegistryValueList_className,20,(int)igRegistryValueList_vtableRead,0,0,(int)lbl_8055D140);
}
void *igRegistryValueList_getMetaCall(){return igRegistryValueList_getMeta();}
void *igRegistryValue_create(void *object){
 igRegistryValue_registerNow();
 return meta_createInstance(igRegistryValue_meta,object);
}
void *igRegistryValue_getMeta(){
 if(!igRegistryValue_meta || !(reinterpret_cast<unsigned int *>(igRegistryValue_meta)[0x24/4]&4)) igRegistryValue_registerNow();
 return igRegistryValue_meta;
}
void *igRegistryValue_vtableRead(){
 UnknownGenObject800270B4 object;
 object.unknown00=igRegistryValue_vtable;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igRegistryValue_registerNow(){
 meta_registerNow((int)igRegistryValue_register);
}
void igRegistryValue_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igRegistryValue_meta,(int)igObject_register,(int)fn_800237D0,(int)igRegistryValue_getMetaCall,(int)igRegistryValue_className,20,(int)igRegistryValue_vtableRead,(int)igRegistryValue_fieldInit,0,(int)lbl_8055D148);
}
void *igRegistryValue_getMetaCall(){return igRegistryValue_getMeta();}
}
#pragma pop

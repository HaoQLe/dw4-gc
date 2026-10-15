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
void *igRegistryValue_create(void *object){
 igRegistryValue_arkRegister();
 return meta_createInstance(igRegistryValue_meta,object);
}
void *igRegistryValue_getMeta(){
 if(!igRegistryValue_meta || !(reinterpret_cast<unsigned int *>(igRegistryValue_meta)[0x24/4]&4)) igRegistryValue_arkRegister();
 return igRegistryValue_meta;
}
void *igRegistryValue_vtableRead(){
 UnknownGenObject800270B4 object;
 object.unknown00=igRegistryValue_vtable;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igRegistryValue_arkRegister(){
 meta_registerNow((int)igRegistryValue_register);
}
void igRegistryValue_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igRegistryValue_meta,(int)igObject_register,(int)fn_800237D0,(int)igRegistryValue_getMetaCall,(int)igRegistryValue_className,20,(int)igRegistryValue_vtableRead,(int)igRegistryValue_fieldInit,0,(int)igRegistryValue_dependencies);
}
void *igRegistryValue_getMetaCall(){return igRegistryValue_getMeta();}
}
#pragma pop

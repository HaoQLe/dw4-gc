#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void igLightAttr_fieldInit();
void igObjectList_register();
void igVisualAttribute_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igLightList_className[];
extern char igLightAttr_className[];
extern char igLightAttr_vtable[];
extern char lbl_8047D578[];
extern char igLightList_vtable[];
extern char lbl_8047DC7C[];
extern char lbl_8047E50C[];
extern char igLightList_dependencies[8];
extern char igLightAttr_dependencies[8];
extern void *lbl_805621F4;
extern void *igLightList_meta;
extern void *igLightAttr_meta;
void *igLightList_getMeta();
void *igLightList_vtableRead();
void igLightList_arkRegister();
void igLightList_register();
void *igLightList_getMetaCall();
void *igLightAttr_getMeta();
void *igLightAttr_vtableRead();
void igLightAttr_arkRegister();
void igLightAttr_register();
void *igLightAttr_getMetaCall();
}
struct UnknownGenObject800B5940_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800B5ADC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B5ADC(){igObject_construct(this);}
};
struct UnknownGenObject800B5ADC : UnknownGenRoot800B5ADC {
 char unknown04[136];
 UnknownGenRefMember unknown8C;
 char unknown90[16];
 inline ~UnknownGenObject800B5ADC(){unknown00=igLightAttr_vtable;}
};
extern "C" {
void *fn_800B5A64(){
 if(!igLightAttr_meta) igLightAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igLightAttr_meta;
}
void *igLightAttr_getMeta(){
 if(!igLightAttr_meta || !(reinterpret_cast<unsigned int *>(igLightAttr_meta)[0x24/4]&4)) igLightAttr_arkRegister();
 return igLightAttr_meta;
}
void *igLightAttr_vtableRead(){
 UnknownGenObject800B5ADC object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igLightAttr_vtable;
 object.unknown8C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igLightAttr_arkRegister(){
 meta_registerNow((int)igLightAttr_register);
}
void igLightAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igLightAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igLightAttr_getMetaCall,(int)igLightAttr_className,148,(int)igLightAttr_vtableRead,(int)igLightAttr_fieldInit,0,(int)igLightAttr_dependencies);
}
void *igLightAttr_getMetaCall(){return igLightAttr_getMeta();}
}
#pragma pop

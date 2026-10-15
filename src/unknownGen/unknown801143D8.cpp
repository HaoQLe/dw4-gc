#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8010CBD4();
void *fn_8010DB2C();
void *fn_8010E6DC();
void *igBasicColorChanger_getMeta();
void igBasicColorChanger_vtableRead();
void igBoxAspect_fieldInit();
void igGuiComponentAspect_register();
void igGuiComponent_register();
void igObjectList_register();
void igObject_register();
void igView_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char lbl_80494570[];
extern char igBasicColorChanger_className[];
extern char igColorChanger_className[];
extern char igBoxComponent_className[];
extern char igChildSizeObserverList_className[];
extern char igChildSizeObserver_className[];
extern char igBoxAspect_dependencies[];
extern char igBoxAspect_className[];
extern char lbl_80495AD8[];
extern char lbl_8049652C[];
extern char igGuiComponent_vtable[];
extern char igColorChanger_vtable[];
extern char igChildSizeObserver_vtable[];
extern char igBoxAspect_vtable[];
extern char igChildSizeObserverList_vtable[];
extern char lbl_80496FF8[];
extern char igBoxComponent_vtable[];
extern char igBasicColorChanger_fieldTypes[8];
extern char igBasicColorChanger_fieldNames[8];
extern char igBasicColorChanger_fieldStorage[8];
extern char igBasicColorChanger_fieldOffsets[8];
extern char igChildSizeObserverList_dependencies[8];
extern char igChildSizeObserver_dependencies[8];
extern char igChildSizeObserver_fieldTypes[4];
extern char igChildSizeObserver_fieldNames[4];
extern char igChildSizeObserver_fieldStorage[4];
extern char igChildSizeObserver_fieldOffsets[4];
extern void *lbl_805621F4;
extern void *igGuiComponent_meta;
extern void *igBasicColorChanger_meta;
extern void *igColorChanger_meta;
extern void *igBoxComponent_meta;
extern void *igChildSizeObserverList_meta;
extern void *igChildSizeObserver_meta;
extern void *lbl_80563818;
extern void *igBoxAspect_meta;
void igBasicColorChanger_register();
void *igBasicColorChanger_getMetaCall();
void *igBasicColorChanger_parentMeta();
void igBasicColorChanger_fieldInit();
void *igColorChanger_getMeta();
void *igColorChanger_vtableRead();
void igColorChanger_arkRegister();
void igColorChanger_register();
void *igColorChanger_getMetaCall();
void *igBoxComponent_getMeta();
void *igBoxComponent_vtableRead();
void igBoxComponent_arkRegister();
void igBoxComponent_register();
void *igBoxComponent_getMetaCall();
void *igBoxComponent_parentMeta();
void *igChildSizeObserverList_getMeta();
void *igChildSizeObserverList_vtableRead();
void igChildSizeObserverList_arkRegister();
void igChildSizeObserverList_register();
void *igChildSizeObserverList_getMetaCall();
void *igChildSizeObserver_getMeta();
void *igChildSizeObserver_vtableRead();
void igChildSizeObserver_arkRegister();
void igChildSizeObserver_register();
void *igChildSizeObserver_getMetaCall();
void igChildSizeObserver_fieldInit();
void *fn_80114424();
void *igBoxAspect_getMeta();
void *igBoxAspect_vtableRead();
void igBoxAspect_arkRegister();
void igBoxAspect_register();
void *igBoxAspect_getMetaCall();
}
struct UnknownGenObject80113CD0_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenRoot80113E38 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80113E38(){igObject_construct(this);}
};
struct UnknownGenObject80113E38_0 : UnknownGenRoot80113E38 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 char unknown18[4];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject80113E38_0(){unknown00=igGuiComponent_vtable;}
};
struct UnknownGenObject80113E38 : UnknownGenObject80113E38_0 {
 char unknown20[8];
 inline ~UnknownGenObject80113E38(){unknown00=igBoxComponent_vtable;}
};
struct UnknownGenObject801140B0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80114248_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot8011449C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011449C(){igObject_construct(this);}
};
struct UnknownGenObject8011449C : UnknownGenRoot8011449C {
 char unknown04[40];
 UnknownGenRefMember unknown2C;
 UnknownGenRefMember unknown30;
 char unknown34[12];
 inline ~UnknownGenObject8011449C(){unknown00=igBoxAspect_vtable;}
};
extern "C" {
void *fn_801143D8(){
 char *data=lbl_80494570;
 if(!lbl_80563818) lbl_80563818=fn_800635C8(data+0x1078,data+0x1060,data+0x106C,0x3);
 return lbl_80563818;
}
void *fn_80114424(){
 if(!igBoxAspect_meta) igBoxAspect_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igBoxAspect_meta;
}
void *igBoxAspect_getMeta(){
 if(!igBoxAspect_meta || !(reinterpret_cast<unsigned int *>(igBoxAspect_meta)[0x24/4]&4)) igBoxAspect_arkRegister();
 return igBoxAspect_meta;
}
void *igBoxAspect_vtableRead(){
 UnknownGenObject8011449C object;
 object.unknown00=lbl_80495AD8;
 object.unknown00=lbl_8049652C;
 object.unknown00=igBoxAspect_vtable;
 object.unknown2C.value=0;
 object.unknown30.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igBoxAspect_arkRegister(){
 meta_registerNow((int)igBoxAspect_register);
}
void igBoxAspect_register(){
 fn_8010CBD4();
 meta_registerClass(0,(int)&igBoxAspect_meta,(int)igGuiComponentAspect_register,(int)fn_8010DB2C,(int)igBoxAspect_getMetaCall,(int)igBoxAspect_className,52,(int)igBoxAspect_vtableRead,(int)igBoxAspect_fieldInit,0,(int)igBoxAspect_dependencies);
}
void *igBoxAspect_getMetaCall(){return igBoxAspect_getMeta();}
}
#pragma pop

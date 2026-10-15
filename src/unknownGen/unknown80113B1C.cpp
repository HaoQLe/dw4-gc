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
extern char lbl_804955F4[];
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
extern char lbl_8055F1D0[8];
extern char lbl_8055F1E0[8];
extern char lbl_8055F1E8[8];
extern char lbl_8055F1F0[8];
extern char lbl_8055F1F8[8];
extern char lbl_8055F200[8];
extern char lbl_8055F208[4];
extern char lbl_8055F20C[4];
extern char lbl_8055F210[4];
extern char lbl_8055F214[4];
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
void igColorChanger_registerNow();
void igColorChanger_register();
void *igColorChanger_getMetaCall();
void *igBoxComponent_getMeta();
void *igBoxComponent_vtableRead();
void igBoxComponent_registerNow();
void igBoxComponent_register();
void *igBoxComponent_getMetaCall();
void *igBoxComponent_parentMeta();
void *igChildSizeObserverList_getMeta();
void *igChildSizeObserverList_vtableRead();
void igChildSizeObserverList_registerNow();
void igChildSizeObserverList_register();
void *igChildSizeObserverList_getMetaCall();
void *igChildSizeObserver_getMeta();
void *igChildSizeObserver_vtableRead();
void igChildSizeObserver_registerNow();
void igChildSizeObserver_register();
void *igChildSizeObserver_getMetaCall();
void igChildSizeObserver_fieldInit();
void *fn_80114424();
void *igBoxAspect_getMeta();
void *igBoxAspect_vtableRead();
void igBoxAspect_registerNow();
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
void igBasicColorChanger_registerNow(){
 meta_registerNow((int)igBasicColorChanger_register);
}
void igBasicColorChanger_register(){
 fn_8010CBD4();
 meta_registerClass(0,(int)&igBasicColorChanger_meta,(int)igColorChanger_register,(int)igBasicColorChanger_parentMeta,(int)igBasicColorChanger_getMetaCall,(int)igBasicColorChanger_className,88,(int)igBasicColorChanger_vtableRead,(int)igBasicColorChanger_fieldInit,0,0);
}
void *igBasicColorChanger_getMetaCall(){return igBasicColorChanger_getMeta();}
void *igBasicColorChanger_parentMeta(){return igColorChanger_meta;}
void igBasicColorChanger_fieldInit(){
 void *value0=igBasicColorChanger_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_8055F1D0,2);
 void *value2=meta_field(value0,value1);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+52)=(void *)4;
 meta_setupFields(value0,lbl_8055F1E0,lbl_8055F1E8,lbl_8055F1F0,value1);
}
void *fn_80113C58(){
 if(!igColorChanger_meta) igColorChanger_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igColorChanger_meta;
}
void *igColorChanger_getMeta(){
 if(!igColorChanger_meta || !(reinterpret_cast<unsigned int *>(igColorChanger_meta)[0x24/4]&4)) igColorChanger_registerNow();
 return igColorChanger_meta;
}
void *igColorChanger_vtableRead(){
 UnknownGenObject80113CD0_0 object;
 igObject_construct(&object);
 object.unknown00=igColorChanger_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igColorChanger_registerNow(){
 meta_registerNow((int)igColorChanger_register);
}
void igColorChanger_register(){
 fn_8010CBD4();
 meta_registerClass(0,(int)&igColorChanger_meta,(int)igObject_register,(int)fn_800237D0,(int)igColorChanger_getMetaCall,(int)igColorChanger_className,8,(int)igColorChanger_vtableRead,0,0,0);
}
void *igColorChanger_getMetaCall(){return igColorChanger_getMeta();}
void *fn_80113DC0(){
 if(!igBoxComponent_meta) igBoxComponent_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igBoxComponent_meta;
}
void *igBoxComponent_getMeta(){
 if(!igBoxComponent_meta || !(reinterpret_cast<unsigned int *>(igBoxComponent_meta)[0x24/4]&4)) igBoxComponent_registerNow();
 return igBoxComponent_meta;
}
void *igBoxComponent_vtableRead(){
 UnknownGenObject80113E38 object;
 object.unknown00=igGuiComponent_vtable;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown1C.value=0;
 object.unknown00=igBoxComponent_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igBoxComponent_registerNow(){
 meta_registerNow((int)igBoxComponent_register);
}
void igBoxComponent_register(){
 fn_8010CBD4();
 meta_registerClass(0,(int)&igBoxComponent_meta,(int)igGuiComponent_register,(int)igBoxComponent_parentMeta,(int)igBoxComponent_getMetaCall,(int)igBoxComponent_className,36,(int)igBoxComponent_vtableRead,0,0,0);
}
void *igBoxComponent_getMetaCall(){return igBoxComponent_getMeta();}
void *igBoxComponent_parentMeta(){return igGuiComponent_meta;}
void *fn_80114038(){
 if(!igChildSizeObserverList_meta) igChildSizeObserverList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igChildSizeObserverList_meta;
}
void *igChildSizeObserverList_getMeta(){
 if(!igChildSizeObserverList_meta || !(reinterpret_cast<unsigned int *>(igChildSizeObserverList_meta)[0x24/4]&4)) igChildSizeObserverList_registerNow();
 return igChildSizeObserverList_meta;
}
void *igChildSizeObserverList_vtableRead(){
 UnknownGenObject801140B0_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_80496FF8;
 object.unknown00=igChildSizeObserverList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igChildSizeObserverList_registerNow(){
 meta_registerNow((int)igChildSizeObserverList_register);
}
void igChildSizeObserverList_register(){
 fn_8010CBD4();
 meta_registerClass(0,(int)&igChildSizeObserverList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igChildSizeObserverList_getMetaCall,(int)igChildSizeObserverList_className,20,(int)igChildSizeObserverList_vtableRead,0,0,(int)lbl_8055F1F8);
}
void *igChildSizeObserverList_getMetaCall(){return igChildSizeObserverList_getMeta();}
void *igChildSizeObserver_create(void *object){
 igChildSizeObserver_registerNow();
 return meta_createInstance(igChildSizeObserver_meta,object);
}
void *igChildSizeObserver_getMeta(){
 if(!igChildSizeObserver_meta || !(reinterpret_cast<unsigned int *>(igChildSizeObserver_meta)[0x24/4]&4)) igChildSizeObserver_registerNow();
 return igChildSizeObserver_meta;
}
void *igChildSizeObserver_vtableRead(){
 UnknownGenObject80114248_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_80495AD8;
 object.unknown00=igChildSizeObserver_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igChildSizeObserver_registerNow(){
 meta_registerNow((int)igChildSizeObserver_register);
}
void igChildSizeObserver_register(){
 fn_8010CBD4();
 meta_registerClass(0,(int)&igChildSizeObserver_meta,(int)igView_register,(int)fn_8010E6DC,(int)igChildSizeObserver_getMetaCall,(int)igChildSizeObserver_className,16,(int)igChildSizeObserver_vtableRead,(int)igChildSizeObserver_fieldInit,0,(int)lbl_8055F200);
}
void *igChildSizeObserver_getMetaCall(){return igChildSizeObserver_getMeta();}
void igChildSizeObserver_fieldInit(){
 void *value0=igChildSizeObserver_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_8055F208,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_80114424();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 meta_setupFields(value0,lbl_8055F20C,lbl_8055F210,lbl_8055F214,value1);
}
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
 if(!igBoxAspect_meta || !(reinterpret_cast<unsigned int *>(igBoxAspect_meta)[0x24/4]&4)) igBoxAspect_registerNow();
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
void igBoxAspect_registerNow(){
 meta_registerNow((int)igBoxAspect_register);
}
void igBoxAspect_register(){
 fn_8010CBD4();
 meta_registerClass(0,(int)&igBoxAspect_meta,(int)igGuiComponentAspect_register,(int)fn_8010DB2C,(int)igBoxAspect_getMetaCall,(int)igBoxAspect_className,52,(int)igBoxAspect_vtableRead,(int)igBoxAspect_fieldInit,0,(int)lbl_804955F4);
}
void *igBoxAspect_getMetaCall(){return igBoxAspect_getMeta();}
}
#pragma pop

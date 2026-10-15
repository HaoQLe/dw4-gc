#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_800CE788();
void fn_8010CBD4();
void igDependencyOrderedList_register();
void igObjectList_register();
void igObject_register();
void igRadioGroup_fieldInit();
void igView_register();
extern char igDataList_vtable[];
extern char igDependencyOrderedList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igClearRenderer_className[];
extern char igRendererOrderedList_className[];
extern char igRenderer_className[];
extern char igOnOffValueObserverList_className[];
extern char igOnOffValueObserver_className[];
extern char igRadioGroupSelectedObserver_className[];
extern char lbl_80494918[];
extern char igRadioGroup_className[];
extern char lbl_80495AD8[];
extern char igClearRenderer_vtable[];
extern char igOnOffValueObserver_vtable[];
extern char igRadioGroupSelectedObserver_vtable[];
extern char igRadioGroup_vtable[];
extern char igOnOffValueObserverList_vtable[];
extern char lbl_80497A5C[];
extern char igRendererOrderedList_vtable[];
extern char lbl_80497BE4[];
extern char lbl_80497C9C[];
extern char lbl_8055EF4C[4];
extern char lbl_8055EF50[4];
extern char lbl_8055EF54[4];
extern char lbl_8055EF58[4];
extern char lbl_8055EF5C[8];
extern char lbl_8055EF64[8];
extern char lbl_8055EF6C[4];
extern char lbl_8055EF70[4];
extern char lbl_8055EF74[4];
extern char lbl_8055EF78[4];
extern char lbl_8055EF7C[8];
extern char lbl_8055EF84[8];
extern char lbl_8055EF8C[4];
extern char lbl_8055EF98[4];
extern char lbl_8055EF9C[4];
extern char lbl_8055EFA0[4];
extern char lbl_8055EFA4[8];
extern char lbl_8055EFAC[4];
extern char lbl_8055EFB0[4];
extern char lbl_8055EFB4[4];
extern char lbl_8055EFB8[4];
extern void *igDependencyOrderedList_meta;
extern void *lbl_805621F4;
extern void *igView_meta;
extern void *igClearRenderer_meta;
extern void *igRendererOrderedList_meta;
extern void *igRenderer_meta;
extern void *igOnOffValueObserverList_meta;
extern void *igOnOffValueObserver_meta;
extern void *igRadioGroupSelectedObserver_meta;
extern void *igRadioGroup_meta;
void *igClearRenderer_getMeta();
void *igClearRenderer_vtableRead();
void igClearRenderer_registerNow();
void igClearRenderer_register();
void *igClearRenderer_getMetaCall();
void *fn_8010DF8C();
void igClearRenderer_fieldInit();
void *igRendererOrderedList_getMeta();
void *igRendererOrderedList_vtableRead();
void igRendererOrderedList_registerNow();
void igRendererOrderedList_register();
void *igRendererOrderedList_getMetaCall();
void *fn_8010E280();
void *igRenderer_getMeta();
void igRenderer_registerNow();
void igRenderer_register();
void *igRenderer_getMetaCall();
void igRenderer_fieldInit();
void *igOnOffValueObserverList_getMeta();
void *igOnOffValueObserverList_vtableRead();
void igOnOffValueObserverList_registerNow();
void igOnOffValueObserverList_register();
void *igOnOffValueObserverList_getMetaCall();
void *igOnOffValueObserver_getMeta();
void *igOnOffValueObserver_vtableRead();
void igOnOffValueObserver_registerNow();
void igOnOffValueObserver_register();
void *igOnOffValueObserver_getMetaCall();
void *fn_8010E6DC();
void igOnOffValueObserver_fieldInit();
void *igRadioGroupSelectedObserver_getMeta();
void *igRadioGroupSelectedObserver_vtableRead();
void igRadioGroupSelectedObserver_registerNow();
void igRadioGroupSelectedObserver_register();
void *igRadioGroupSelectedObserver_getMetaCall();
void igRadioGroupSelectedObserver_fieldInit();
void *fn_8010E974();
void *igRadioGroup_getMeta();
void *igRadioGroup_vtableRead();
void igRadioGroup_registerNow();
void igRadioGroup_register();
void *igRadioGroup_getMetaCall();
}
struct UnknownGenRoot8010DE3C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010DE3C(){igObject_construct(this);}
};
struct UnknownGenObject8010DE3C_0 : UnknownGenRoot8010DE3C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8010DE3C_0(){unknown00=lbl_80497C9C;}
};
struct UnknownGenObject8010DE3C : UnknownGenObject8010DE3C_0 {
 char unknown0C[4];
 inline ~UnknownGenObject8010DE3C(){unknown00=igClearRenderer_vtable;}
};
struct UnknownGenRoot8010E074 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010E074(){igObject_construct(this);}
};
struct UnknownGenObject8010E074_0 : UnknownGenRoot8010E074 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject8010E074_0(){unknown00=igDependencyOrderedList_vtable;}
};
struct UnknownGenObject8010E074_1 : UnknownGenObject8010E074_0 {
 inline ~UnknownGenObject8010E074_1(){unknown00=lbl_80497BE4;}
};
struct UnknownGenObject8010E074 : UnknownGenObject8010E074_1 {
 char unknown18[16];
 inline ~UnknownGenObject8010E074(){unknown00=igRendererOrderedList_vtable;}
};
struct UnknownGenObject8010E474_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8010E5D4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8010E7E4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot8010E9EC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010E9EC(){igObject_construct(this);}
};
struct UnknownGenObject8010E9EC : UnknownGenRoot8010E9EC {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[20];
 inline ~UnknownGenObject8010E9EC(){unknown00=igRadioGroup_vtable;}
};
extern "C" {
void *fn_8010DDC4(){
 if(!igClearRenderer_meta) igClearRenderer_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igClearRenderer_meta;
}
void *igClearRenderer_getMeta(){
 if(!igClearRenderer_meta || !(reinterpret_cast<unsigned int *>(igClearRenderer_meta)[0x24/4]&4)) igClearRenderer_registerNow();
 return igClearRenderer_meta;
}
void *igClearRenderer_vtableRead(){
 UnknownGenObject8010DE3C object;
 object.unknown00=lbl_80497C9C;
 object.unknown08.value=0;
 object.unknown00=igClearRenderer_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igClearRenderer_registerNow(){
 meta_registerNow((int)igClearRenderer_register);
}
void igClearRenderer_register(){
 fn_8010CBD4();
 meta_registerClass(0,(int)&igClearRenderer_meta,(int)igRenderer_register,(int)fn_8010DF8C,(int)igClearRenderer_getMetaCall,(int)igClearRenderer_className,16,(int)igClearRenderer_vtableRead,(int)igClearRenderer_fieldInit,0,0);
}
void *igClearRenderer_getMetaCall(){return igClearRenderer_getMeta();}
void *fn_8010DF8C(){return igRenderer_meta;}
void igClearRenderer_fieldInit(){
 void *value0=igClearRenderer_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_8055EF4C,1);
 meta_setupFields(value0,lbl_8055EF50,lbl_8055EF54,lbl_8055EF58,value1);
}
void *fn_8010DFFC(){
 if(!igRendererOrderedList_meta) igRendererOrderedList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igRendererOrderedList_meta;
}
void *igRendererOrderedList_getMeta(){
 if(!igRendererOrderedList_meta || !(reinterpret_cast<unsigned int *>(igRendererOrderedList_meta)[0x24/4]&4)) igRendererOrderedList_registerNow();
 return igRendererOrderedList_meta;
}
void *igRendererOrderedList_vtableRead(){
 UnknownGenObject8010E074 object;
 object.unknown00=igDependencyOrderedList_vtable;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown00=lbl_80497BE4;
 object.unknown00=igRendererOrderedList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igRendererOrderedList_registerNow(){
 meta_registerNow((int)igRendererOrderedList_register);
}
void igRendererOrderedList_register(){
 fn_8010CBD4();
 meta_registerClass(0,(int)&igRendererOrderedList_meta,(int)igDependencyOrderedList_register,(int)fn_8010E280,(int)igRendererOrderedList_getMetaCall,(int)igRendererOrderedList_className,28,(int)igRendererOrderedList_vtableRead,0,0,(int)lbl_8055EF5C);
}
void *igRendererOrderedList_getMetaCall(){return igRendererOrderedList_getMeta();}
void *fn_8010E280(){return igDependencyOrderedList_meta;}
void *igRenderer_getMeta(){
 if(!igRenderer_meta || !(reinterpret_cast<unsigned int *>(igRenderer_meta)[0x24/4]&4)) igRenderer_registerNow();
 return igRenderer_meta;
}
void igRenderer_registerNow(){
 meta_registerNow((int)igRenderer_register);
}
void igRenderer_register(){
 fn_8010CBD4();
 meta_registerClass(1,(int)&igRenderer_meta,(int)igObject_register,(int)fn_800237D0,(int)igRenderer_getMetaCall,(int)igRenderer_className,12,0,(int)igRenderer_fieldInit,0,(int)lbl_8055EF64);
}
void *igRenderer_getMetaCall(){return igRenderer_getMeta();}
void igRenderer_fieldInit(){
 void *value0=igRenderer_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_8055EF6C,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_800CE788();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,lbl_8055EF70,lbl_8055EF74,lbl_8055EF78,value1);
}
void *fn_8010E3FC(){
 if(!igOnOffValueObserverList_meta) igOnOffValueObserverList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igOnOffValueObserverList_meta;
}
void *igOnOffValueObserverList_getMeta(){
 if(!igOnOffValueObserverList_meta || !(reinterpret_cast<unsigned int *>(igOnOffValueObserverList_meta)[0x24/4]&4)) igOnOffValueObserverList_registerNow();
 return igOnOffValueObserverList_meta;
}
void *igOnOffValueObserverList_vtableRead(){
 UnknownGenObject8010E474_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_80497A5C;
 object.unknown00=igOnOffValueObserverList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igOnOffValueObserverList_registerNow(){
 meta_registerNow((int)igOnOffValueObserverList_register);
}
void igOnOffValueObserverList_register(){
 fn_8010CBD4();
 meta_registerClass(0,(int)&igOnOffValueObserverList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igOnOffValueObserverList_getMetaCall,(int)igOnOffValueObserverList_className,20,(int)igOnOffValueObserverList_vtableRead,0,0,(int)lbl_8055EF7C);
}
void *igOnOffValueObserverList_getMetaCall(){return igOnOffValueObserverList_getMeta();}
void *igOnOffValueObserver_getMeta(){
 if(!igOnOffValueObserver_meta || !(reinterpret_cast<unsigned int *>(igOnOffValueObserver_meta)[0x24/4]&4)) igOnOffValueObserver_registerNow();
 return igOnOffValueObserver_meta;
}
void *igOnOffValueObserver_vtableRead(){
 UnknownGenObject8010E5D4_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_80495AD8;
 object.unknown00=igOnOffValueObserver_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igOnOffValueObserver_registerNow(){
 meta_registerNow((int)igOnOffValueObserver_register);
}
void igOnOffValueObserver_register(){
 fn_8010CBD4();
 meta_registerClass(0,(int)&igOnOffValueObserver_meta,(int)igView_register,(int)fn_8010E6DC,(int)igOnOffValueObserver_getMetaCall,(int)igOnOffValueObserver_className,16,(int)igOnOffValueObserver_vtableRead,(int)igOnOffValueObserver_fieldInit,0,(int)lbl_8055EF84);
}
void *igOnOffValueObserver_getMetaCall(){return igOnOffValueObserver_getMeta();}
void *fn_8010E6DC(){return igView_meta;}
void igOnOffValueObserver_fieldInit(){
 void *value0=igOnOffValueObserver_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_8055EF8C,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_8010E974();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 meta_setupFields(value0,lbl_8055EF98,lbl_8055EF9C,lbl_8055EFA0,value1);
}
void *fn_8010E76C(){
 if(!igRadioGroupSelectedObserver_meta) igRadioGroupSelectedObserver_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igRadioGroupSelectedObserver_meta;
}
void *igRadioGroupSelectedObserver_getMeta(){
 if(!igRadioGroupSelectedObserver_meta || !(reinterpret_cast<unsigned int *>(igRadioGroupSelectedObserver_meta)[0x24/4]&4)) igRadioGroupSelectedObserver_registerNow();
 return igRadioGroupSelectedObserver_meta;
}
void *igRadioGroupSelectedObserver_vtableRead(){
 UnknownGenObject8010E7E4_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_80495AD8;
 object.unknown00=igRadioGroupSelectedObserver_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igRadioGroupSelectedObserver_registerNow(){
 meta_registerNow((int)igRadioGroupSelectedObserver_register);
}
void igRadioGroupSelectedObserver_register(){
 fn_8010CBD4();
 meta_registerClass(0,(int)&igRadioGroupSelectedObserver_meta,(int)igView_register,(int)fn_8010E6DC,(int)igRadioGroupSelectedObserver_getMetaCall,(int)igRadioGroupSelectedObserver_className,16,(int)igRadioGroupSelectedObserver_vtableRead,(int)igRadioGroupSelectedObserver_fieldInit,0,(int)lbl_8055EFA4);
}
void *igRadioGroupSelectedObserver_getMetaCall(){return igRadioGroupSelectedObserver_getMeta();}
void igRadioGroupSelectedObserver_fieldInit(){
 void *value0=igRadioGroupSelectedObserver_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_8055EFAC,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_8010E974();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 meta_setupFields(value0,lbl_8055EFB0,lbl_8055EFB4,lbl_8055EFB8,value1);
}
void *fn_8010E974(){
 if(!igRadioGroup_meta) igRadioGroup_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igRadioGroup_meta;
}
void *igRadioGroup_getMeta(){
 if(!igRadioGroup_meta || !(reinterpret_cast<unsigned int *>(igRadioGroup_meta)[0x24/4]&4)) igRadioGroup_registerNow();
 return igRadioGroup_meta;
}
void *igRadioGroup_vtableRead(){
 UnknownGenObject8010E9EC object;
 object.unknown00=igRadioGroup_vtable;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igRadioGroup_registerNow(){
 meta_registerNow((int)igRadioGroup_register);
}
void igRadioGroup_register(){
 fn_8010CBD4();
 meta_registerClass(0,(int)&igRadioGroup_meta,(int)igObject_register,(int)fn_800237D0,(int)igRadioGroup_getMetaCall,(int)igRadioGroup_className,32,(int)igRadioGroup_vtableRead,(int)igRadioGroup_fieldInit,0,(int)lbl_80494918);
}
void *igRadioGroup_getMetaCall(){return igRadioGroup_getMeta();}
}
#pragma pop

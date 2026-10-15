#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80075AC4(void *,int);
void fn_8012FC48();
void *fn_8012FEB0();
void *fn_8013BA10();
void igBase_register();
void igIterateObject_fieldInit();
void igObjectList_register();
void igObject_register();
void igOptVisitObject_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igListenerListList_className[];
extern char igListenerList_className[];
extern char igListenerBase_className[];
extern char igLimitActorBlendPalettes_className[];
extern char igIterator_className[];
extern char lbl_8049E460[];
extern char igIterateObject_className[];
extern char lbl_804A46AC[];
extern char lbl_804A4A04[];
extern char igLimitActorBlendPalettes_vtable[];
extern char lbl_804A6460[];
extern char igIterateObject_vtable[];
extern char lbl_804A9C44[];
extern char igListenerList_vtable[];
extern char lbl_804A9D04[];
extern char igListenerListList_vtable[];
extern char lbl_804A9DCC[];
extern char igListenerBase_vtable[];
extern char lbl_804AAF48[];
extern char lbl_8055F9B0[8];
extern char lbl_8055F9B8[8];
extern char lbl_8055F9C0[4];
extern char lbl_8055F9C4[4];
extern char lbl_8055F9C8[4];
extern char lbl_8055F9CC[4];
extern void *lbl_805621F4;
extern void *igListenerListList_meta;
extern void *igListenerList_meta;
extern void *igListenerBase_meta;
extern void *igLimitActorBlendPalettes_meta;
extern void *igIterator_meta;
extern void *igIterateObject_meta;
void *igListenerListList_getMeta();
void *igListenerListList_vtableRead();
void igListenerListList_registerNow();
void igListenerListList_register();
void *igListenerListList_getMetaCall();
void *igListenerList_getMeta();
void *igListenerList_vtableRead();
void igListenerList_registerNow();
void igListenerList_register();
void *igListenerList_getMetaCall();
void *igListenerBase_getMeta();
void *igListenerBase_vtableRead();
void igListenerBase_registerNow();
void igListenerBase_register();
void *igListenerBase_getMetaCall();
void *igLimitActorBlendPalettes_getMeta();
void *igLimitActorBlendPalettes_vtableRead();
void igLimitActorBlendPalettes_registerNow();
void igLimitActorBlendPalettes_register();
void *igLimitActorBlendPalettes_getMetaCall();
void igLimitActorBlendPalettes_fieldInit();
void *igIterator_getMeta();
void igIterator_registerNow();
void igIterator_register();
void *igIterator_getMetaCall();
void *igIterateObject_getMeta();
void *igIterateObject_vtableRead();
void igIterateObject_registerNow();
void igIterateObject_register();
void *igIterateObject_getMetaCall();
void *fn_80143FCC();
}
struct UnknownGenObject80143584_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject801436E4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80143844_0 {
 void *unknown00;
 char unknown04[36];
};
struct UnknownGenRoot80143988 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80143988(){fn_8006665C(this);}
};
struct UnknownGenObject80143988_0 : UnknownGenRoot80143988 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80143988_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80143988_1 : UnknownGenObject80143988_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject80143988_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject80143988 : UnknownGenObject80143988_1 {
 char unknown2C[12];
 inline ~UnknownGenObject80143988(){unknown00=igLimitActorBlendPalettes_vtable;}
};
struct UnknownGenRoot80143D58 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80143D58(){fn_8006665C(this);}
};
struct UnknownGenObject80143D58 : UnknownGenRoot80143D58 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenString unknown0C;
 char unknown10[4];
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 UnknownGenRefMember unknown20;
 char unknown24[12];
 inline ~UnknownGenObject80143D58(){unknown00=igIterateObject_vtable;}
};
extern "C" {
void *fn_8014350C(){
 if(!igListenerListList_meta) igListenerListList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igListenerListList_meta;
}
void *igListenerListList_getMeta(){
 if(!igListenerListList_meta || !(reinterpret_cast<unsigned int *>(igListenerListList_meta)[0x24/4]&4)) igListenerListList_registerNow();
 return igListenerListList_meta;
}
void *igListenerListList_vtableRead(){
 UnknownGenObject80143584_0 object;
 fn_8006665C(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804A9DCC;
 object.unknown00=igListenerListList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igListenerListList_registerNow(){
 meta_registerNow((int)igListenerListList_register);
}
void igListenerListList_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igListenerListList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igListenerListList_getMetaCall,(int)igListenerListList_className,20,(int)igListenerListList_vtableRead,0,0,(int)lbl_8055F9B0);
}
void *igListenerListList_getMetaCall(){return igListenerListList_getMeta();}
void *igListenerList_getMeta(){
 if(!igListenerList_meta || !(reinterpret_cast<unsigned int *>(igListenerList_meta)[0x24/4]&4)) igListenerList_registerNow();
 return igListenerList_meta;
}
void *igListenerList_vtableRead(){
 UnknownGenObject801436E4_0 object;
 fn_8006665C(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804A9D04;
 object.unknown00=igListenerList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igListenerList_registerNow(){
 meta_registerNow((int)igListenerList_register);
}
void igListenerList_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igListenerList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igListenerList_getMetaCall,(int)igListenerList_className,20,(int)igListenerList_vtableRead,0,0,(int)lbl_8055F9B8);
}
void *igListenerList_getMetaCall(){return igListenerList_getMeta();}
void *igListenerBase_getMeta(){
 if(!igListenerBase_meta || !(reinterpret_cast<unsigned int *>(igListenerBase_meta)[0x24/4]&4)) igListenerBase_registerNow();
 return igListenerBase_meta;
}
void *igListenerBase_vtableRead(){
 UnknownGenObject80143844_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=igListenerBase_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igListenerBase_registerNow(){
 meta_registerNow((int)igListenerBase_register);
}
void igListenerBase_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igListenerBase_meta,(int)igBase_register,(int)fn_8013BA10,(int)igListenerBase_getMetaCall,(int)igListenerBase_className,32,(int)igListenerBase_vtableRead,0,0,0);
}
void *igListenerBase_getMetaCall(){return igListenerBase_getMeta();}
void *igLimitActorBlendPalettes_getMeta(){
 if(!igLimitActorBlendPalettes_meta || !(reinterpret_cast<unsigned int *>(igLimitActorBlendPalettes_meta)[0x24/4]&4)) igLimitActorBlendPalettes_registerNow();
 return igLimitActorBlendPalettes_meta;
}
void *igLimitActorBlendPalettes_vtableRead(){
 UnknownGenObject80143988 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A46AC;
 object.unknown28.value=0;
 object.unknown00=igLimitActorBlendPalettes_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igLimitActorBlendPalettes_registerNow(){
 meta_registerNow((int)igLimitActorBlendPalettes_register);
}
void igLimitActorBlendPalettes_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igLimitActorBlendPalettes_meta,(int)igOptVisitObject_register,(int)fn_8012FEB0,(int)igLimitActorBlendPalettes_getMetaCall,(int)igLimitActorBlendPalettes_className,48,(int)igLimitActorBlendPalettes_vtableRead,(int)igLimitActorBlendPalettes_fieldInit,0,0);
}
void *igLimitActorBlendPalettes_getMetaCall(){return igLimitActorBlendPalettes_getMeta();}
void igLimitActorBlendPalettes_fieldInit(){
 void *value0=igLimitActorBlendPalettes_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055F9C0,1);
 void *value2=fn_800658E4(value0,value1);
 fn_80075AC4(value2,16);
 fn_800659C0(value0,lbl_8055F9C4,lbl_8055F9C8,lbl_8055F9CC,value1);
}
void *igIterator_getMeta(){
 if(!igIterator_meta || !(reinterpret_cast<unsigned int *>(igIterator_meta)[0x24/4]&4)) igIterator_registerNow();
 return igIterator_meta;
}
void igIterator_registerNow(){
 meta_registerNow((int)igIterator_register);
}
void igIterator_register(){
 fn_8012FC48();
 meta_registerClass(1,(int)&igIterator_meta,(int)igObject_register,(int)fn_800237D0,(int)igIterator_getMetaCall,(int)igIterator_className,8,0,0,0,0);
}
void *igIterator_getMetaCall(){return igIterator_getMeta();}
void *igIterateObject_create(void *object){
 igIterateObject_registerNow();
 return meta_createInstance(igIterateObject_meta,object);
}
void *igIterateObject_getMeta(){
 if(!igIterateObject_meta || !(reinterpret_cast<unsigned int *>(igIterateObject_meta)[0x24/4]&4)) igIterateObject_registerNow();
 return igIterateObject_meta;
}
void *igIterateObject_vtableRead(){
 UnknownGenObject80143D58 object;
 object.unknown00=lbl_804A9C44;
 object.unknown00=igIterateObject_vtable;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown1C.value=0;
 object.unknown20.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igIterateObject_registerNow(){
 meta_registerNow((int)igIterateObject_register);
}
void igIterateObject_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igIterateObject_meta,(int)igIterator_register,(int)fn_80143FCC,(int)igIterateObject_getMetaCall,(int)igIterateObject_className,36,(int)igIterateObject_vtableRead,(int)igIterateObject_fieldInit,0,(int)lbl_8049E460);
}
void *igIterateObject_getMetaCall(){return igIterateObject_getMeta();}
void *fn_80143FCC(){return igIterator_meta;}
}
#pragma pop

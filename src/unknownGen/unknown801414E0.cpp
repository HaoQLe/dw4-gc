#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
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
void fn_8012FC48();
void *fn_8012FEB0();
void *fn_801308D0();
void *fn_8013B2B0();
void *fn_8013B680();
void *fn_8013BA10();
void igBase_register();
void igInterface_register();
void igInterfaced_register();
void igMacrotextureStrip_fieldInit();
void igObjectList_register();
void igOptBase_register();
void igOptVisitObject_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igMessageManager_className[];
extern char igMessageInterface_className[];
extern char igMessageListList_className[];
extern char igMessageList_className[];
extern char igMessageBase_className[];
extern char igMergeIGB_className[];
extern char igManager_className[];
extern char igMacrotextureStrip_className[];
extern char lbl_804A46AC[];
extern char lbl_804A4A04[];
extern char igMessageInterface_vtable[];
extern char igMergeIGB_vtable[];
extern char igMacrotextureStrip_vtable[];
extern char lbl_804A6460[];
extern char igMessageList_vtable[];
extern char lbl_804A9FC8[];
extern char igMessageListList_vtable[];
extern char lbl_804AA090[];
extern char igMessageManager_vtable[];
extern char igInterface_vtable[];
extern char igManager_vtable[];
extern char igMessageBase_vtable[];
extern char lbl_804AAF48[];
extern char igMessageInterface_dependencies[8];
extern char igMessageInterface_fieldTypes[4];
extern char igMessageInterface_fieldNames[4];
extern char igMessageInterface_fieldStorage[4];
extern char igMessageInterface_fieldOffsets[4];
extern char igMessageListList_dependencies[8];
extern char igMessageList_dependencies[8];
extern char igMergeIGB_fieldTypes[4];
extern char igMergeIGB_fieldNames[4];
extern char igMergeIGB_fieldStorage[4];
extern char igMergeIGB_fieldOffsets[4];
extern void *lbl_805621F4;
extern void *igMessageManager_meta;
extern void *igMessageInterface_meta;
extern void *igMessageListList_meta;
extern void *igMessageList_meta;
extern void *igMessageBase_meta;
extern void *igMergeIGB_meta;
extern void *igManager_meta;
extern void *igMacrotextureStrip_meta;
extern void *igInterfaced_meta;
void *igMessageManager_getMeta();
void *igMessageManager_vtableRead();
void igMessageManager_arkRegister();
void igMessageManager_register();
void *igMessageManager_getMetaCall();
void *igMessageInterface_getMeta();
void *igMessageInterface_vtableRead();
void igMessageInterface_arkRegister();
void igMessageInterface_register();
void *igMessageInterface_getMetaCall();
void igMessageInterface_fieldInit();
void *igMessageListList_getMeta();
void *igMessageListList_vtableRead();
void igMessageListList_arkRegister();
void igMessageListList_register();
void *igMessageListList_getMetaCall();
void *fn_80141A1C();
void *igMessageList_getMeta();
void *igMessageList_vtableRead();
void igMessageList_arkRegister();
void igMessageList_register();
void *igMessageList_getMetaCall();
void *igMessageBase_getMeta();
void *igMessageBase_vtableRead();
void igMessageBase_arkRegister();
void igMessageBase_register();
void *igMessageBase_getMetaCall();
void *igMergeIGB_getMeta();
void *igMergeIGB_vtableRead();
void igMergeIGB_arkRegister();
void igMergeIGB_register();
void *igMergeIGB_getMetaCall();
void igMergeIGB_fieldInit();
void *igManager_getMeta();
void *igManager_vtableRead();
void igManager_arkRegister();
void igManager_register();
void *igManager_getMetaCall();
void *fn_801420C0();
void *igMacrotextureStrip_getMeta();
void *igMacrotextureStrip_vtableRead();
void igMacrotextureStrip_arkRegister();
void igMacrotextureStrip_register();
void *igMacrotextureStrip_getMetaCall();
}
struct UnknownGenObject80141558_0 {
 void *unknown00;
 char unknown04[36];
};
struct UnknownGenRoot801416D8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801416D8(){igObject_construct(this);}
};
struct UnknownGenObject801416D8 : UnknownGenRoot801416D8 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 char unknown24[12];
 inline ~UnknownGenObject801416D8(){unknown00=igMessageInterface_vtable;}
};
struct UnknownGenObject801418F8_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80141A94_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80141BF4_0 {
 void *unknown00;
 char unknown04[36];
};
struct UnknownGenRoot80141D38 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80141D38(){igObject_construct(this);}
};
struct UnknownGenObject80141D38_0 : UnknownGenRoot80141D38 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80141D38_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80141D38 : UnknownGenObject80141D38_0 {
 UnknownGenString unknown28;
 char unknown2C[12];
 inline ~UnknownGenObject80141D38(){unknown00=igMergeIGB_vtable;}
};
struct UnknownGenObject80141FC4_0 {
 void *unknown00;
 char unknown04[36];
};
struct UnknownGenRoot80142104 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80142104(){igObject_construct(this);}
};
struct UnknownGenObject80142104_0 : UnknownGenRoot80142104 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80142104_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80142104_1 : UnknownGenObject80142104_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject80142104_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject80142104 : UnknownGenObject80142104_1 {
 UnknownGenString unknown2C;
 UnknownGenString unknown30;
 char unknown34[4];
 UnknownGenString unknown38;
 char unknown3C[20];
 inline ~UnknownGenObject80142104(){unknown00=igMacrotextureStrip_vtable;}
};
extern "C" {
void *fn_801414E0(){
 if(!igMessageManager_meta) igMessageManager_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igMessageManager_meta;
}
void *igMessageManager_getMeta(){
 if(!igMessageManager_meta || !(reinterpret_cast<unsigned int *>(igMessageManager_meta)[0x24/4]&4)) igMessageManager_arkRegister();
 return igMessageManager_meta;
}
void *igMessageManager_vtableRead(){
 UnknownGenObject80141558_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_804A6460;
 object.unknown00=igManager_vtable;
 object.unknown00=igMessageManager_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igMessageManager_arkRegister(){
 meta_registerNow((int)igMessageManager_register);
}
void igMessageManager_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igMessageManager_meta,(int)igManager_register,(int)fn_8013B2B0,(int)igMessageManager_getMetaCall,(int)igMessageManager_className,32,(int)igMessageManager_vtableRead,0,0,0);
}
void *igMessageManager_getMetaCall(){return igMessageManager_getMeta();}
void *fn_80141660(){
 if(!igMessageInterface_meta) igMessageInterface_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igMessageInterface_meta;
}
void *igMessageInterface_getMeta(){
 if(!igMessageInterface_meta || !(reinterpret_cast<unsigned int *>(igMessageInterface_meta)[0x24/4]&4)) igMessageInterface_arkRegister();
 return igMessageInterface_meta;
}
void *igMessageInterface_vtableRead(){
 UnknownGenObject801416D8 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=igInterface_vtable;
 object.unknown00=igMessageInterface_vtable;
 object.unknown20.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igMessageInterface_arkRegister(){
 meta_registerNow((int)igMessageInterface_register);
}
void igMessageInterface_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igMessageInterface_meta,(int)igInterface_register,(int)fn_8013B680,(int)igMessageInterface_getMetaCall,(int)igMessageInterface_className,36,(int)igMessageInterface_vtableRead,(int)igMessageInterface_fieldInit,0,(int)igMessageInterface_dependencies);
}
void *igMessageInterface_getMetaCall(){return igMessageInterface_getMeta();}
void igMessageInterface_fieldInit(){
 void *value0=igMessageInterface_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igMessageInterface_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_80141A1C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 meta_setupFields(value0,igMessageInterface_fieldNames,igMessageInterface_fieldStorage,igMessageInterface_fieldOffsets,value1);
}
void *igMessageListList_getMeta(){
 if(!igMessageListList_meta || !(reinterpret_cast<unsigned int *>(igMessageListList_meta)[0x24/4]&4)) igMessageListList_arkRegister();
 return igMessageListList_meta;
}
void *igMessageListList_vtableRead(){
 UnknownGenObject801418F8_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804AA090;
 object.unknown00=igMessageListList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igMessageListList_arkRegister(){
 meta_registerNow((int)igMessageListList_register);
}
void igMessageListList_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igMessageListList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igMessageListList_getMetaCall,(int)igMessageListList_className,20,(int)igMessageListList_vtableRead,0,0,(int)igMessageListList_dependencies);
}
void *igMessageListList_getMetaCall(){return igMessageListList_getMeta();}
void *fn_80141A1C(){
 if(!igMessageList_meta) igMessageList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igMessageList_meta;
}
void *igMessageList_getMeta(){
 if(!igMessageList_meta || !(reinterpret_cast<unsigned int *>(igMessageList_meta)[0x24/4]&4)) igMessageList_arkRegister();
 return igMessageList_meta;
}
void *igMessageList_vtableRead(){
 UnknownGenObject80141A94_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804A9FC8;
 object.unknown00=igMessageList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igMessageList_arkRegister(){
 meta_registerNow((int)igMessageList_register);
}
void igMessageList_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igMessageList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igMessageList_getMetaCall,(int)igMessageList_className,20,(int)igMessageList_vtableRead,0,0,(int)igMessageList_dependencies);
}
void *igMessageList_getMetaCall(){return igMessageList_getMeta();}
void *igMessageBase_getMeta(){
 if(!igMessageBase_meta || !(reinterpret_cast<unsigned int *>(igMessageBase_meta)[0x24/4]&4)) igMessageBase_arkRegister();
 return igMessageBase_meta;
}
void *igMessageBase_vtableRead(){
 UnknownGenObject80141BF4_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=igMessageBase_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igMessageBase_arkRegister(){
 meta_registerNow((int)igMessageBase_register);
}
void igMessageBase_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igMessageBase_meta,(int)igBase_register,(int)fn_8013BA10,(int)igMessageBase_getMetaCall,(int)igMessageBase_className,32,(int)igMessageBase_vtableRead,0,0,0);
}
void *igMessageBase_getMetaCall(){return igMessageBase_getMeta();}
void *igMergeIGB_getMeta(){
 if(!igMergeIGB_meta || !(reinterpret_cast<unsigned int *>(igMergeIGB_meta)[0x24/4]&4)) igMergeIGB_arkRegister();
 return igMergeIGB_meta;
}
void *igMergeIGB_vtableRead(){
 UnknownGenObject80141D38 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=igMergeIGB_vtable;
 object.unknown28.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igMergeIGB_arkRegister(){
 meta_registerNow((int)igMergeIGB_register);
}
void igMergeIGB_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igMergeIGB_meta,(int)igOptBase_register,(int)fn_801308D0,(int)igMergeIGB_getMetaCall,(int)igMergeIGB_className,44,(int)igMergeIGB_vtableRead,(int)igMergeIGB_fieldInit,0,0);
}
void *igMergeIGB_getMetaCall(){return igMergeIGB_getMeta();}
void igMergeIGB_fieldInit(){
 void *value0=igMergeIGB_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igMergeIGB_fieldTypes,1);
 meta_setupFields(value0,igMergeIGB_fieldNames,igMergeIGB_fieldStorage,igMergeIGB_fieldOffsets,value1);
}
void *igManager_getMeta(){
 if(!igManager_meta || !(reinterpret_cast<unsigned int *>(igManager_meta)[0x24/4]&4)) igManager_arkRegister();
 return igManager_meta;
}
void *igManager_vtableRead(){
 UnknownGenObject80141FC4_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_804A6460;
 object.unknown00=igManager_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igManager_arkRegister(){
 meta_registerNow((int)igManager_register);
}
void igManager_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igManager_meta,(int)igInterfaced_register,(int)fn_801420C0,(int)igManager_getMetaCall,(int)igManager_className,32,(int)igManager_vtableRead,0,0,0);
}
void *igManager_getMetaCall(){return igManager_getMeta();}
void *fn_801420C0(){return igInterfaced_meta;}
void *igMacrotextureStrip_getMeta(){
 if(!igMacrotextureStrip_meta || !(reinterpret_cast<unsigned int *>(igMacrotextureStrip_meta)[0x24/4]&4)) igMacrotextureStrip_arkRegister();
 return igMacrotextureStrip_meta;
}
void *igMacrotextureStrip_vtableRead(){
 UnknownGenObject80142104 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A46AC;
 object.unknown28.value=0;
 object.unknown00=igMacrotextureStrip_vtable;
 object.unknown2C.value=0;
 object.unknown30.value=0;
 object.unknown38.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igMacrotextureStrip_arkRegister(){
 meta_registerNow((int)igMacrotextureStrip_register);
}
void igMacrotextureStrip_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igMacrotextureStrip_meta,(int)igOptVisitObject_register,(int)fn_8012FEB0,(int)igMacrotextureStrip_getMetaCall,(int)igMacrotextureStrip_className,68,(int)igMacrotextureStrip_vtableRead,(int)igMacrotextureStrip_fieldInit,0,0);
}
void *igMacrotextureStrip_getMetaCall(){return igMacrotextureStrip_getMeta();}
}
#pragma pop

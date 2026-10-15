#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void igGenericAttrStatistics_fieldInit();
void igObjectList_register();
void igObject_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igAllNodeStatistics_className[];
extern char igAllAttrStatistics_className[];
extern char igGenericAttrStatisticsList_className[];
extern char igGenericNodeStatisticsList_className[];
extern char lbl_8049BF1C[];
extern char igGenericAttrStatistics_className[];
extern char igAllNodeStatistics_vtable[];
extern char igAllAttrStatistics_vtable[];
extern char igGenericAttrStatistics_vtable[];
extern char igGenericNodeStatisticsList_vtable[];
extern char lbl_804AAA70[];
extern char igGenericAttrStatisticsList_vtable[];
extern char lbl_804AAB38[];
extern char lbl_8055F4EC[8];
extern char lbl_8055F4F4[4];
extern char lbl_8055F4F8[4];
extern char lbl_8055F4FC[4];
extern char lbl_8055F500[4];
extern char lbl_8055F504[8];
extern char lbl_8055F50C[4];
extern char lbl_8055F510[4];
extern char lbl_8055F514[4];
extern char lbl_8055F518[4];
extern char lbl_8055F51C[8];
extern char lbl_8055F524[8];
extern void *lbl_805621F4;
extern void *igAllNodeStatistics_meta;
extern void *igAllAttrStatistics_meta;
extern void *igGenericAttrStatisticsList_meta;
extern void *igGenericNodeStatisticsList_meta;
extern void *igGenericAttrStatistics_meta;
void *igAllNodeStatistics_getMeta();
void *igAllNodeStatistics_vtableRead();
void igAllNodeStatistics_registerNow();
void igAllNodeStatistics_register();
void *igAllNodeStatistics_getMetaCall();
void igAllNodeStatistics_fieldInit();
void *igAllAttrStatistics_getMeta();
void *igAllAttrStatistics_vtableRead();
void igAllAttrStatistics_registerNow();
void igAllAttrStatistics_register();
void *igAllAttrStatistics_getMetaCall();
void igAllAttrStatistics_fieldInit();
void *fn_801316B0();
void *igGenericAttrStatisticsList_getMeta();
void *igGenericAttrStatisticsList_vtableRead();
void igGenericAttrStatisticsList_registerNow();
void igGenericAttrStatisticsList_register();
void *igGenericAttrStatisticsList_getMetaCall();
void *fn_8013184C();
void *igGenericNodeStatisticsList_getMeta();
void *igGenericNodeStatisticsList_vtableRead();
void igGenericNodeStatisticsList_registerNow();
void igGenericNodeStatisticsList_register();
void *igGenericNodeStatisticsList_getMetaCall();
void *igGenericAttrStatistics_getMeta();
void *igGenericAttrStatistics_vtableRead();
void igGenericAttrStatistics_registerNow();
void igGenericAttrStatistics_register();
void *igGenericAttrStatistics_getMetaCall();
}
struct UnknownGenRoot801312A0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801312A0(){igObject_construct(this);}
};
struct UnknownGenObject801312A0 : UnknownGenRoot801312A0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject801312A0(){unknown00=igAllNodeStatistics_vtable;}
};
struct UnknownGenRoot801314E4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801314E4(){igObject_construct(this);}
};
struct UnknownGenObject801314E4 : UnknownGenRoot801314E4 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject801314E4(){unknown00=igAllAttrStatistics_vtable;}
};
struct UnknownGenObject80131728_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject801318C4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot80131A5C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80131A5C(){igObject_construct(this);}
};
struct UnknownGenObject80131A5C : UnknownGenRoot80131A5C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 char unknown10[16];
 inline ~UnknownGenObject80131A5C(){unknown00=igGenericAttrStatistics_vtable;}
};
extern "C" {
void *fn_80131228(){
 if(!igAllNodeStatistics_meta) igAllNodeStatistics_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igAllNodeStatistics_meta;
}
void *igAllNodeStatistics_getMeta(){
 if(!igAllNodeStatistics_meta || !(reinterpret_cast<unsigned int *>(igAllNodeStatistics_meta)[0x24/4]&4)) igAllNodeStatistics_registerNow();
 return igAllNodeStatistics_meta;
}
void *igAllNodeStatistics_vtableRead(){
 UnknownGenObject801312A0 object;
 object.unknown00=igAllNodeStatistics_vtable;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igAllNodeStatistics_registerNow(){
 meta_registerNow((int)igAllNodeStatistics_register);
}
void igAllNodeStatistics_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igAllNodeStatistics_meta,(int)igObject_register,(int)fn_800237D0,(int)igAllNodeStatistics_getMetaCall,(int)igAllNodeStatistics_className,12,(int)igAllNodeStatistics_vtableRead,(int)igAllNodeStatistics_fieldInit,0,(int)lbl_8055F4EC);
}
void *igAllNodeStatistics_getMetaCall(){return igAllNodeStatistics_getMeta();}
void igAllNodeStatistics_fieldInit(){
 void *value0=igAllNodeStatistics_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_8055F4F4,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_8013184C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 meta_setupFields(value0,lbl_8055F4F8,lbl_8055F4FC,lbl_8055F500,value1);
}
void *fn_8013146C(){
 if(!igAllAttrStatistics_meta) igAllAttrStatistics_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igAllAttrStatistics_meta;
}
void *igAllAttrStatistics_getMeta(){
 if(!igAllAttrStatistics_meta || !(reinterpret_cast<unsigned int *>(igAllAttrStatistics_meta)[0x24/4]&4)) igAllAttrStatistics_registerNow();
 return igAllAttrStatistics_meta;
}
void *igAllAttrStatistics_vtableRead(){
 UnknownGenObject801314E4 object;
 object.unknown00=igAllAttrStatistics_vtable;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igAllAttrStatistics_registerNow(){
 meta_registerNow((int)igAllAttrStatistics_register);
}
void igAllAttrStatistics_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igAllAttrStatistics_meta,(int)igObject_register,(int)fn_800237D0,(int)igAllAttrStatistics_getMetaCall,(int)igAllAttrStatistics_className,12,(int)igAllAttrStatistics_vtableRead,(int)igAllAttrStatistics_fieldInit,0,(int)lbl_8055F504);
}
void *igAllAttrStatistics_getMetaCall(){return igAllAttrStatistics_getMeta();}
void igAllAttrStatistics_fieldInit(){
 void *value0=igAllAttrStatistics_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_8055F50C,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_801316B0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 meta_setupFields(value0,lbl_8055F510,lbl_8055F514,lbl_8055F518,value1);
}
void *fn_801316B0(){
 if(!igGenericAttrStatisticsList_meta) igGenericAttrStatisticsList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igGenericAttrStatisticsList_meta;
}
void *igGenericAttrStatisticsList_getMeta(){
 if(!igGenericAttrStatisticsList_meta || !(reinterpret_cast<unsigned int *>(igGenericAttrStatisticsList_meta)[0x24/4]&4)) igGenericAttrStatisticsList_registerNow();
 return igGenericAttrStatisticsList_meta;
}
void *igGenericAttrStatisticsList_vtableRead(){
 UnknownGenObject80131728_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804AAB38;
 object.unknown00=igGenericAttrStatisticsList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igGenericAttrStatisticsList_registerNow(){
 meta_registerNow((int)igGenericAttrStatisticsList_register);
}
void igGenericAttrStatisticsList_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igGenericAttrStatisticsList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igGenericAttrStatisticsList_getMetaCall,(int)igGenericAttrStatisticsList_className,20,(int)igGenericAttrStatisticsList_vtableRead,0,0,(int)lbl_8055F51C);
}
void *igGenericAttrStatisticsList_getMetaCall(){return igGenericAttrStatisticsList_getMeta();}
void *fn_8013184C(){
 if(!igGenericNodeStatisticsList_meta) igGenericNodeStatisticsList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igGenericNodeStatisticsList_meta;
}
void *igGenericNodeStatisticsList_getMeta(){
 if(!igGenericNodeStatisticsList_meta || !(reinterpret_cast<unsigned int *>(igGenericNodeStatisticsList_meta)[0x24/4]&4)) igGenericNodeStatisticsList_registerNow();
 return igGenericNodeStatisticsList_meta;
}
void *igGenericNodeStatisticsList_vtableRead(){
 UnknownGenObject801318C4_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804AAA70;
 object.unknown00=igGenericNodeStatisticsList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igGenericNodeStatisticsList_registerNow(){
 meta_registerNow((int)igGenericNodeStatisticsList_register);
}
void igGenericNodeStatisticsList_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igGenericNodeStatisticsList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igGenericNodeStatisticsList_getMetaCall,(int)igGenericNodeStatisticsList_className,20,(int)igGenericNodeStatisticsList_vtableRead,0,0,(int)lbl_8055F524);
}
void *igGenericNodeStatisticsList_getMetaCall(){return igGenericNodeStatisticsList_getMeta();}
void *igGenericAttrStatistics_create(void *object){
 igGenericAttrStatistics_registerNow();
 return meta_createInstance(igGenericAttrStatistics_meta,object);
}
void *igGenericAttrStatistics_getMeta(){
 if(!igGenericAttrStatistics_meta || !(reinterpret_cast<unsigned int *>(igGenericAttrStatistics_meta)[0x24/4]&4)) igGenericAttrStatistics_registerNow();
 return igGenericAttrStatistics_meta;
}
void *igGenericAttrStatistics_vtableRead(){
 UnknownGenObject80131A5C object;
 object.unknown00=igGenericAttrStatistics_vtable;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igGenericAttrStatistics_registerNow(){
 meta_registerNow((int)igGenericAttrStatistics_register);
}
void igGenericAttrStatistics_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igGenericAttrStatistics_meta,(int)igObject_register,(int)fn_800237D0,(int)igGenericAttrStatistics_getMetaCall,(int)igGenericAttrStatistics_className,24,(int)igGenericAttrStatistics_vtableRead,(int)igGenericAttrStatistics_fieldInit,0,(int)lbl_8049BF1C);
}
void *igGenericAttrStatistics_getMetaCall(){return igGenericAttrStatistics_getMeta();}
}
#pragma pop

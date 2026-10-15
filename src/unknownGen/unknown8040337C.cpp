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
void *fn_8010E6DC();
void fn_80402E28();
void igObjectList_register();
void igStatisticsItem_fieldInit();
void igView_register();
extern char igStatisticsItemList_className[];
extern char igStatisticsItem_className[];
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char lbl_80495AD8[];
extern char igStatisticsItemList_dependencies[];
extern char igStatisticsItem_dependencies[];
extern char igStatisticsItemList_vtable[];
extern char lbl_804F16E4[];
extern char igStatisticsItem_vtable[];
extern void *igStatisticsItemList_meta;
extern void *igStatisticsItem_meta;
extern void *lbl_805621F4;
void *igStatisticsItemList_getMeta();
void *igStatisticsItemList_vtableRead();
void igStatisticsItemList_arkRegister();
void igStatisticsItemList_register();
void *igStatisticsItemList_getMetaCall();
void *igStatisticsItem_getMeta();
void *igStatisticsItem_vtableRead();
void igStatisticsItem_arkRegister();
void igStatisticsItem_register();
void *igStatisticsItem_getMetaCall();
}
struct UnknownGenObject8040341C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot804035EC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot804035EC(){igObject_construct(this);}
};
struct UnknownGenObject804035EC : UnknownGenRoot804035EC {
 char unknown04[20];
 UnknownGenString unknown18;
 UnknownGenString unknown1C;
 char unknown20[4];
 UnknownGenRefMember unknown24;
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 char unknown30[16];
 inline ~UnknownGenObject804035EC(){unknown00=igStatisticsItem_vtable;}
};
extern "C" {
void *igStatisticsItemList_metaObject(){
 if(!igStatisticsItemList_meta) igStatisticsItemList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igStatisticsItemList_meta;
}
void *igStatisticsItemList_getMeta(){
 if(!igStatisticsItemList_meta || !(reinterpret_cast<unsigned int *>(igStatisticsItemList_meta)[0x24/4]&4)) igStatisticsItemList_arkRegister();
 return igStatisticsItemList_meta;
}
void *igStatisticsItemList_vtableRead(){
 UnknownGenObject8040341C_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804F16E4;
 object.unknown00=igStatisticsItemList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igStatisticsItemList_arkRegister(){
 meta_registerNow((int)igStatisticsItemList_register);
}
void igStatisticsItemList_register(){
 fn_80402E28();
 meta_registerClass(0,(int)&igStatisticsItemList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igStatisticsItemList_getMetaCall,(int)igStatisticsItemList_className,20,(int)igStatisticsItemList_vtableRead,0,0,(int)igStatisticsItemList_dependencies);
}
void *igStatisticsItemList_getMetaCall(){return igStatisticsItemList_getMeta();}
void *igStatisticsItem_metaObject(){
 if(!igStatisticsItem_meta) igStatisticsItem_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igStatisticsItem_meta;
}
void *igStatisticsItem_getMeta(){
 if(!igStatisticsItem_meta || !(reinterpret_cast<unsigned int *>(igStatisticsItem_meta)[0x24/4]&4)) igStatisticsItem_arkRegister();
 return igStatisticsItem_meta;
}
void *igStatisticsItem_vtableRead(){
 UnknownGenObject804035EC object;
 object.unknown00=lbl_80495AD8;
 object.unknown00=igStatisticsItem_vtable;
 object.unknown18.value=0;
 object.unknown1C.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igStatisticsItem_arkRegister(){
 meta_registerNow((int)igStatisticsItem_register);
}
void igStatisticsItem_register(){
 fn_80402E28();
 meta_registerClass(0,(int)&igStatisticsItem_meta,(int)igView_register,(int)fn_8010E6DC,(int)igStatisticsItem_getMetaCall,(int)igStatisticsItem_className,60,(int)igStatisticsItem_vtableRead,(int)igStatisticsItem_fieldInit,0,(int)igStatisticsItem_dependencies);
}
void *igStatisticsItem_getMetaCall(){return igStatisticsItem_getMeta();}
}
#pragma pop

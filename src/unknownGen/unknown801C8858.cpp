#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void *fn_80023FDC();
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
void *fn_800BB61C();
void *fn_8011148C();
void fn_801AA6DC();
void igAppearance_fieldInit();
void igGroup_register();
void igNamedObject_register();
void igNonRefCountedObjectList_register();
void igObjectList_register();
extern char igDataList_vtable[];
extern char igNamedObject_vtable[];
extern char igObjectList_vtable[];
extern char igNonRefCountedObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igNonRefCountedAttrSetList_className[];
extern char igAttrSet_className[];
extern char igAppearanceList_className[];
extern char lbl_804B19BC[];
extern char igAppearance_className[];
extern char igNode_vtable[];
extern char igGroup_vtable[];
extern char igAttrSet_vtable[];
extern char igAppearance_vtable[];
extern char igAppearanceList_vtable[];
extern char lbl_804B68E4[];
extern char igNonRefCountedAttrSetList_vtable[];
extern char lbl_804B69AC[];
extern char lbl_80560868[8];
extern char lbl_80560870[8];
extern char lbl_80560878[8];
extern char lbl_80560880[8];
extern char lbl_80560888[8];
extern char lbl_80560890[8];
extern char lbl_80560898[8];
extern void *lbl_805621F4;
extern void *igNonRefCountedAttrSetList_meta;
extern void *igAttrSet_meta;
extern void *igAppearanceList_meta;
extern void *igAppearance_meta;
void *igNonRefCountedAttrSetList_getMeta();
void *igNonRefCountedAttrSetList_vtableRead();
void igNonRefCountedAttrSetList_registerNow();
void igNonRefCountedAttrSetList_register();
void *igNonRefCountedAttrSetList_getMetaCall();
void *igAttrSet_getMeta();
void *igAttrSet_vtableRead();
void igAttrSet_registerNow();
void igAttrSet_register();
void *igAttrSet_getMetaCall();
void igAttrSet_fieldInit();
void *igAppearanceList_getMeta();
void *igAppearanceList_vtableRead();
void igAppearanceList_registerNow();
void igAppearanceList_register();
void *igAppearanceList_getMetaCall();
void *igAppearance_getMeta();
void *igAppearance_vtableRead();
void igAppearance_registerNow();
void igAppearance_register();
void *igAppearance_getMetaCall();
}
struct UnknownGenObject801C8894_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801C8A68 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C8A68(){igObject_construct(this);}
};
struct UnknownGenObject801C8A68_0 : UnknownGenRoot801C8A68 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801C8A68_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject801C8A68_1 : UnknownGenObject801C8A68_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject801C8A68_1(){unknown00=igNode_vtable;}
};
struct UnknownGenObject801C8A68_2 : UnknownGenObject801C8A68_1 {
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject801C8A68_2(){unknown00=igGroup_vtable;}
};
struct UnknownGenObject801C8A68 : UnknownGenObject801C8A68_2 {
 UnknownGenRefMember unknown20;
 char unknown24[12];
 inline ~UnknownGenObject801C8A68(){unknown00=igAttrSet_vtable;}
};
struct UnknownGenObject801C8DEC_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801C8F88 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C8F88(){igObject_construct(this);}
};
struct UnknownGenObject801C8F88_0 : UnknownGenRoot801C8F88 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801C8F88_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject801C8F88 : UnknownGenObject801C8F88_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject801C8F88(){unknown00=igAppearance_vtable;}
};
extern "C" {
void *igNonRefCountedAttrSetList_getMeta(){
 if(!igNonRefCountedAttrSetList_meta || !(reinterpret_cast<unsigned int *>(igNonRefCountedAttrSetList_meta)[0x24/4]&4)) igNonRefCountedAttrSetList_registerNow();
 return igNonRefCountedAttrSetList_meta;
}
void *igNonRefCountedAttrSetList_vtableRead(){
 UnknownGenObject801C8894_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igNonRefCountedObjectList_vtable;
 object.unknown00=lbl_804B69AC;
 object.unknown00=igNonRefCountedAttrSetList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igNonRefCountedAttrSetList_registerNow(){
 meta_registerNow((int)igNonRefCountedAttrSetList_register);
}
void igNonRefCountedAttrSetList_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igNonRefCountedAttrSetList_meta,(int)igNonRefCountedObjectList_register,(int)fn_80023FDC,(int)igNonRefCountedAttrSetList_getMetaCall,(int)igNonRefCountedAttrSetList_className,20,(int)igNonRefCountedAttrSetList_vtableRead,0,0,(int)lbl_80560868);
}
void *igNonRefCountedAttrSetList_getMetaCall(){return igNonRefCountedAttrSetList_getMeta();}
void *igAttrSet_create(void *object){
 igAttrSet_registerNow();
 return meta_createInstance(igAttrSet_meta,object);
}
void *fn_801C89F0(){
 if(!igAttrSet_meta) igAttrSet_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igAttrSet_meta;
}
void *igAttrSet_getMeta(){
 if(!igAttrSet_meta || !(reinterpret_cast<unsigned int *>(igAttrSet_meta)[0x24/4]&4)) igAttrSet_registerNow();
 return igAttrSet_meta;
}
void *igAttrSet_vtableRead(){
 UnknownGenObject801C8A68 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igNode_vtable;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=igGroup_vtable;
 object.unknown1C.value=0;
 object.unknown00=igAttrSet_vtable;
 object.unknown20.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igAttrSet_registerNow(){
 meta_registerNow((int)igAttrSet_register);
}
void igAttrSet_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igAttrSet_meta,(int)igGroup_register,(int)fn_8011148C,(int)igAttrSet_getMetaCall,(int)igAttrSet_className,40,(int)igAttrSet_vtableRead,(int)igAttrSet_fieldInit,0,(int)lbl_80560870);
}
void *igAttrSet_getMetaCall(){return igAttrSet_getMeta();}
void igAttrSet_fieldInit(){
 void *value0=igAttrSet_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_80560878,2);
 void *value2=meta_field(value0,value1);
 void *value3=fn_800BB61C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+40)=0;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+39)=2;
 meta_setupFields(value0,lbl_80560880,lbl_80560888,lbl_80560890,value1);
}
void *fn_801C8D74(){
 if(!igAppearanceList_meta) igAppearanceList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igAppearanceList_meta;
}
void *igAppearanceList_getMeta(){
 if(!igAppearanceList_meta || !(reinterpret_cast<unsigned int *>(igAppearanceList_meta)[0x24/4]&4)) igAppearanceList_registerNow();
 return igAppearanceList_meta;
}
void *igAppearanceList_vtableRead(){
 UnknownGenObject801C8DEC_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804B68E4;
 object.unknown00=igAppearanceList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igAppearanceList_registerNow(){
 meta_registerNow((int)igAppearanceList_register);
}
void igAppearanceList_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igAppearanceList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igAppearanceList_getMetaCall,(int)igAppearanceList_className,20,(int)igAppearanceList_vtableRead,0,0,(int)lbl_80560898);
}
void *igAppearanceList_getMetaCall(){return igAppearanceList_getMeta();}
void *fn_801C8F10(){
 if(!igAppearance_meta) igAppearance_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igAppearance_meta;
}
void *igAppearance_getMeta(){
 if(!igAppearance_meta || !(reinterpret_cast<unsigned int *>(igAppearance_meta)[0x24/4]&4)) igAppearance_registerNow();
 return igAppearance_meta;
}
void *igAppearance_vtableRead(){
 UnknownGenObject801C8F88 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igAppearance_vtable;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igAppearance_registerNow(){
 meta_registerNow((int)igAppearance_register);
}
void igAppearance_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igAppearance_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)igAppearance_getMetaCall,(int)igAppearance_className,32,(int)igAppearance_vtableRead,(int)igAppearance_fieldInit,0,(int)lbl_804B19BC);
}
void *igAppearance_getMetaCall(){return igAppearance_getMeta();}
}
#pragma pop

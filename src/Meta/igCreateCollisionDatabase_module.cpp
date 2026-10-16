// Written by tools/alchemymeta/poolsrc.py: units whose code addresses the data below from its start.
#include <meta/register.h>
#include <meta/igIntMetaField.h>
#include <meta/igObjectRefMetaField.h>
#include <meta/igStringMetaField.h>
#include <unknownGen.h>
#include <meta/igFloatMetaField.h>
#include <meta/igVec3fMetaField.h>

// The unit's data.
extern "C" {
void fn_800251EC();
void fn_8002879C();
void fn_8002E1AC();
void fn_800385E0();
void igAABox_arkRegister();
void igCollisionCellList_arkRegister();
void igCollisionGrid_arkRegister();
void igCollisionGroupList_arkRegister();
void igFloatMetaField_create();
void igMetaObject_arkRegister();
void igVec3fMetaField_create();
extern char lbl_80561318[];
extern char lbl_80561320[];
extern char lbl_80561328[];
extern char lbl_80561330[];
extern char lbl_80561360[];
extern char lbl_80561368[];
extern char lbl_80561390[];
extern char lbl_80561398[];
extern char lbl_805613A0[];
extern char lbl_805613A8[];
extern char lbl_805613B8[];
extern char lbl_805613C0[];
extern char lbl_805660C0[];
extern char lbl_805660C4[];
extern char lbl_805660C8[];
extern char lbl_805660CC[];
extern char lbl_805660D0[];
extern char lbl_805660D4[];
extern char lbl_805660D8[];
extern char lbl_805660EC[];
extern char lbl_805660F0[];
extern char lbl_805660F4[];
extern char lbl_805660F8[];
extern char lbl_805660FC[];
extern char lbl_80566100[];
extern char lbl_80566104[];
extern char lbl_80566108[];
extern char lbl_8056611C[];
extern char lbl_80566120[];
extern char lbl_80566124[];
extern char lbl_80566128[];
extern char lbl_8056612C[];
extern char lbl_80566130[];
extern char lbl_80566134[];
extern char lbl_80566138[];
extern char lbl_8056613C[];
extern char lbl_80566140[];
extern char lbl_80566144[];
extern char lbl_80566148[];
extern char lbl_8056614C[];
extern char lbl_80566150[];
extern char lbl_80566154[];
extern char lbl_80566160[];
extern char lbl_80566164[];
extern char lbl_80566168[];
extern char lbl_8056616C[];
extern char lbl_80566170[];
extern char lbl_80566174[];
void *igCreateCollisionDatabase_dependencies[3] = {(void *)igMetaObject_arkRegister, (void *)igCollisionGrid_arkRegister, 0};
char igCreateCollisionDatabase_className[] = "igCreateCollisionDatabase";
void *igCreateCollisionDatabase_fieldTypes[7] = {(void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002E1AC, (void *)fn_8002E1AC, (void *)fn_8002E1AC, (void *)fn_800251EC, (void *)fn_8002879C};
char lbl_804CC74C[] = "_gridType";
char lbl_804CC758[] = "_staticGroupType";
char lbl_804CC76C[] = "_fileName";
void *igCreateCollisionDatabase_fieldNames[7] = {(void *)lbl_804CC74C, (void *)lbl_804CC758, (void *)lbl_80561318, (void *)lbl_80561320, (void *)lbl_80561328, (void *)lbl_804CC76C, (void *)lbl_80561330};
void *igCreateCollisionDatabase_fieldStorage[7] = {(void *)lbl_805660C0, (void *)lbl_805660C4, (void *)lbl_805660C8, (void *)lbl_805660CC, (void *)lbl_805660D0, (void *)lbl_805660D4, (void *)lbl_805660D8};
void *igCreateCollisionDatabase_fieldOffsets[7] = {(void *)0x3C, (void *)0x40, (void *)0x28, (void *)0x2C, (void *)0x30, (void *)0x34, (void *)0x38};
char igCollisionInfo_className[] = "igCollisionInfo";
char igCollisionGroupList_className[] = "igCollisionGroupList";
char igCollisionGroup_className[] = "igCollisionGroup";
void *igCollisionGroup_fieldTypes[8] = {(void *)fn_8002879C, (void *)igVec3fMetaField_create, (void *)igVec3fMetaField_create, (void *)igVec3fMetaField_create, (void *)igVec3fMetaField_create, (void *)igFloatMetaField_create, (void *)igFloatMetaField_create, (void *)fn_8002E1AC};
char lbl_804CC828[] = "_transform";
char lbl_804CC834[] = "_position";
char lbl_804CC840[] = "_lastPosition";
char lbl_804CC850[] = "_collisionPosition";
char lbl_804CC864[] = "_direction";
char lbl_804CC870[] = "_collisionCells";
void *igCollisionGroup_fieldNames[8] = {(void *)lbl_804CC828, (void *)lbl_804CC834, (void *)lbl_804CC840, (void *)lbl_804CC850, (void *)lbl_804CC864, (void *)lbl_80561360, (void *)lbl_80561368, (void *)lbl_804CC870};
void *igCollisionGroup_fieldStorage[8] = {(void *)lbl_805660EC, (void *)lbl_805660F0, (void *)lbl_805660F4, (void *)lbl_805660F8, (void *)lbl_805660FC, (void *)lbl_80566100, (void *)lbl_80566104, (void *)lbl_80566108};
void *igCollisionGroup_fieldOffsets[8] = {(void *)0x20, (void *)0x24, (void *)0x30, (void *)0x3C, (void *)0x48, (void *)0x54, (void *)0x58, (void *)0x5C};
void *igCollisionGridHelper_dependencies[3] = {(void *)igCollisionGrid_arkRegister, (void *)igMetaObject_arkRegister, 0};
char igCollisionGridHelper_className[] = "igCollisionGridHelper";
void *igCollisionGrid_dependencies[4] = {(void *)igCollisionCellList_arkRegister, (void *)igCollisionGroupList_arkRegister, (void *)igAABox_arkRegister, 0};
char igCollisionGrid_className[] = "igCollisionGrid";
void *igCollisionGrid_fieldTypes[15] = {(void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002E1AC, (void *)fn_8002E1AC, (void *)fn_8002E1AC, (void *)igFloatMetaField_create, (void *)fn_8002879C, (void *)igVec3fMetaField_create, (void *)fn_8002E1AC, (void *)fn_8002E1AC};
char lbl_804CC960[] = "_activeCells";
char lbl_804CC970[] = "_processedCells";
char lbl_804CC980[] = "_checkedGroups";
char lbl_804CC990[] = "_dynamicCollisions";
char lbl_804CC9A4[] = "_staticCollisions";
char lbl_804CC9B8[] = "_lostGroups";
char lbl_804CC9C4[] = "_maxRadius";
char lbl_804CC9D0[] = "_maxPriority";
void *igCollisionGrid_fieldNames[15] = {(void *)lbl_80561390, (void *)lbl_804CC960, (void *)lbl_804CC970, (void *)lbl_804CC980, (void *)lbl_804CC990, (void *)lbl_804CC9A4, (void *)lbl_804CC9B8, (void *)lbl_80561318, (void *)lbl_80561320, (void *)lbl_80561328, (void *)lbl_804CC9C4, (void *)lbl_80561398, (void *)lbl_805613A0, (void *)lbl_805613A8, (void *)lbl_804CC9D0};
void *igCollisionGrid_fieldStorage[15] = {(void *)lbl_8056611C, (void *)lbl_80566120, (void *)lbl_80566124, (void *)lbl_80566128, (void *)lbl_8056612C, (void *)lbl_80566130, (void *)lbl_80566134, (void *)lbl_80566138, (void *)lbl_8056613C, (void *)lbl_80566140, (void *)lbl_80566144, (void *)lbl_80566148, (void *)lbl_8056614C, (void *)lbl_80566150, (void *)lbl_80566154};
void *igCollisionGrid_fieldOffsets[15] = {(void *)0x8, (void *)0xC, (void *)0x24, (void *)0x28, (void *)0x2C, (void *)0x30, (void *)0x34, (void *)0x10, (void *)0x14, (void *)0x18, (void *)0x1C, (void *)0x38, (void *)0x3C, (void *)0x48, (void *)0x20};
char igCollisionCellList_className[] = "igCollisionCellList";
void *igCollisionCell_dependencies[4] = {(void *)igCollisionGroupList_arkRegister, (void *)igCollisionGrid_arkRegister, (void *)igAABox_arkRegister, 0};
char igCollisionCell_className[] = "igCollisionCell";
void *igCollisionCell_fieldTypes[6] = {(void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002E1AC, (void *)fn_8002E1AC, (void *)fn_800385E0};
char lbl_804CCAE0[] = "_objects";
char lbl_804CCAEC[] = "_staticCount";
char lbl_804CCAFC[] = "_priority";
void *igCollisionCell_fieldNames[6] = {(void *)lbl_804CCAE0, (void *)lbl_80561330, (void *)lbl_805613B8, (void *)lbl_804CCAEC, (void *)lbl_804CCAFC, (void *)lbl_805613C0};
void *igCollisionCell_fieldStorage[6] = {(void *)lbl_80566160, (void *)lbl_80566164, (void *)lbl_80566168, (void *)lbl_8056616C, (void *)lbl_80566170, (void *)lbl_80566174};
void *igCollisionCell_fieldOffsets[6] = {(void *)0x8, (void *)0xC, (void *)0x10, (void *)0x14, (void *)0x18, (void *)0x1C};
}

namespace igCreateCollisionDatabase_fieldInit {
// igCreateCollisionDatabase: Alchemy class registration (0x8028CC44..0x8028CD74). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igCreateCollisionDatabase)
META_DECLARE(igCollisionGrid)
META_DECLARE(igCollisionGroup)

extern "C" {
void *fn_80029F84();
void fn_80053650(void *, int);
void fn_8006A540(void *, void *);
void fn_80071694(void *, int);
void *fn_8028D794();
}

#pragma push
#pragma auto_inline off
extern "C" {

void igCreateCollisionDatabase_fieldInit()
{
    Meta::igMetaObject *meta = igCreateCollisionDatabase_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igCreateCollisionDatabase_fieldTypes, 7);
    Meta::igIntMetaField *sizeXField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base));
    void *value_v2 = fn_80029F84();
    *reinterpret_cast<void **>(reinterpret_cast<char *>(sizeXField) + 0x38) = value_v2;
    fn_8006A540(sizeXField, igCollisionGrid_getMeta());
    Meta::igIntMetaField *sizeYField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 1));
    void *value_v4 = fn_80029F84();
    *reinterpret_cast<void **>(reinterpret_cast<char *>(sizeYField) + 0x38) = value_v4;
    fn_8006A540(sizeYField, igCollisionGroup_getMeta());
    Meta::igIntMetaField *sizeZField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 2));
    fn_80053650(sizeZField, 1);
    Meta::igStringMetaField *fileNameField = static_cast<Meta::igStringMetaField *>(meta_field(meta, base + 3));
    fn_80053650(fileNameField, 1);
    Meta::igObjectRefMetaField *gridField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 4));
    fn_80053650(gridField, 1);
    Meta::igObjectRefMetaField *gridTypeField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 5));
    fn_80071694(gridTypeField, 0);
    Meta::igObjectRefMetaField *staticGroupTypeField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 6));
    void *value_v10 = fn_8028D794();
    staticGroupTypeField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v10);
    staticGroupTypeField->_persistent = false;
    meta_setupFields(meta, igCreateCollisionDatabase_fieldNames, igCreateCollisionDatabase_fieldStorage, igCreateCollisionDatabase_fieldOffsets, base);
}

}
#pragma pop
}

namespace igCollisionInfo {
// igCollisionInfo: Alchemy class registration (0x8028CD74..0x8028D01C). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igCollisionInfo)
META_DECLARE(igInfo)
META_DECLARE(igNamedObject)

extern "C" {
void *fn_800284EC();
void fn_8028C93C();
void *fn_8028D794();
extern char igCollisionInfo_dependencies[8];
extern char igCollisionInfo_fieldNames[4];
extern char igCollisionInfo_fieldOffsets[4];
extern char igCollisionInfo_fieldStorage[4];
extern char igCollisionInfo_fieldTypes[4];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct igInfoInstance : igNamedObjectInstance {
    inline ~igInfoInstance() { __vtable = igInfo_vtable; }
};

struct igCollisionInfoInstance : igInfoInstance {
    char unknown0C[8];
    igObjectRefMember _grid;
    char unknown18[8];
    inline ~igCollisionInfoInstance() { __vtable = igCollisionInfo_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igCollisionInfo)

META_GET_META(igCollisionInfo)

void *igCollisionInfo_vtableRead()
{
    igCollisionInfoInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igInfo_vtable;
    object.__vtable = igCollisionInfo_vtable;
    object._grid._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igCollisionInfo)

void igCollisionInfo_register()
{
    fn_8028C93C();
    meta_registerClass(0, &igCollisionInfo_meta, igInfo_register,
                       fn_800284EC, igCollisionInfo_getMetaCall,
                       igCollisionInfo_className, 0x18,
                       igCollisionInfo_vtableRead, igCollisionInfo_fieldInit, 0, igCollisionInfo_dependencies);
}

META_GET_META_CALL(igCollisionInfo)

void igCollisionInfo_fieldInit()
{
    Meta::igMetaObject *meta = igCollisionInfo_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igCollisionInfo_fieldTypes, 1);
    Meta::igObjectRefMetaField *gridField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_8028D794();
    gridField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    meta_setupFields(meta, igCollisionInfo_fieldNames, igCollisionInfo_fieldStorage, igCollisionInfo_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown8028D01C {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *fn_800284EC();
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
void *fn_8011148C();
void fn_8028C93C();
void *fn_8028D794();
void igCollisionGroup_fieldInit();
void igGroup_register();
void igInfo_register();
void igObjectList_register();
extern char igInfo_vtable[];
extern char igDataList_vtable[];
extern char igNamedObject_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igNode_vtable[];
extern char igGroup_vtable[];
extern char igCollisionGroup_vtable[];
extern char igCollisionGroupList_vtable[];
extern char lbl_804CCF28[];
extern char igCollisionInfo_vtable[];
extern char igCollisionInfo_dependencies[8];
extern char igCollisionInfo_fieldTypes[4];
extern char igCollisionInfo_fieldNames[4];
extern char igCollisionInfo_fieldStorage[4];
extern char igCollisionInfo_fieldOffsets[4];
extern char igCollisionGroupList_dependencies[8];
extern char igCollisionGroup_dependencies[8];
extern void *lbl_805621F4;
extern void *igCollisionInfo_meta;
extern void *igCollisionGroupList_meta;
extern void *igCollisionGroup_meta;
void *igCollisionInfo_getMeta();
void *igCollisionInfo_vtableRead();
void igCollisionInfo_arkRegister();
void igCollisionInfo_register();
void *igCollisionInfo_getMetaCall();
void igCollisionInfo_fieldInit();
void *igCollisionGroupList_getMeta();
void *igCollisionGroupList_vtableRead();
void igCollisionGroupList_arkRegister();
void igCollisionGroupList_register();
void *igCollisionGroupList_getMetaCall();
void *igCollisionGroup_getMeta();
void *igCollisionGroup_vtableRead();
void igCollisionGroup_arkRegister();
void igCollisionGroup_register();
void *igCollisionGroup_getMetaCall();
}
struct UnknownGenRoot8028CDE8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8028CDE8(){igObject_construct(this);}
};
struct UnknownGenObject8028CDE8_0 : UnknownGenRoot8028CDE8 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8028CDE8_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject8028CDE8_1 : UnknownGenObject8028CDE8_0 {
 inline ~UnknownGenObject8028CDE8_1(){unknown00=igInfo_vtable;}
};
struct UnknownGenObject8028CDE8 : UnknownGenObject8028CDE8_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 char unknown18[8];
 inline ~UnknownGenObject8028CDE8(){unknown00=igCollisionInfo_vtable;}
};
struct UnknownGenObject8028D094_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot8028D1F4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8028D1F4(){igObject_construct(this);}
};
struct UnknownGenObject8028D1F4_0 : UnknownGenRoot8028D1F4 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8028D1F4_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject8028D1F4_1 : UnknownGenObject8028D1F4_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject8028D1F4_1(){unknown00=igNode_vtable;}
};
struct UnknownGenObject8028D1F4_2 : UnknownGenObject8028D1F4_1 {
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject8028D1F4_2(){unknown00=igGroup_vtable;}
};
struct UnknownGenObject8028D1F4 : UnknownGenObject8028D1F4_2 {
 UnknownGenRefMember unknown20;
 char unknown24[60];
 inline ~UnknownGenObject8028D1F4(){unknown00=igCollisionGroup_vtable;}
};
extern "C" {
void *fn_8028D01C(){
 if(!igCollisionGroupList_meta) igCollisionGroupList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igCollisionGroupList_meta;
}
}
#pragma pop
}

namespace igCollisionGroupList {
// igCollisionGroupList: Alchemy class registration (0x8028D058..0x8028D1B8). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igCollisionGroupList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_8028C93C();
extern char igCollisionGroupList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804CCF28[];
}

struct Instance_8028D094_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igCollisionGroupList)

void *igCollisionGroupList_vtableRead()
{
    Instance_8028D094_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804CCF28;
    object.__vtable = igCollisionGroupList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igCollisionGroupList)

void igCollisionGroupList_register()
{
    fn_8028C93C();
    meta_registerClass(0, &igCollisionGroupList_meta, igObjectList_register,
                       fn_80024180, igCollisionGroupList_getMetaCall,
                       igCollisionGroupList_className, 0x14,
                       igCollisionGroupList_vtableRead, 0, 0, igCollisionGroupList_dependencies);
}

META_GET_META_CALL(igCollisionGroupList)

}
#pragma pop
}

namespace unknown8028D1B8 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *fn_800284EC();
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
void *fn_8011148C();
void fn_8028C93C();
void *fn_8028D794();
void igCollisionGroup_fieldInit();
void igGroup_register();
void igInfo_register();
void igObjectList_register();
extern char igInfo_vtable[];
extern char igDataList_vtable[];
extern char igNamedObject_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igNode_vtable[];
extern char igGroup_vtable[];
extern char igCollisionGroup_vtable[];
extern char igCollisionGroupList_vtable[];
extern char lbl_804CCF28[];
extern char igCollisionInfo_vtable[];
extern char igCollisionInfo_dependencies[8];
extern char igCollisionInfo_fieldTypes[4];
extern char igCollisionInfo_fieldNames[4];
extern char igCollisionInfo_fieldStorage[4];
extern char igCollisionInfo_fieldOffsets[4];
extern char igCollisionGroupList_dependencies[8];
extern char igCollisionGroup_dependencies[8];
extern void *lbl_805621F4;
extern void *igCollisionInfo_meta;
extern void *igCollisionGroupList_meta;
extern void *igCollisionGroup_meta;
void *igCollisionInfo_getMeta();
void *igCollisionInfo_vtableRead();
void igCollisionInfo_arkRegister();
void igCollisionInfo_register();
void *igCollisionInfo_getMetaCall();
void igCollisionInfo_fieldInit();
void *igCollisionGroupList_getMeta();
void *igCollisionGroupList_vtableRead();
void igCollisionGroupList_arkRegister();
void igCollisionGroupList_register();
void *igCollisionGroupList_getMetaCall();
void *igCollisionGroup_getMeta();
void *igCollisionGroup_vtableRead();
void igCollisionGroup_arkRegister();
void igCollisionGroup_register();
void *igCollisionGroup_getMetaCall();
}
struct UnknownGenRoot8028CDE8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8028CDE8(){igObject_construct(this);}
};
struct UnknownGenObject8028CDE8_0 : UnknownGenRoot8028CDE8 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8028CDE8_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject8028CDE8_1 : UnknownGenObject8028CDE8_0 {
 inline ~UnknownGenObject8028CDE8_1(){unknown00=igInfo_vtable;}
};
struct UnknownGenObject8028CDE8 : UnknownGenObject8028CDE8_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 char unknown18[8];
 inline ~UnknownGenObject8028CDE8(){unknown00=igCollisionInfo_vtable;}
};
struct UnknownGenObject8028D094_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot8028D1F4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8028D1F4(){igObject_construct(this);}
};
struct UnknownGenObject8028D1F4_0 : UnknownGenRoot8028D1F4 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8028D1F4_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject8028D1F4_1 : UnknownGenObject8028D1F4_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject8028D1F4_1(){unknown00=igNode_vtable;}
};
struct UnknownGenObject8028D1F4_2 : UnknownGenObject8028D1F4_1 {
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject8028D1F4_2(){unknown00=igGroup_vtable;}
};
struct UnknownGenObject8028D1F4 : UnknownGenObject8028D1F4_2 {
 UnknownGenRefMember unknown20;
 char unknown24[60];
 inline ~UnknownGenObject8028D1F4(){unknown00=igCollisionGroup_vtable;}
};
extern "C" {
void *igCollisionGroup_getMeta(){
 if(!igCollisionGroup_meta || !(reinterpret_cast<unsigned int *>(igCollisionGroup_meta)[0x24/4]&4)) igCollisionGroup_arkRegister();
 return igCollisionGroup_meta;
}
void *igCollisionGroup_vtableRead(){
 UnknownGenObject8028D1F4 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igNode_vtable;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=igGroup_vtable;
 object.unknown1C.value=0;
 object.unknown00=igCollisionGroup_vtable;
 object.unknown20.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igCollisionGroup_arkRegister(){
 meta_registerNow((int)igCollisionGroup_register);
}
void igCollisionGroup_register(){
 fn_8028C93C();
 meta_registerClass(0,(int)&igCollisionGroup_meta,(int)igGroup_register,(int)fn_8011148C,(int)igCollisionGroup_getMetaCall,(int)igCollisionGroup_className,96,(int)igCollisionGroup_vtableRead,(int)igCollisionGroup_fieldInit,0,(int)igCollisionGroup_dependencies);
}
void *igCollisionGroup_getMetaCall(){return igCollisionGroup_getMeta();}
}
#pragma pop
}

namespace igCollisionGroup_fieldInit {
// igCollisionGroup: Alchemy class registration (0x8028D468..0x8028D4F0). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igCollisionGroup)

extern "C" {
void *fn_801AC644();
}

#pragma push
#pragma auto_inline off
extern "C" {

void igCollisionGroup_fieldInit()
{
    Meta::igMetaObject *meta = igCollisionGroup_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igCollisionGroup_fieldTypes, 8);
    Meta::igObjectRefMetaField *transformField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_v2 = fn_801AC644();
    transformField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v2);
    meta_setupFields(meta, igCollisionGroup_fieldNames, igCollisionGroup_fieldStorage, igCollisionGroup_fieldOffsets, base);
}

}
#pragma pop
}

namespace igCollisionGridHelper {
// igCollisionGridHelper: Alchemy class registration (0x8028D4F0..0x8028D75C). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igCollisionGridHelper)
META_DECLARE(igCollisionGroup)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void *fn_80029F84();
void fn_8006A540(void *, void *);
void fn_8028C93C();
void *fn_8028D794();
extern char igCollisionGridHelper_fieldNames[8];
extern char igCollisionGridHelper_fieldOffsets[8];
extern char igCollisionGridHelper_fieldStorage[8];
extern char igCollisionGridHelper_fieldTypes[8];
}

struct igCollisionGridHelperInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _grid;
    igObjectRefMember _staticGroupType;
    inline ~igCollisionGridHelperInstance() { __vtable = igCollisionGridHelper_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igCollisionGridHelper)

void *igCollisionGridHelper_vtableRead()
{
    igCollisionGridHelperInstance object;
    object.__vtable = igCollisionGridHelper_vtable;
    object._grid._value = 0;
    object._staticGroupType._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igCollisionGridHelper)

void igCollisionGridHelper_register()
{
    fn_8028C93C();
    meta_registerClass(0, &igCollisionGridHelper_meta, igObject_register,
                       fn_800237D0, igCollisionGridHelper_getMetaCall,
                       igCollisionGridHelper_className, 0x10,
                       igCollisionGridHelper_vtableRead, igCollisionGridHelper_fieldInit, 0, igCollisionGridHelper_dependencies);
}

META_GET_META_CALL(igCollisionGridHelper)

void igCollisionGridHelper_fieldInit()
{
    Meta::igMetaObject *meta = igCollisionGridHelper_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igCollisionGridHelper_fieldTypes, 2);
    Meta::igObjectRefMetaField *gridField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_v2 = fn_8028D794();
    gridField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v2);
    Meta::igObjectRefMetaField *staticGroupTypeField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_v4 = fn_80029F84();
    staticGroupTypeField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v4);
    fn_8006A540(staticGroupTypeField, igCollisionGroup_getMeta());
    meta_setupFields(meta, igCollisionGridHelper_fieldNames, igCollisionGridHelper_fieldStorage, igCollisionGridHelper_fieldOffsets, base);
}

}
#pragma pop
}

namespace igCollisionGrid {
// igCollisionGrid: Alchemy class registration (0x8028D75C..0x8028D794). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igCollisionGrid)

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igCollisionGrid)

}
#pragma pop
}

namespace unknown8028D794 {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void igObject_construct(void *);
void fn_8028D884(void *,short);
void igCollisionGrid_arkRegister();
extern char igCollisionGrid_vtable[];
extern void *lbl_805621F4;
extern void *igCollisionGrid_meta;
}
struct UnknownGenObject8028D80C {
 void *unknown00;
 char unknown04[4];
 int unknown08;
 int unknown0C;
 char unknown10[20];
 int unknown24;
 int unknown28;
 int unknown2C;
 int unknown30;
 int unknown34;
 int unknown38;
 char unknown3C[20];
};
extern "C" {
void *fn_8028D794(){
 if(!igCollisionGrid_meta) igCollisionGrid_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igCollisionGrid_meta;
}
}
#pragma pop
}

namespace igCollisionGrid_2 {
// igCollisionGrid: Alchemy class registration (0x8028D7D0..0x8028D884). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igCollisionGrid)

extern "C" {
void fn_8028D884(void *,short);
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igCollisionGrid)

void *igCollisionGrid_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[4];
        int unknown08;
        int unknown0C;
        char unknown10[20];
        int unknown24;
        int unknown28;
        int unknown2C;
        int unknown30;
        int unknown34;
        int unknown38;
        char unknown3C[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igCollisionGrid_vtable;
    object.unknown08 = 0;
    object.unknown0C = 0;
    object.unknown24 = 0;
    object.unknown28 = 0;
    object.unknown2C = 0;
    object.unknown30 = 0;
    object.unknown34 = 0;
    object.unknown38 = 0;
    void *result = meta_vtableOf(&object);
    fn_8028D884(&object, -1);   // the class's destructor
    return result;
}

}
#pragma pop
}

namespace unknown8028D884 {
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066DFC(void *);
extern char igCollisionGrid_vtable[];
}
extern "C" {
void *fn_8028D884(int p0,int p1){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 void *value4;
 void *value5;
 void *value6;
 void *value7;
 void *value8;
 void *value9;
 void *value10;
 void *value11;
 void *value12;
 void *value13;
 void *value14;
 void *value15;
 if((int)p0!=0){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=igCollisionGrid_vtable;
  if((int)(p0+56)!=0){
   value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+56);
   if(value0){
    value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+4)=(reinterpret_cast<char *>(value1)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4)&0x7FFFFF)){
     fn_80066E1C(value0);
    }
   }
  }
  if((int)(p0+52)!=0){
   value2=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+52);
   if(value2){
    value3=*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+4)=(reinterpret_cast<char *>(value3)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+4)&0x7FFFFF)){
     fn_80066E1C(value2);
    }
   }
  }
  if((int)(p0+48)!=0){
   value4=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+48);
   if(value4){
    value5=*reinterpret_cast<void **>(reinterpret_cast<char *>(value4)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+4)=(reinterpret_cast<char *>(value5)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value4)+4)&0x7FFFFF)){
     fn_80066E1C(value4);
    }
   }
  }
  if((int)(p0+44)!=0){
   value6=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+44);
   if(value6){
    value7=*reinterpret_cast<void **>(reinterpret_cast<char *>(value6)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+4)=(reinterpret_cast<char *>(value7)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value6)+4)&0x7FFFFF)){
     fn_80066E1C(value6);
    }
   }
  }
  if((int)(p0+40)!=0){
   value8=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+40);
   if(value8){
    value9=*reinterpret_cast<void **>(reinterpret_cast<char *>(value8)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value8)+4)=(reinterpret_cast<char *>(value9)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value8)+4)&0x7FFFFF)){
     fn_80066E1C(value8);
    }
   }
  }
  if((int)(p0+36)!=0){
   value10=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+36);
   if(value10){
    value11=*reinterpret_cast<void **>(reinterpret_cast<char *>(value10)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value10)+4)=(reinterpret_cast<char *>(value11)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value10)+4)&0x7FFFFF)){
     fn_80066E1C(value10);
    }
   }
  }
  if((int)(p0+12)!=0){
   value12=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12);
   if(value12){
    value13=*reinterpret_cast<void **>(reinterpret_cast<char *>(value12)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value12)+4)=(reinterpret_cast<char *>(value13)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value12)+4)&0x7FFFFF)){
     fn_80066E1C(value12);
    }
   }
  }
  if((int)(p0+8)!=0){
   value14=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8);
   if(value14){
    value15=*reinterpret_cast<void **>(reinterpret_cast<char *>(value14)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value14)+4)=(reinterpret_cast<char *>(value15)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value14)+4)&0x7FFFFF)){
     fn_80066E1C(value14);
    }
   }
  }
  if((int)(short)p1>0){
   fn_80066DFC((void *)p0);
  }
 }
 return (void *)p0;
}
}
#pragma pop
}

namespace unknown8028DA5C {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8028C93C();
void igCollisionGrid_fieldInit();
void *igCollisionGrid_getMeta();
void igCollisionGrid_vtableRead();
void igObject_register();
extern void *igCollisionGrid_meta;
void igCollisionGrid_register();
void *igCollisionGrid_getMetaCall();
}
extern "C" {
void igCollisionGrid_arkRegister(){
 meta_registerNow((int)igCollisionGrid_register);
}
void igCollisionGrid_register(){
 fn_8028C93C();
 meta_registerClass(0,(int)&igCollisionGrid_meta,(int)igObject_register,(int)fn_800237D0,(int)igCollisionGrid_getMetaCall,(int)igCollisionGrid_className,76,(int)igCollisionGrid_vtableRead,(int)igCollisionGrid_fieldInit,0,(int)igCollisionGrid_dependencies);
}
void *igCollisionGrid_getMetaCall(){return igCollisionGrid_getMeta();}
}
#pragma pop
}

namespace igCollisionGrid_fieldInit {
// igCollisionGrid: Alchemy class registration (0x8028DB1C..0x8028DCA0). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igCollisionGrid)

extern "C" {
void fn_80053650(void *, int);
void *fn_80122790();
void *fn_8028D01C();
void *fn_8028DCA0();
}

#pragma push
#pragma auto_inline off
extern "C" {

void igCollisionGrid_fieldInit()
{
    Meta::igMetaObject *meta = igCollisionGrid_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igCollisionGrid_fieldTypes, 15);
    Meta::igObjectRefMetaField *cellsField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_v2 = fn_8028DCA0();
    cellsField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v2);
    cellsField->_construct = true;
    Meta::igObjectRefMetaField *activeCellsField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_v4 = fn_8028DCA0();
    activeCellsField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v4);
    activeCellsField->_construct = true;
    Meta::igIntMetaField *sizeXField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 2));
    void *value_v6 = fn_8028DCA0();
    *reinterpret_cast<void **>(reinterpret_cast<char *>(sizeXField) + 0x38) = value_v6;
    *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(sizeXField) + 0x34) = 1;
    Meta::igIntMetaField *sizeYField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 3));
    void *value_v8 = fn_8028D01C();
    *reinterpret_cast<void **>(reinterpret_cast<char *>(sizeYField) + 0x38) = value_v8;
    *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(sizeYField) + 0x34) = 1;
    Meta::igIntMetaField *sizeZField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 4));
    void *value_v10 = fn_8028D01C();
    *reinterpret_cast<void **>(reinterpret_cast<char *>(sizeZField) + 0x38) = value_v10;
    *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(sizeZField) + 0x34) = 1;
    Meta::igFloatMetaField *maxRadiusField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base + 5));
    void *value_v12 = fn_8028D01C();
    *reinterpret_cast<void **>(reinterpret_cast<char *>(maxRadiusField) + 0x38) = value_v12;
    *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(maxRadiusField) + 0x34) = 1;
    Meta::igIntMetaField *maxPriorityField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 6));
    void *value_v14 = fn_8028D01C();
    *reinterpret_cast<void **>(reinterpret_cast<char *>(maxPriorityField) + 0x38) = value_v14;
    *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(maxPriorityField) + 0x34) = 1;
    Meta::igObjectRefMetaField *lostGroupsField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 11));
    void *value_v16 = fn_80122790();
    lostGroupsField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v16);
    lostGroupsField->_construct = true;
    Meta::igVec3fMetaField *deltasField = static_cast<Meta::igVec3fMetaField *>(meta_field(meta, base + 13));
    fn_80053650(deltasField, 1);
    meta_setupFields(meta, igCollisionGrid_fieldNames, igCollisionGrid_fieldStorage, igCollisionGrid_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown8028DCA0 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8028C93C();
void igCollisionCell_fieldInit();
void igObjectList_register();
void igObject_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igCollisionCell_vtable[];
extern char igCollisionCellList_vtable[];
extern char lbl_804CCD70[];
extern char igCollisionCellList_dependencies[8];
extern void *lbl_805621F4;
extern void *igCollisionCellList_meta;
extern void *igCollisionCell_meta;
void *igCollisionCellList_getMeta();
void *igCollisionCellList_vtableRead();
void igCollisionCellList_arkRegister();
void igCollisionCellList_register();
void *igCollisionCellList_getMetaCall();
void *igCollisionCell_getMeta();
void *igCollisionCell_vtableRead();
void igCollisionCell_arkRegister();
void igCollisionCell_register();
void *igCollisionCell_getMetaCall();
}
struct UnknownGenObject8028DD18_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot8028DEB0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8028DEB0(){igObject_construct(this);}
};
struct UnknownGenObject8028DEB0 : UnknownGenRoot8028DEB0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject8028DEB0(){unknown00=igCollisionCell_vtable;}
};
extern "C" {
void *fn_8028DCA0(){
 if(!igCollisionCellList_meta) igCollisionCellList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igCollisionCellList_meta;
}
}
#pragma pop
}

namespace igCollisionCellList {
// igCollisionCellList: Alchemy class registration (0x8028DCDC..0x8028DE3C). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igCollisionCellList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_8028C93C();
extern char igCollisionCellList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804CCD70[];
}

struct Instance_8028DD18_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igCollisionCellList)

void *igCollisionCellList_vtableRead()
{
    Instance_8028DD18_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804CCD70;
    object.__vtable = igCollisionCellList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igCollisionCellList)

void igCollisionCellList_register()
{
    fn_8028C93C();
    meta_registerClass(0, &igCollisionCellList_meta, igObjectList_register,
                       fn_80024180, igCollisionCellList_getMetaCall,
                       igCollisionCellList_className, 0x14,
                       igCollisionCellList_vtableRead, 0, 0, igCollisionCellList_dependencies);
}

META_GET_META_CALL(igCollisionCellList)

}
#pragma pop
}

namespace unknown8028DE3C {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8028C93C();
void igCollisionCell_fieldInit();
void igObjectList_register();
void igObject_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igCollisionCell_vtable[];
extern char igCollisionCellList_vtable[];
extern char lbl_804CCD70[];
extern char igCollisionCellList_dependencies[8];
extern void *lbl_805621F4;
extern void *igCollisionCellList_meta;
extern void *igCollisionCell_meta;
void *igCollisionCellList_getMeta();
void *igCollisionCellList_vtableRead();
void igCollisionCellList_arkRegister();
void igCollisionCellList_register();
void *igCollisionCellList_getMetaCall();
void *igCollisionCell_getMeta();
void *igCollisionCell_vtableRead();
void igCollisionCell_arkRegister();
void igCollisionCell_register();
void *igCollisionCell_getMetaCall();
}
struct UnknownGenObject8028DD18_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot8028DEB0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8028DEB0(){igObject_construct(this);}
};
struct UnknownGenObject8028DEB0 : UnknownGenRoot8028DEB0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject8028DEB0(){unknown00=igCollisionCell_vtable;}
};
extern "C" {
void *igCollisionCell_create(void *object){
 igCollisionCell_arkRegister();
 return meta_createInstance(igCollisionCell_meta,object);
}
void *igCollisionCell_getMeta(){
 if(!igCollisionCell_meta || !(reinterpret_cast<unsigned int *>(igCollisionCell_meta)[0x24/4]&4)) igCollisionCell_arkRegister();
 return igCollisionCell_meta;
}
void *igCollisionCell_vtableRead(){
 UnknownGenObject8028DEB0 object;
 object.unknown00=igCollisionCell_vtable;
 object.unknown08.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igCollisionCell_arkRegister(){
 meta_registerNow((int)igCollisionCell_register);
}
void igCollisionCell_register(){
 fn_8028C93C();
 meta_registerClass(0,(int)&igCollisionCell_meta,(int)igObject_register,(int)fn_800237D0,(int)igCollisionCell_getMetaCall,(int)igCollisionCell_className,32,(int)igCollisionCell_vtableRead,(int)igCollisionCell_fieldInit,0,(int)igCollisionCell_dependencies);
}
void *igCollisionCell_getMetaCall(){return igCollisionCell_getMeta();}
}
#pragma pop
}

namespace igCollisionCell_fieldInit {
// igCollisionCell: Alchemy class registration (0x8028E038..0x8028E108). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igCollisionCell)

extern "C" {
void *fn_80122790();
void *fn_8028D01C();
void *fn_8028D794();
}

#pragma push
#pragma auto_inline off
extern "C" {

void igCollisionCell_fieldInit()
{
    Meta::igMetaObject *meta = igCollisionCell_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igCollisionCell_fieldTypes, 6);
    Meta::igObjectRefMetaField *objectsField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_v2 = fn_8028D01C();
    objectsField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v2);
    objectsField->_construct = true;
    Meta::igObjectRefMetaField *gridField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_v4 = fn_8028D794();
    gridField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v4);
    gridField->_refCounted = false;
    Meta::igObjectRefMetaField *boxField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    void *value_v6 = fn_80122790();
    boxField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v6);
    boxField->_construct = true;
    meta_setupFields(meta, igCollisionCell_fieldNames, igCollisionCell_fieldStorage, igCollisionCell_fieldOffsets, base);
}

}
#pragma pop
}

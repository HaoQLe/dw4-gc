// Written by tools/alchemymeta/poolsrc.py: units whose code addresses the data below from its start.
#include <unknownGen.h>
#include <meta/register.h>
#include <meta/igEnumMetaField.h>
#include <meta/igObjectRefMetaField.h>
#include <meta/igStringMetaField.h>

// The unit's data.
extern "C" {
void fn_800251EC();
void fn_8002879C();
void fn_80031378();
void igIterateGraph_arkRegister();
void igMetaObject_arkRegister();
extern char lbl_805660A4[];
extern char lbl_805660A8[];
extern char lbl_805660AC[];
extern char lbl_805660B0[];
char lbl_804CC090[] = "IG_APPLICATION_FIND_ALL";
char lbl_804CC0A8[] = "IG_APPLICATION_FIND_OFTYPE";
char lbl_804CC0C4[] = "IG_APPLICATION_FIND_OFEXACTTYPE";
void *lbl_804CC0E4[6] = {(void *)lbl_804CC090, (void *)lbl_804CC0A8, (void *)lbl_804CC0C4, 0, (void *)0x1, (void *)0x2};
char lbl_804CC0FC[] = "IG_APPLICATION_FIND_TYPE";
void *igSearchSceneGraph_dependencies[3] = {(void *)igIterateGraph_arkRegister, (void *)igMetaObject_arkRegister, 0};
char igSearchSceneGraph_className[] = "igSearchSceneGraph";
void *igSearchSceneGraph_fieldTypes[4] = {(void *)fn_8002879C, (void *)fn_800251EC, (void *)fn_8002879C, (void *)fn_80031378};
char lbl_804CC148[] = "_iterateGraph";
char lbl_804CC158[] = "_searchString";
char lbl_804CC168[] = "_searchMeta";
char lbl_804CC174[] = "_nextOfTypeCode";
void *igSearchSceneGraph_fieldNames[4] = {(void *)lbl_804CC148, (void *)lbl_804CC158, (void *)lbl_804CC168, (void *)lbl_804CC174};
void *igSearchSceneGraph_fieldStorage[4] = {(void *)lbl_805660A4, (void *)lbl_805660A8, (void *)lbl_805660AC, (void *)lbl_805660B0};
void *igSearchSceneGraph_fieldOffsets[4] = {(void *)0xC, (void *)0x10, (void *)0x14, (void *)0x18};
}

namespace unknown8028C330 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
void *igSearchSceneGraph_arkRegister();
extern char lbl_80566098[1];
extern char lbl_80566099[1];
extern void *lbl_8056609C;
}
extern "C" {
void *fn_8028C330(){return igSearchSceneGraph_arkRegister();}
void fn_8028C350(){
 if((int)*reinterpret_cast<signed char *>((lbl_80566099+0))==0){
  *reinterpret_cast<unsigned char *>((lbl_80566098+0))=0;
  *reinterpret_cast<unsigned char *>((lbl_80566099+0))=1;
 }
 if((void *)(int)*reinterpret_cast<unsigned char *>((lbl_80566098+0))){
  return;
 }
 *reinterpret_cast<unsigned char *>((lbl_80566098+0))=1;
}
void *fn_8028C384(){
 char *data=lbl_804CC090;
 if(!lbl_8056609C) lbl_8056609C=fn_800635C8(data+0x6C,data+0x54,data+0x60,0x3);
 return lbl_8056609C;
}
}
#pragma pop
}

namespace unknown8028C3D0 {
#pragma push
#pragma auto_inline off
extern "C" {
void igSearchSceneGraph_arkRegister();
extern void *igSearchSceneGraph_meta;
}
extern "C" {
void *igSearchSceneGraph_getMeta(){
 if(!igSearchSceneGraph_meta || !(reinterpret_cast<unsigned int *>(igSearchSceneGraph_meta)[0x24/4]&4)) igSearchSceneGraph_arkRegister();
 return igSearchSceneGraph_meta;
}
}
#pragma pop
}

namespace unknown8028C40C {
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igNamedObject_vtable[];
extern char igSearchSceneGraph_vtable[];
}
struct UnknownGenRoot8028C40C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8028C40C(){igObject_construct(this);}
};
struct UnknownGenObject8028C40C_0 : UnknownGenRoot8028C40C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8028C40C_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject8028C40C : UnknownGenObject8028C40C_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenString unknown10;
 UnknownGenRefMember unknown14;
 char unknown18[16];
 inline ~UnknownGenObject8028C40C(){unknown00=igSearchSceneGraph_vtable;}
};
extern "C" {
void *igSearchSceneGraph_vtableRead(){
 UnknownGenObject8028C40C object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igSearchSceneGraph_vtable;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
}

namespace unknown8028C55C {
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void igSearchSceneGraph_register();
}
extern "C" {
void igSearchSceneGraph_arkRegister(){
 meta_registerNow((int)igSearchSceneGraph_register);
}
}
#pragma pop
}

namespace unknown8028C584 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8028C350();
void igNamedObject_register();
void igSearchSceneGraph_fieldInit();
void *igSearchSceneGraph_getMeta();
void igSearchSceneGraph_vtableRead();
extern void *igSearchSceneGraph_meta;
void *igSearchSceneGraph_getMetaCall();
}
extern "C" {
void igSearchSceneGraph_register(){
 fn_8028C350();
 meta_registerClass(0,(int)&igSearchSceneGraph_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)igSearchSceneGraph_getMetaCall,(int)igSearchSceneGraph_className,28,(int)igSearchSceneGraph_vtableRead,(int)igSearchSceneGraph_fieldInit,0,(int)igSearchSceneGraph_dependencies);
}
void *igSearchSceneGraph_getMetaCall(){return igSearchSceneGraph_getMeta();}
}
#pragma pop
}

namespace igSearchSceneGraph_fieldInit {
// igSearchSceneGraph: Alchemy class registration (0x8028C61C..0x8028C6FC). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igSearchSceneGraph)

extern "C" {
void *fn_80029F84();
void fn_80046E58(void *, void *);
void fn_80071694(void *, void *);
void *fn_80144178();
void fn_8028C384();
extern char lbl_80561310[4];
extern char lbl_80561314[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igSearchSceneGraph_fieldInit()
{
    Meta::igMetaObject *meta = igSearchSceneGraph_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igSearchSceneGraph_fieldTypes, 4);
    Meta::igObjectRefMetaField *iterateGraphField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_v2 = fn_80144178();
    iterateGraphField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v2);
    iterateGraphField->_construct = true;
    Meta::igStringMetaField *searchStringField = static_cast<Meta::igStringMetaField *>(meta_field(meta, base + 1));
    fn_80071694(searchStringField, lbl_80561314);
    Meta::igObjectRefMetaField *searchMetaField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    void *value_v5 = fn_80029F84();
    searchMetaField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v5);
    Meta::igEnumMetaField *nextOfTypeCodeField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base + 3));
    fn_80046E58(nextOfTypeCodeField, lbl_80561310);
    nextOfTypeCodeField->_getMetaEnumFunction = reinterpret_cast<void *>(fn_8028C384);
    meta_setupFields(meta, igSearchSceneGraph_fieldNames, igSearchSceneGraph_fieldStorage, igSearchSceneGraph_fieldOffsets, base);
}

}
#pragma pop
}

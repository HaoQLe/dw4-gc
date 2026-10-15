// igGatherCompileGraphs: Alchemy class registration (0x8014816C..0x80148448). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igGatherCompileGraphs)
META_DECLARE(igOptVisitObject)

extern "C" {
void fn_8012FC48();
void *fn_8012FEB0();
extern char igGatherCompileGraphs_fieldNames[4];
extern char igGatherCompileGraphs_fieldOffsets[4];
extern char igGatherCompileGraphs_fieldStorage[4];
extern char igGatherCompileGraphs_fieldTypes[4];
extern char lbl_804A46AC[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
}

struct Instance_804A4A04 : igObjectInstance {
    char unknown04[28];
    igObjectRefMember _registry;
    igObjectRefMember _configuration;
    inline ~Instance_804A4A04() { __vtable = lbl_804A4A04; }
};

struct Instance_804A46AC : Instance_804A4A04 {
    igObjectRefMember _visitedMetaObject;
    inline ~Instance_804A46AC() { __vtable = lbl_804A46AC; }
};

struct igGatherCompileGraphsInstance : Instance_804A46AC {
    igStringMember _compileString;
    char unknown30[8];
    inline ~igGatherCompileGraphsInstance() { __vtable = igGatherCompileGraphs_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igGatherCompileGraphs)

void *igGatherCompileGraphs_vtableRead()
{
    igGatherCompileGraphsInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A4A04;
    object._registry._value = 0;
    object._configuration._value = 0;
    object.__vtable = lbl_804A46AC;
    object._visitedMetaObject._value = 0;
    object.__vtable = igGatherCompileGraphs_vtable;
    object._compileString._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igGatherCompileGraphs)

void igGatherCompileGraphs_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igGatherCompileGraphs_meta, igOptVisitObject_register,
                       fn_8012FEB0, igGatherCompileGraphs_getMetaCall,
                       igGatherCompileGraphs_className, 0x30,
                       igGatherCompileGraphs_vtableRead, igGatherCompileGraphs_fieldInit, 0, 0);
}

META_GET_META_CALL(igGatherCompileGraphs)

void igGatherCompileGraphs_fieldInit()
{
    Meta::igMetaObject *meta = igGatherCompileGraphs_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igGatherCompileGraphs_fieldTypes, 1);
    meta_setupFields(meta, igGatherCompileGraphs_fieldNames, igGatherCompileGraphs_fieldStorage, igGatherCompileGraphs_fieldOffsets, base);
}

}
#pragma pop

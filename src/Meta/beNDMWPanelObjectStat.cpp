// beNDMWPanelObjectStat: Alchemy class registration (0x80337108..0x80337428). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWPanelObjectStat)
META_DECLARE(beNDMWPanelObject)

extern "C" {
extern char beNDMWPanelObjectStat_dependencies[16];
void fn_803250AC();
void *fn_80337428();
extern char lbl_804E613C[];
}

struct Instance_804E613C : igObjectInstance {
    char unknown04[32];
    igObjectRefMember _playerDataList;
    char unknown28[4];
    igObjectRefMember _textSetList;
    igObjectRefMember _textColorList;
    inline ~Instance_804E613C() { __vtable = lbl_804E613C; }
};

struct beNDMWPanelObjectStatInstance : Instance_804E613C {
    char unknown34[8];
    igObjectRefMember _listFolder;
    igObjectRefMember _listColor;
    igObjectRefMember _playerWork;
    char unknown48[8];
    inline ~beNDMWPanelObjectStatInstance() { __vtable = beNDMWPanelObjectStat_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_METAOBJECT(beNDMWPanelObjectStat)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beNDMWPanelObjectStat)
#pragma pop

#pragma push
#pragma use_lmw_stmw on
void *beNDMWPanelObjectStat_vtableRead()
{
    beNDMWPanelObjectStatInstance object;
    object.__vtable = lbl_804E613C;
    object._playerDataList._value = 0;
    object._textSetList._value = 0;
    object._textColorList._value = 0;
    object.__vtable = beNDMWPanelObjectStat_vtable;
    object._listFolder._value = 0;
    object._listColor._value = 0;
    object._playerWork._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beNDMWPanelObjectStat)

void beNDMWPanelObjectStat_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWPanelObjectStat_meta, beNDMWPanelObject_register,
                       fn_80337428, beNDMWPanelObjectStat_getMetaCall,
                       beNDMWPanelObjectStat_className, 0x48,
                       beNDMWPanelObjectStat_vtableRead, beNDMWPanelObjectStat_fieldInit, 0, beNDMWPanelObjectStat_dependencies);
}

META_GET_META_CALL(beNDMWPanelObjectStat)

}
#pragma pop

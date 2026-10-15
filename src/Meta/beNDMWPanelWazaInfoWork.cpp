// beNDMWPanelWazaInfoWork: Alchemy class registration (0x80336BD0..0x80336E90). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWPanelWazaInfoWork)

struct beNDMWPanelWazaInfoWorkInstance : igObjectInstance {
    char unknown04[12];
    igObjectRefMember _panelWaza;
    igObjectRefMember _panelItem;
    igObjectRefMember _panelStat;
    char unknown1C[4];
    igStringMember _retWazaLabel;
    igObjectRefMember _playerWork;
    igObjectRefMember _textSetList;
    igObjectRefMember _textColorList;
    char unknown30[8];
    inline ~beNDMWPanelWazaInfoWorkInstance() { __vtable = beNDMWPanelWazaInfoWork_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beNDMWPanelWazaInfoWork)

META_METAOBJECT(beNDMWPanelWazaInfoWork)

META_GET_META(beNDMWPanelWazaInfoWork)

#pragma push
#pragma optimize_for_size on
#pragma use_lmw_stmw on
void *beNDMWPanelWazaInfoWork_vtableRead()
{
    beNDMWPanelWazaInfoWorkInstance object;
    object.__vtable = beNDMWPanelWazaInfoWork_vtable;
    object._panelWaza._value = 0;
    object._panelItem._value = 0;
    object._panelStat._value = 0;
    object._retWazaLabel._value = 0;
    object._playerWork._value = 0;
    object._textSetList._value = 0;
    object._textColorList._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

}
#pragma pop

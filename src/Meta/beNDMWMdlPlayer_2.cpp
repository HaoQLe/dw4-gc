// beNDMWMdlPlayer: Alchemy class registration (0x80338E78..0x80338F60). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beNDMWMdlPlayer)
META_DECLARE(beNDMWGameRam)
META_DECLARE(bePadManager)
META_DECLARE(igViewerSceneInfoManager)

extern "C" {
extern char beNDMWMdlPlayer_fieldNames[];
extern char beNDMWMdlPlayer_fieldOffsets[];
extern char beNDMWMdlPlayer_fieldStorage[];
extern char beNDMWMdlPlayer_fieldTypes[];
}

#pragma push
#pragma auto_inline off
extern "C" {

void beNDMWMdlPlayer_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWMdlPlayer_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWMdlPlayer_fieldTypes, 3);
    Meta::igObjectRefMetaField *viewerSIManagerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    viewerSIManagerField->_metaObject = igViewerSceneInfoManager_metaObject();
    viewerSIManagerField->_refCounted = false;
    Meta::igObjectRefMetaField *padManagerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    padManagerField->_metaObject = bePadManager_metaObject();
    padManagerField->_refCounted = false;
    Meta::igObjectRefMetaField *gameRamField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    gameRamField->_metaObject = beNDMWGameRam_metaObject();
    gameRamField->_refCounted = false;
    meta_setupFields(meta, beNDMWMdlPlayer_fieldNames, beNDMWMdlPlayer_fieldStorage, beNDMWMdlPlayer_fieldOffsets, base);
}

}
#pragma pop

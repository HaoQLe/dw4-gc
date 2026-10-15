// beCameraCtrl: Alchemy class registration (0x802E278C..0x802E295C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igBoolMetaField.h>
#include <meta/igFloatMetaField.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beCameraCtrl)
META_DECLARE(beBaseInfoManager)
META_DECLARE(beCameraMode)
META_DECLARE(igViewerParameters)
META_DECLARE(igViewerSceneInfoManager)

extern "C" {
extern char beCameraCtrl_dependencies[16];
extern char beCameraCtrl_fieldNames[];
extern char beCameraCtrl_fieldOffsets[];
extern char beCameraCtrl_fieldStorage[];
extern char beCameraCtrl_fieldTypes[];
void fn_8003EC68(void *,int);
void fn_8004D4BC(void *,float);
void fn_802B1AC8();
void *fn_802B381C();
extern char lbl_8041D5B0[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beCameraCtrl)

void beCameraCtrl_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beCameraCtrl_meta, beBaseInfoManager_register,
                       fn_802B381C, beCameraCtrl_getMetaCall,
                       beCameraCtrl_className, 0xDC,
                       beCameraCtrl_vtableRead, beCameraCtrl_fieldInit, 0, beCameraCtrl_dependencies);
}

META_GET_META_CALL(beCameraCtrl)

void beCameraCtrl_fieldInit()
{
    Meta::igMetaObject *meta = beCameraCtrl_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beCameraCtrl_fieldTypes, 13);
    Meta::igObjectRefMetaField *viewerMangField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    viewerMangField->_metaObject = igViewerSceneInfoManager_metaObject();
    viewerMangField->_refCounted = false;
    Meta::igObjectRefMetaField *viewerParaField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    viewerParaField->_metaObject = igViewerParameters_metaObject();
    viewerParaField->_refCounted = false;
    Meta::igObjectRefMetaField *cameraModeField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    cameraModeField->_metaObject = beCameraMode_metaObject();
    Meta::igFloatMetaField *debugZoomField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base + 11));
    fn_8004D4BC(debugZoomField, *reinterpret_cast<float *>(lbl_8041D5B0 + 0));
    Meta::igBoolMetaField *isFirstField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base + 12));
    fn_8003EC68(isFirstField, 1);
    meta_setupFields(meta, beCameraCtrl_fieldNames, beCameraCtrl_fieldStorage, beCameraCtrl_fieldOffsets, base);
}

}
#pragma pop

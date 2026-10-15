// igCharMetricsList: Alchemy class registration (0x80114D88..0x80114ED4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igCharMetricsList)
META_DECLARE(igDataList)

extern "C" {
void *fn_80024D1C();
void fn_8010CBD4();
void fn_80114ED4();
extern char lbl_80496EC8[];
}

struct Instance_80114DC4_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igCharMetricsList)

void *igCharMetricsList_vtableRead()
{
    Instance_80114DC4_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80496EC8;
    object.__vtable = igCharMetricsList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igCharMetricsList)

void igCharMetricsList_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igCharMetricsList_meta, igDataList_register,
                       fn_80024D1C, igCharMetricsList_getMetaCall,
                       igCharMetricsList_className, 0x14,
                       igCharMetricsList_vtableRead, fn_80114ED4, 0, 0);
}

META_GET_META_CALL(igCharMetricsList)

}
#pragma pop

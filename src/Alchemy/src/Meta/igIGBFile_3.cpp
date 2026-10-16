// igIGBFile: Alchemy class registration (0x8002EC60..0x8002ED7C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igIGBFile)
META_DECLARE(igDataList)
META_DECLARE(igDirectory)
META_DECLARE(igObjectList)

extern "C" {
void fn_8002ED7C(void *, int);
extern char lbl_80475A34[100];
extern char lbl_80476E0C[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igIGBFile)

void *igIGBFile_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[16];
        int unknown14;
        int unknown18;
        int unknown1C;
        char unknown20[8];
        int unknown28;
        int unknown2C;
        char unknown30[12];
        int unknown3C;
        char unknown40[4];
        int unknown44;
        char unknown48[20];
        int unknown5C;
        char unknown60[8];
        int unknown68;
        char unknown6C[80];
        int unknownBC;
        int unknownC0;
        char unknownC4[8];
        int unknownCC;
        int unknownD0;
        char unknownD4[20];
        int unknownE8;
        char unknownEC[8];
        int unknownF4;
        char unknownF8[32];
        int unknown118;
        int unknown11C;
        int unknown120;
        char unknown124[12];
        int unknown130;
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_80475A34;
    object.__vtable = igDirectory_vtable;
    object.unknown14 = 0;
    object.unknown18 = 0;
    object.unknown1C = 0;
    object.unknown28 = 0;
    object.unknown2C = 0;
    object.unknown3C = 0;
    object.unknown44 = 0;
    object.__vtable = igIGBFile_vtable;
    object.unknown5C = 0;
    object.unknown68 = 0;
    object.unknownBC = 0;
    object.unknownC0 = 0;
    object.unknownCC = 0;
    object.unknownD0 = 0;
    object.unknownE8 = 0;
    object.unknownF4 = 0;
    object.unknown118 = 0;
    object.unknown11C = 0;
    object.unknown120 = 0;
    object.unknown130 = 0;
    void *result = meta_vtableOf(&object);
    fn_8002ED7C(&object, -1);   // the class's destructor
    return result;
}

}
#pragma pop

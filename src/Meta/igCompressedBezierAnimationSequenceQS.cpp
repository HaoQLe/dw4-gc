// igCompressedBezierAnimationSequenceQS: Alchemy class registration (0x801C28D0..0x801C2B68). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igCompressedBezierAnimationSequenceQS)
META_DECLARE(igCompressedAnimationSequenceQS)

extern "C" {
void fn_801AA6DC();
extern char igCompressedBezierAnimationSequenceQS_dependencies[8];
void *igCompressedBezierAnimationSequenceQS_parentMeta();
extern char lbl_804B796C[];
extern char lbl_804BA150[];
}

struct igCompressedAnimationSequenceQSInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _compressedTranslationList;
    igObjectRefMember _compressedQuaternionList;
    igObjectRefMember _compressedTimeList;
    inline ~igCompressedAnimationSequenceQSInstance() { __vtable = igCompressedAnimationSequenceQS_vtable; }
};

struct igCompressedBezierAnimationSequenceQSInstance : igCompressedAnimationSequenceQSInstance {
    char unknown14[44];
    igObjectRefMember _compressedBezierTranslationData;
    char unknown44[20];
    inline ~igCompressedBezierAnimationSequenceQSInstance() { __vtable = igCompressedBezierAnimationSequenceQS_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igCompressedBezierAnimationSequenceQS)

META_GET_META(igCompressedBezierAnimationSequenceQS)

void *igCompressedBezierAnimationSequenceQS_vtableRead()
{
    igCompressedBezierAnimationSequenceQSInstance object;
    object.__vtable = lbl_804BA150;
    object.__vtable = lbl_804B796C;
    object.__vtable = igCompressedAnimationSequenceQS_vtable;
    object._compressedTranslationList._value = 0;
    object._compressedQuaternionList._value = 0;
    object._compressedTimeList._value = 0;
    object.__vtable = igCompressedBezierAnimationSequenceQS_vtable;
    object._compressedBezierTranslationData._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igCompressedBezierAnimationSequenceQS)

void igCompressedBezierAnimationSequenceQS_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igCompressedBezierAnimationSequenceQS_meta, igCompressedAnimationSequenceQS_register,
                       igCompressedBezierAnimationSequenceQS_parentMeta, igCompressedBezierAnimationSequenceQS_getMetaCall,
                       igCompressedBezierAnimationSequenceQS_className, 0x50,
                       igCompressedBezierAnimationSequenceQS_vtableRead, igCompressedBezierAnimationSequenceQS_fieldInit, 0, igCompressedBezierAnimationSequenceQS_dependencies);
}

META_GET_META_CALL(igCompressedBezierAnimationSequenceQS)

}
#pragma pop

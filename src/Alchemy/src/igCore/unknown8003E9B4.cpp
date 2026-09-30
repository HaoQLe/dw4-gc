#include <igGap.h>

// Synthetic recovery partition; this is only a partial ABI/offset view.
class Unknown8003E9B4Target {
public:
    virtual void unknown08();
    virtual void unknown0C();
    virtual void unknown10();
    virtual void unknown14();
    virtual void unknown18();
    virtual void unknown1C();
    virtual void unknown20();
    virtual void unknown24();
    virtual void unknown28();
    virtual void unknown2C();
    virtual void unknown30();
    virtual void unknown34();
    virtual void unknown38();
    virtual void unknown3C();
    virtual void unknown40();
    virtual void unknown44();
    virtual void unknown48();
    virtual void unknown4C();
    virtual void unknown50();
    virtual void unknown54();
    virtual void unknown58();
    virtual void unknown5C();
    virtual void unknown60();
    virtual void unknown64();
    virtual void unknown68();
    virtual void unknown6C();
    virtual void unknown70();
    virtual void unknown74();
    virtual void unknown78();
    virtual void unknown7C();
    virtual void unknown80();
    virtual void unknown84();
    virtual void unknown88();
    virtual void unknown8C();
    virtual void unknown90();
    virtual void unknown94();
    virtual void unknown98();
    virtual void unknown9C();
    virtual void unknownA0();
    virtual void unknownA4();
    virtual void unknownA8();
    virtual void unknownAC();
    virtual void unknownB0();
    virtual void unknownB4();
    virtual void unknownB8();
    virtual void unknownBC();
    virtual void unknownC0();
    virtual void unknownC4();
    virtual void unknownC8();
    virtual void unknownCC();
    virtual void unknownD0(void *, Gap::igUnsignedInt);
};
struct Unknown8003E9B4 {
    unsigned char unknown00[0x34];
    Gap::igUnsignedInt unknown34;
};
extern "C" Unknown8003E9B4Target *fn_80038948(void *);

extern "C" void fn_8003E9B4(Unknown8003E9B4 *object, void *value, Gap::igUnsignedInt count){
    fn_80038948(object)->unknownD0(value, count * object->unknown34);
}


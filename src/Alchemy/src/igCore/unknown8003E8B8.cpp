#include <igGap.h>

// Observed callback storage and growth ABI; semantic fields remain unknown.
struct UnknownCallbacks {
    void **unknown00;
    Gap::igInt unknown04;
    Gap::igInt unknown08;
};
namespace Gap { namespace Core {
    class igArkCore;
    extern igArkCore *_arkCore;
} }
extern "C" {
    void *fn_80056138(Gap::igUnsignedInt, void *);
    void *fn_8005624C(void *, Gap::igUnsignedInt);
}

extern "C" void fn_8003E8B8(UnknownCallbacks *, void *);

extern "C" void fn_8003E8B8(UnknownCallbacks *self, void *value){
    if(self->unknown04 == self->unknown08){
        if(!self->unknown08)
            self->unknown08 = 4;
        else{
            self->unknown08 *= (3 * self->unknown08) / 2;
        }
        if(!self->unknown00)
            self->unknown00 = static_cast<void**>(fn_80056138(self->unknown08 * 4,
                *reinterpret_cast<void**>(reinterpret_cast<char*>(Gap::Core::_arkCore) + 0x34)));
        else
            self->unknown00 = static_cast<void**>(fn_8005624C(self->unknown00, self->unknown08 * 4));
    }
    self->unknown00[self->unknown04++] = value;
}

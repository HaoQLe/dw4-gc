#include <igGap.h>

struct UnknownCallbacks;
extern "C" void fn_8003E8B8(UnknownCallbacks *, void *);

extern "C" void fn_8003E4FC(void *self, void (*callback)(void *)){
    char *bytes = static_cast<char*>(self);
    Gap::igInt offset; Gap::igInt i = 0; offset = 0;
    for(; i < reinterpret_cast<Gap::igInt*>(*reinterpret_cast<void**>(bytes + 0x18))[3]; ++i, offset += 4)
        callback(*reinterpret_cast<void**>(reinterpret_cast<char*>(reinterpret_cast<void**>(*reinterpret_cast<void**>(bytes + 0x18))[2]) + offset));
    fn_8003E8B8(*reinterpret_cast<UnknownCallbacks**>(bytes + 0x2C), reinterpret_cast<void*>(callback));
}

// Gap::Bec::beSound: the class of its info.
#include "beSound.h"

// The original calls every function of these files; none is inlined.
#pragma auto_inline off

extern "C" {

void *beSound_virtual80(beSound *) { return *reinterpret_cast<void **>(beSoundInfo_meta); }

}

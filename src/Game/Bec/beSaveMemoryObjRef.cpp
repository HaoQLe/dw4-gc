// Ref<beSaveMemoryObj>'s out-of-line destructor (0x802BD63C), emitted among the class registrations;
// beSvReadMediaApi's start names it in its exception table for the read buffers it creates. Ref is the
// project's name for the reference holder; a unit of its own is a linking convenience.
#define GAME_REF_OUT_OF_LINE
#include <game/Ref.h>
#include <meta/beSaveMemoryObj.h>

template class Ref<Meta::beSaveMemoryObj>;

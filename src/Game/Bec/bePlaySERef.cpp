// Ref<bePlaySE>'s out-of-line destructor (0x80315C20), emitted after beSound's message handler, which names
// it in its exception table for the effect it records. Ref is the project's name for the reference holder; a
// unit of its own is a linking convenience.
#define GAME_REF_OUT_OF_LINE
#include <game/Ref.h>
#include <meta/bePlaySE.h>

template class Ref<Meta::bePlaySE>;

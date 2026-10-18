// Ref<beCriHandle>'s out-of-line destructor (0x802DFFA8), which beCri's handle creation (fn_802F66C8) names in
// its exception table. It was emitted in an earlier file of the game; a unit of its own is a linking
// convenience.
#define GAME_REF_OUT_OF_LINE
#include <game/Ref.h>
#include <meta/beCriHandle.h>

template class Ref<Meta::beCriHandle>;

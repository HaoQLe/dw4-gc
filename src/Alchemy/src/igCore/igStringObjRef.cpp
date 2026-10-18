// Ref<igStringObj>'s out-of-line destructor (0x80026180), emitted early in the Alchemy core; beCri's effect
// playback (fn_802F5A04) names it in its exception table for the system's scratch string. Ref is the
// project's name for the reference holder; a unit of its own is a linking convenience.
#define GAME_REF_OUT_OF_LINE
#include <game/Ref.h>
#include <meta/igStringObj.h>

template class Ref<Meta::igStringObj>;

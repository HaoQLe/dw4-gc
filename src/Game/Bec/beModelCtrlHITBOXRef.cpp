// Ref<beModelCtrlHITBOX>'s out-of-line destructor (0x8034D1A0), named by the exception table of the player's
// per-frame step (the main lobby's attack hit box). Ref is the project's name for the reference holder; a unit
// of its own is a linking convenience.
#define GAME_REF_OUT_OF_LINE
#include <game/Ref.h>
#include <meta/beModelCtrlHITBOX.h>

template class Ref<Meta::beModelCtrlHITBOX>;

// Ref<beModelCtrlMoveObject>'s out-of-line destructor (0x8030AE6C), emitted after beModelCtrl's move command,
// which names it in its exception table. Ref is the project's name for the reference holder; a unit of its own
// is a linking convenience.
#define GAME_REF_OUT_OF_LINE
#include <game/Ref.h>
#include <meta/beModelCtrlMoveObject.h>

template class Ref<Meta::beModelCtrlMoveObject>;

// Ref<igIntList>'s out-of-line destructor (0x80020D14), emitted early in the Alchemy core; beModelCtrl's label
// function (fn_8030B014) names it in its exception table for its list of label offsets. Ref is the project's
// name for the reference holder; a unit of its own is a linking convenience.
#define GAME_REF_OUT_OF_LINE
#include <game/Ref.h>
#include <meta/igIntList.h>

template class Ref<Meta::igIntList>;

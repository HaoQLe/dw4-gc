// Ref<igAABox>'s out-of-line destructor (0x80119DF8), compiled without exception tables; beModelCtrl's bound
// function (fn_8030D7F4) names it in its own. Ref is the project's name for the reference holder; a unit of its
// own is a linking convenience.
#define GAME_REF_OUT_OF_LINE
#include <game/Ref.h>
#include <meta/igAABox.h>

template class Ref<Meta::igAABox>;

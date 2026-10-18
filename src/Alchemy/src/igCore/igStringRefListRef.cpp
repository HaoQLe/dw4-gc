// Ref<igStringRefList>'s out-of-line destructor (0x80020CA0), emitted early in the Alchemy core; beSound's
// message handler (beSound_virtual90) names it in its exception table for its list of sound file names.
// Ref is the project's name for the reference holder; a unit of its own is a linking convenience.
#define GAME_REF_OUT_OF_LINE
#include <game/Ref.h>
#include <meta/igStringRefList.h>

template class Ref<Meta::igStringRefList>;

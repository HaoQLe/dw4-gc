// Ref<beDataObjListList>'s out-of-line destructor (0x803446D8), which the game RAM's functions creating a beDataObjListList name in
// their exception tables. Ref is the project's name for the reference holder; a unit of its own is a linking
// convenience.
#define GAME_REF_OUT_OF_LINE
#include <game/Ref.h>
#include <meta/beDataObjListList.h>

template class Ref<Meta::beDataObjListList>;

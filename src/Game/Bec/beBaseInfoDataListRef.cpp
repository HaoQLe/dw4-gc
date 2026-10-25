// Ref<beBaseInfoDataList>'s out-of-line destructor (0x802B2A04), which every function creating a RAM's data list
// names in its exception table (the model controller's among them). Ref is the project's name for the reference
// holder; a unit of its own is a linking convenience.
#define GAME_REF_OUT_OF_LINE
#include <game/Ref.h>
#include <meta/beBaseInfoDataList.h>

template class Ref<Meta::beBaseInfoDataList>;

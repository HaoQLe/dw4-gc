// The out-of-line destructors of Ref<beSvEndApi> and Ref<beSvStartApi> (0x80323BFC..0x80323CE4), emitted after
// beSaveUtil's update, which names them in its exception table. Ref is the project's name for the reference
// holder; a unit of its own is a linking convenience.
#define GAME_REF_OUT_OF_LINE
#include <game/Ref.h>
#include <meta/beSvEndApi.h>
#include <meta/beSvStartApi.h>

template class Ref<Meta::beSvEndApi>;
template class Ref<Meta::beSvStartApi>;

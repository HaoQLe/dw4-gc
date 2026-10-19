// The out-of-line destructors of the Refs beSaveUtil's message handler holds its operations in
// (0x803244FC..0x80324828), in the order they were emitted. Ref is the project's name for the reference
// holder; a unit of its own is a linking convenience.
#define GAME_REF_OUT_OF_LINE
#include <game/Ref.h>
#include <meta/beSvReadMediaApi.h>
#include <meta/beSvWriteMediaApi.h>
#include <meta/beSvFormatApi.h>
#include <meta/beSvFileMakeApi.h>
#include <meta/beSvGetFreeSizeApi.h>
#include <meta/beSvUseCheckApi.h>
#include <meta/beSvFileFindApi.h>

template class Ref<Meta::beSvReadMediaApi>;
template class Ref<Meta::beSvWriteMediaApi>;
template class Ref<Meta::beSvFormatApi>;
template class Ref<Meta::beSvFileMakeApi>;
template class Ref<Meta::beSvGetFreeSizeApi>;
template class Ref<Meta::beSvUseCheckApi>;
template class Ref<Meta::beSvFileFindApi>;

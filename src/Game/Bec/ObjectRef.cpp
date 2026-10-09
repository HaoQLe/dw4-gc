// The out-of-line ObjectRef destructor (0x802B3608). Game files using ObjectRef locals refer to this copy
// from their exception tables; the linker keeps it over their own copies.
#define GAME_OBJECTREF_OUT_OF_LINE
#include <game/ObjectRef.h>

ObjectRef::~ObjectRef()
{
    if (_object) release(_object);
}

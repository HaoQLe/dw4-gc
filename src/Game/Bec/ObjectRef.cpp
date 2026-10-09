// The out-of-line ObjectRef destructor (0x802B3608), which beWeapon_virtual7C's exception table refers to;
// the linker keeps it over beWeapon.cpp's own copy. Its address lies between beWeapon_vtableRead and
// beWeapon_register, so it was probably a weak copy emitted in beWeapon's registration file; a unit of its
// own is a linking convenience, not an established file boundary.
#define GAME_OBJECTREF_OUT_OF_LINE
#include <game/ObjectRef.h>

ObjectRef::~ObjectRef()
{
    if (_object) release(_object);
}

// Ref<beWeaponAttachDataList>'s out-of-line destructor (0x802B3608), which beWeapon_virtual7C's exception
// table refers to. Its address lies between beWeapon_vtableRead and beWeapon_register, so it was probably
// emitted in beWeapon's registration file; a unit of its own is a linking convenience.
#define GAME_REF_OUT_OF_LINE
#include <game/Ref.h>
#include <meta/beWeaponAttachDataList.h>

template class Ref<Meta::beWeaponAttachDataList>;

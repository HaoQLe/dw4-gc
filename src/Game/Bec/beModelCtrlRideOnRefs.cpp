// beModelCtrl: the out-of-line destructors of the ride-ons' holders and two field setters, emitted at the end of
// the original file (0x8030EFDC..0x8030F218).
#define GAME_REF_OUT_OF_LINE
#include "beModelCtrl.h"

#pragma auto_inline off

template class Ref<beModelCtrlInfoRideOn4>;
template class Ref<beModelCtrlInfoRideOn3>;

extern "C" {

// Field setters (see the header).
void fn_8030F0C4(beModelCtrlInfoWork *work, beModelCtrlInfoRideOn *rideOn) { setRef(work->_rideOnData, rideOn); }

void fn_8030F134(beModelCtrlInfoRideOn *rideOn, beModelCtrlNode2 *node) { setRef(rideOn->_modelNode, node); }

}

template class Ref<beModelCtrlInfoRideOn2>;

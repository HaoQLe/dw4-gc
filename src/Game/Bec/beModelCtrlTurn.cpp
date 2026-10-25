// beModelCtrl: turning toward the target direction (0x8030C85C..0x8030CB2C).
#include "beModelCtrl.h"

// The original calls every function of these files; none is inlined.
#pragma auto_inline off

extern "C" {

// Turns the model's direction toward its target direction, each axis by at most its limiter per frame the
// shorter way round (immediately when immediate is set or the limiter is 0), and rotates its node to match.
void fn_8030C85C(beModelCtrl *, beModelCtrlInfo *, beBaseInfoRam *ram, beModelCtrlInfoWork *work, bool immediate)
{
    const beModelCtrlPool &mc = MC;
    float direction[3];
    direction[0] = work->_targetDirection[0];
    direction[1] = work->_targetDirection[1];
    direction[2] = work->_targetDirection[2];
    if (!immediate) {
        for (int i = 0; i < 3; i++) {
            float current = work->_direction[i];
            if (current == work->_targetDirection[i]) continue;
            if (mc.zero == work->_directionLimiter[i]) {
                direction[i] = current;
                continue;
            }
            float step = work->_directionLimiter[i] * fn_8031E4C4(ram, mc.KEIKATIMER);
            float from = work->_direction[i];
            float to = work->_targetDirection[i];
            while (from < mc.zero) from += mc.twoPi;
            while (from >= mc.twoPi) from -= mc.twoPi;
            while (to < mc.zero) to += mc.twoPi;
            while (to >= mc.twoPi) to -= mc.twoPi;
            float up, down;
            if (from <= to) {
                down = from - (to - mc.twoPi);
                up = to - from;
            } else {
                down = from - to;
                up = to + mc.twoPi - from;
            }
            float turned;
            if (up < down) turned = up > step ? from + step : to;
            else turned = down > step ? from - step : to;
            direction[i] = turned;
        }
    }
    if (immediate || differs(direction, work->_direction)) {
        float *matrix = ramDataOf(ram, mc.ONE)->_node->_m;
        float translation[3];
        fn_80128DAC(matrix, translation);
        fn_80129134(matrix, direction[0], direction[1], direction[2]);
        fn_80128D90(matrix, translation);
        work->_direction[0] = direction[0];
        work->_direction[1] = direction[1];
        work->_direction[2] = direction[2];
    }
}

}

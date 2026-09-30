#include <igGap.h>

// Synthetic accessor partition across an unfinished wrapper.
struct Unknown8003E9B4 {
    unsigned char unknown00[0x34];
    Gap::igUnsignedInt unknown34;
};
extern "C" Gap::igUnsignedInt fn_8003EA0C(Unknown8003E9B4 *object){
    return object->unknown34 & 0xFFFF;
}

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *igMemoryRefMetaField_getMeta();
}
extern "C" {
void *igMemoryRefMetaField_getMetaCall(){return igMemoryRefMetaField_getMeta();}
}
#pragma pop

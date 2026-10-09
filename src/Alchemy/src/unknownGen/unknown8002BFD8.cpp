#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *igMemoryPool_getMeta();
}
extern "C" {
void *igMemoryPool_getMetaCall(){return igMemoryPool_getMeta();}
}
#pragma pop

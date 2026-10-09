#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *igMallocMemoryPool_getMeta();
}
extern "C" {
void *igMallocMemoryPool_getMetaCall(){return igMallocMemoryPool_getMeta();}
}
#pragma pop

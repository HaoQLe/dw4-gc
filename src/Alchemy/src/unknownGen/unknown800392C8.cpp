#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *igPageMemoryPool_getMeta();
}
extern "C" {
void *igPageMemoryPool_getMetaCall(){return igPageMemoryPool_getMeta();}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *igAliasMemoryPool_getMeta();
extern void *igMemoryPool_meta;
}
extern "C" {
void *igAliasMemoryPool_getMetaCall(){return igAliasMemoryPool_getMeta();}
void *fn_80038F58(){return igMemoryPool_meta;}
}
#pragma pop

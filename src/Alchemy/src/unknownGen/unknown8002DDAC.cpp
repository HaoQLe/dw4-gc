#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *__internalObjectList_getMeta();
extern void *__internalNonRefCountedObjectList_meta;
}
extern "C" {
void *__internalObjectList_getMetaCall(){return __internalObjectList_getMeta();}
void *__internalObjectList_parentMeta(){return __internalNonRefCountedObjectList_meta;}
}
#pragma pop

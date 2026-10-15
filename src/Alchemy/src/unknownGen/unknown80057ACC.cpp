#include <unknownGen.h>
#include <meta/igMemoryDirEntry.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80068128(void *,void *);
extern void *igRefMetaField_meta;
}
extern "C" {
void igMemoryDirEntry_virtualA8(int p0){
 fn_80068128(reinterpret_cast<Meta::igMemoryDirEntry *>((void *)p0)->_memType,igRefMetaField_meta);
}
}
#pragma pop

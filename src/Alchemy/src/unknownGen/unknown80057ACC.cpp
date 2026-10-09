#include <unknownGen.h>
#include <meta/igMemoryDirEntry.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80068128(void *,void *);
extern void *lbl_80561684;
}
extern "C" {
void igMemoryDirEntry_virtualA8(int p0){
 fn_80068128(reinterpret_cast<Meta::igMemoryDirEntry *>((void *)p0)->_memType,lbl_80561684);
}
}
#pragma pop

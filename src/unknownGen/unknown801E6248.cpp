#include <unknownGen.h>
#include <meta/igEnbayaTransformSource.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801E55E4(void *);
void *fn_801FAE18();
}
extern "C" {
void igEnbayaTransformSource_virtual80(int p0){
 fn_801E55E4(reinterpret_cast<Meta::igEnbayaTransformSource *>((void *)p0)->_enbayaAnimationSource);
}
void *fn_801E626C(){return fn_801FAE18();}
}
#pragma pop

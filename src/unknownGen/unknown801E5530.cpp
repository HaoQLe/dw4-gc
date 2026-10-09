#include <unknownGen.h>
#include <meta/igEnbayaAnimationSource.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_803B5B70(void *);
}
extern "C" {
void igEnbayaAnimationSource_virtual44(int p0){
 void *value0=fn_803B5B70(reinterpret_cast<Meta::igEnbayaAnimationSource *>((void *)p0)->_enbayaAnimationStream);
 reinterpret_cast<Meta::igEnbayaAnimationSource *>((void *)p0)->_enbayaAnimationStream=(void *)value0;
}
void fn_801E5564(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+32)=value;}
}
#pragma pop

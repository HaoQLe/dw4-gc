#include <unknownGen.h>
#include <meta/igDestinationAlphaAttr.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800F9860(void *,void *,void *);
void *fn_800F9890(void *,void *,void *);
}
extern "C" {
void igDepthWriteStateAttr_virtual80(void *object,unsigned char value){*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+12)=value;}
void igDestinationAlphaAttr_virtual60(int p0,int p1){
 fn_800F9860((void *)p1,(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+12),(void *)(int)reinterpret_cast<Meta::igDestinationAlphaAttr *>((void *)p0)->_alpha);
}
void igDestinationAlphaAttr_virtual68(int p0,int p1){
 fn_800F9890((void *)p1,(reinterpret_cast<char *>((void *)p0)+12),(reinterpret_cast<char *>((void *)p0)+13));
}
void igDestinationAlphaFunctionAttr_virtual60(){}
void igDestinationAlphaFunctionAttr_virtual68(){}
void igDestinationAlphaStateAttr_virtual60(){}
void igDestinationAlphaStateAttr_virtual68(){}
}
#pragma pop

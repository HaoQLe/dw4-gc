#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern char lbl_80566810[4];
}
extern "C" {
void igLightingStateAttr_virtual80(void *object,unsigned char value){*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+12)=value;}
void igLineWidthAttr_virtual60(){}
void *igLineWidthAttr_virtual68(int p0){
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+12)=*reinterpret_cast<float *>((lbl_80566810+0));
 return (void *)p0;
}
void igMacroTextureRegionAttr_virtual60(){}
void igMacroTextureRegionAttr_virtual68(){}
}
#pragma pop

#include <unknownGen.h>
#include <meta/igLightAttr.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void *igLightAttr_virtual94(int p0,float f0){
 reinterpret_cast<Meta::igLightAttr *>((void *)p0)->_cutoff=f0;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+144)=1;
 return (void *)p0;
}
void *igLightAttr_virtual98(int p0,float f0){
 reinterpret_cast<Meta::igLightAttr *>((void *)p0)->_falloff=f0;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+144)=1;
 return (void *)p0;
}
}
#pragma pop

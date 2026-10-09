#include <unknownGen.h>
#include <meta/igGamecubeEnvironmentMapShader.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void *igGamecubeEnvironmentMapShader_virtual9C(int p0,int p1){
 reinterpret_cast<Meta::igGamecubeEnvironmentMapShader *>((void *)p0)->_diffuseTextureCoordIndex=(int)(void *)p1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+60)=0;
 return (void *)p0;
}
}
#pragma pop

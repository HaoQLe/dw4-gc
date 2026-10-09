#include <unknownGen.h>
#include <meta/igGamecubeEnvironmentMapShader.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void *igGamecubeEnvironmentMapShader_virtualA4(int p0,int p1){
 reinterpret_cast<Meta::igGamecubeEnvironmentMapShader *>((void *)p0)->_glossTextureCoordIndex=(int)(void *)p1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+60)=0;
 return (void *)p0;
}
void *fn_801E73E4(int p0,float f0){
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+44)=f0;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+60)=0;
 return (void *)p0;
}
void *igGamecubeEnvironmentMapShader_virtualAC(int p0,int p1){
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+48)=(unsigned char)(int)(void *)p1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+60)=0;
 return (void *)p0;
}
}
#pragma pop

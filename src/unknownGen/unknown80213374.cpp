#include <unknownGen.h>
#include <meta/igGamecubeEnvironmentMapShader.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80214958(void *);
void fn_80214980(void *);
}
extern "C" {
void igGamecubeEnvironmentMapShader_virtualA8(int p0){
 if((*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+60)&&(unsigned int)reinterpret_cast<Meta::igGamecubeEnvironmentMapShader *>((void *)p0)->_reflectionScale!=255)){
  fn_80214958((void *)p0);
  fn_80214980((void *)p0);
  return;
 } else {
  fn_80214958((void *)p0);
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+60)=0;
  return;
 }
}
}
#pragma pop

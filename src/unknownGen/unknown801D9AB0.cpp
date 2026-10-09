#include <unknownGen.h>
#include <meta/igDOFCamera.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void *igDOFCamera_virtual90(int p0){
 void *value0;
 value0=reinterpret_cast<Meta::igDOFCamera *>((void *)p0)->_shader;
 if(!value0){
  return value0;
 }
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value0)+32)=0;
 return value0;
}
}
#pragma pop

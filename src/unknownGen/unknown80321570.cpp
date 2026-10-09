#include <unknownGen.h>
#include <meta/beSvUseCheckApi.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void beSvUseCheckApi_virtual64(int p0,int p1){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+24)=(void *)reinterpret_cast<Meta::beSvUseCheckApi *>((void *)p0)->_result;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+44)=1;
}
}
#pragma pop

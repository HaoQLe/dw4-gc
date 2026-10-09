#include <unknownGen.h>
#include <meta/beSvUseCheckApi.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8031FC40(void *);
}
extern "C" {
void beSvUseCheckApi_virtual5C(int p0,int p1){
 reinterpret_cast<Meta::beSvUseCheckApi *>((void *)p0)->_connect=(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+16);
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+28)=0;
 reinterpret_cast<Meta::beSvUseCheckApi *>((void *)p0)->_result=(int)1;
 fn_8031FC40((void *)p0);
 reinterpret_cast<Meta::beSvUseCheckApi *>((void *)p0)->_st0=(int)0;
 reinterpret_cast<Meta::beSvUseCheckApi *>((void *)p0)->_st3=(int)0;
 reinterpret_cast<Meta::beSvUseCheckApi *>((void *)p0)->_st2=(int)0;
 reinterpret_cast<Meta::beSvUseCheckApi *>((void *)p0)->_st1=(int)0;
}
}
#pragma pop

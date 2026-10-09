#include <unknownGen.h>
#include <meta/beSvGetFreeSizeApi.h>
#include <meta/beSvWriteMediaApi.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern char lbl_80535C18[];
}
extern "C" {
void beSvWriteMediaApi_virtual64(int p0,int p1){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+24)=(void *)reinterpret_cast<Meta::beSvWriteMediaApi *>((void *)p0)->_result;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+44)=1;
}
void *beSvGetFreeSizeApi_virtual5C(int p0,int p1){
 reinterpret_cast<Meta::beSvGetFreeSizeApi *>((void *)p0)->_connect=(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+16);
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+28)=0;
 reinterpret_cast<Meta::beSvGetFreeSizeApi *>((void *)p0)->_result=(int)1;
 *reinterpret_cast<void * *>((lbl_80535C18+0))=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+64);
 reinterpret_cast<Meta::beSvGetFreeSizeApi *>((void *)p0)->_st0=(int)0;
 reinterpret_cast<Meta::beSvGetFreeSizeApi *>((void *)p0)->_st3=(int)0;
 reinterpret_cast<Meta::beSvGetFreeSizeApi *>((void *)p0)->_st2=(int)0;
 reinterpret_cast<Meta::beSvGetFreeSizeApi *>((void *)p0)->_st1=(int)0;
 return (void *)p0;
}
}
#pragma pop

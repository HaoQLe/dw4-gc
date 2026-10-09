#include <unknownGen.h>
#include <meta/beSvFileFindApi.h>
#include <meta/beSvFileMakeApi.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern char lbl_80535C18[];
}
extern "C" {
void beSvFileMakeApi_virtual64(int p0,int p1){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+24)=(void *)reinterpret_cast<Meta::beSvFileMakeApi *>((void *)p0)->_result;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+44)=1;
}
void beSvFileFindApi_virtual5C(int p0,int p1){
 void *value0;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+16);
 if((int)(int)value0==-1){
  reinterpret_cast<Meta::beSvFileFindApi *>((void *)p0)->_connect=(int)0;
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+16)=1;
 } else {
  reinterpret_cast<Meta::beSvFileFindApi *>((void *)p0)->_connect=(int)value0;
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+16)=0;
 }
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+28)=0;
 reinterpret_cast<Meta::beSvFileFindApi *>((void *)p0)->_result=(int)1;
 reinterpret_cast<Meta::beSvFileFindApi *>((void *)p0)->_st0=(int)0;
 reinterpret_cast<Meta::beSvFileFindApi *>((void *)p0)->_st3=(int)0;
 reinterpret_cast<Meta::beSvFileFindApi *>((void *)p0)->_st2=(int)0;
 reinterpret_cast<Meta::beSvFileFindApi *>((void *)p0)->_st1=(int)0;
 *reinterpret_cast<void * *>((lbl_80535C18+0))=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+64);
}
}
#pragma pop

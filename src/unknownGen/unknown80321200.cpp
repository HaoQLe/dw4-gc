#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void beSvFileFindApi_virtual64(int p0,int p1){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+24)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24);
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+44)=1;
}
void *beSvFormatApi_virtual5C(int p0,int p1){
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+28)=0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+20)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+16);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+24)=(void *)1;
 return (void *)p0;
}
}
#pragma pop

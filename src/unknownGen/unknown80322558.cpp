#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void *beSvStartApi_virtual60(int p0){
 if(*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+28)){
  return (void *)1;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+24)=(void *)2;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+28)=1;
 return (void *)1;
}
void beSvStartApi_virtual64(int p0,int p1){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+24)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24);
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+44)=1;
}
void *beSvEndApi_virtual5C(int p0){
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+28)=0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+24)=(void *)1;
 return (void *)p0;
}
void *beSvEndApi_virtual60(int p0){
 if(*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+28)){
  return (void *)1;
 }
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+28)=1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+24)=(void *)2;
 return (void *)1;
}
void beSvEndApi_virtual64(int p0,int p1){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+24)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24);
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+44)=1;
}
void *fn_803225EC(int p0,int p1){
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+40)=0;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+41)=0;
 return (void *)p0;
}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern char lbl_80566950[4];
}
extern "C" {
void fn_800F6B5C(int p0,int p1,float f0){
 if((int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+1264))+16)+(p1*168))==0){
  return;
 }
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+1264))+16)+(p1*168)))+76)=f0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+1312)=(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+1312)|0x100);
}
void fn_800F6B84(int p0,int p1,float f0){
 if((int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+1264))+16)+(p1*168))==0){
  return;
 }
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+1264))+16)+(p1*168)))+80)=(*reinterpret_cast<float *>((lbl_80566950+0))*f0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+1312)=(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+1312)|0x100);
}
}
#pragma pop

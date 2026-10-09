#include <unknownGen.h>
#include <meta/igSkeleton.h>
#include <meta/igSkeletonBoneInfoList.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern char lbl_8055F71C[4];
}
extern "C" {
void *igSkeleton_virtual68(int p0,int p1){
 if(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(reinterpret_cast<Meta::igSkeletonBoneInfoList *>(reinterpret_cast<Meta::igSkeleton *>((void *)p0)->_boneInfoList)->_data)+(p1<<2)))+8)){
  return *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(reinterpret_cast<Meta::igSkeletonBoneInfoList *>(reinterpret_cast<Meta::igSkeleton *>((void *)p0)->_boneInfoList)->_data)+(p1<<2)))+8);
 }
 return lbl_8055F71C;
}
}
#pragma pop

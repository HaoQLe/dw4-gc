#include <unknownGen.h>
#include <meta/igCustomStateCollectionList.h>
#include <meta/igGamecubeVisualContext.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void *igGamecubeVisualContext_virtual42C(int p0,int p1,int p2){
 if(((int)p1>=(int)(int)(void *)reinterpret_cast<Meta::igCustomStateCollectionList *>(reinterpret_cast<Meta::igGamecubeVisualContext *>((void *)p0)->_customStates)->_count||!(void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(reinterpret_cast<Meta::igCustomStateCollectionList *>(reinterpret_cast<Meta::igGamecubeVisualContext *>((void *)p0)->_customStates)->_data)+(p1<<2)))){
  return (void *)0;
 }
 if((unsigned int)p2<(unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(reinterpret_cast<Meta::igCustomStateCollectionList *>(reinterpret_cast<Meta::igGamecubeVisualContext *>((void *)p0)->_customStates)->_data)+(p1<<2)))+8)){
  if((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(reinterpret_cast<Meta::igCustomStateCollectionList *>(reinterpret_cast<Meta::igGamecubeVisualContext *>((void *)p0)->_customStates)->_data)+(p1<<2)))+16))+(p2<<2))){
   return (void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(reinterpret_cast<Meta::igCustomStateCollectionList *>(reinterpret_cast<Meta::igGamecubeVisualContext *>((void *)p0)->_customStates)->_data)+(p1<<2)))+16))+(p2<<2));
  }
 }
 return (void *)0;
}
}
#pragma pop

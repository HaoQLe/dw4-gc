#include <unknownGen.h>
#include <meta/igFile.h>
#include <meta/igIGBFile.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void *igIGBFile_virtual6C(int p0){
 if((int)(int)(void *)(int)reinterpret_cast<Meta::igFile *>(reinterpret_cast<Meta::igIGBFile *>((void *)p0)->_file)->_openMode==4){
  return (void *)(int)((int)reinterpret_cast<Meta::igIGBFile *>((void *)p0)->_chunk+(int)(void *)reinterpret_cast<Meta::igIGBFile *>((void *)p0)->_chunkPlace);
 }
 return reinterpret_cast<Meta::igIGBFile *>((void *)p0)->_objectBufferPlace;
}
}
#pragma pop

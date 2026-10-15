#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void igAdxFile_registerNow();
extern void *igAdxFile_meta;
}
extern "C" {
void *igAdxFile_create(void *object){
 igAdxFile_registerNow();
 return meta_createInstance(igAdxFile_meta,object);
}
void *igAdxFile_getMeta(){
 if(!igAdxFile_meta || !(reinterpret_cast<unsigned int *>(igAdxFile_meta)[0x24/4]&4)) igAdxFile_registerNow();
 return igAdxFile_meta;
}
}
#pragma pop

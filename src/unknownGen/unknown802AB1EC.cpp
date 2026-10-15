#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void igAdxFile_arkRegister();
extern void *igAdxFile_meta;
}
extern "C" {
void *igAdxFile_create(void *object){
 igAdxFile_arkRegister();
 return meta_createInstance(igAdxFile_meta,object);
}
void *igAdxFile_getMeta(){
 if(!igAdxFile_meta || !(reinterpret_cast<unsigned int *>(igAdxFile_meta)[0x24/4]&4)) igAdxFile_arkRegister();
 return igAdxFile_meta;
}
}
#pragma pop

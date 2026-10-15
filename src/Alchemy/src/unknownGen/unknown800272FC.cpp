#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void igRefMetaField_register();
extern void *igRefMetaField_meta;
void igRefMetaField_arkRegister();
}
extern "C" {
void *igRefMetaField_getMeta(){
 if(!igRefMetaField_meta || !(reinterpret_cast<unsigned int *>(igRefMetaField_meta)[0x24/4]&4)) igRefMetaField_arkRegister();
 return igRefMetaField_meta;
}
void igRefMetaField_arkRegister(){
 meta_registerNow((int)igRefMetaField_register);
}
}
#pragma pop

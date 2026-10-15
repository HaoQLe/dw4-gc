#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void igObjectRefMetaField_register();
}
extern "C" {
void igObjectRefMetaField_arkRegister(){
 meta_registerNow((int)igObjectRefMetaField_register);
}
}
#pragma pop

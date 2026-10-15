#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void igMetaObject_register();
}
extern "C" {
void igMetaObject_arkRegister(){
 meta_registerNow((int)igMetaObject_register);
}
}
#pragma pop

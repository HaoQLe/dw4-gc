#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void igSearchSceneGraph_register();
}
extern "C" {
void igSearchSceneGraph_arkRegister(){
 meta_registerNow((int)igSearchSceneGraph_register);
}
}
#pragma pop

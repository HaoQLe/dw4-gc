#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igSearchSceneGraph_arkRegister();
extern void *igSearchSceneGraph_meta;
}
extern "C" {
void *igSearchSceneGraph_getMeta(){
 if(!igSearchSceneGraph_meta || !(reinterpret_cast<unsigned int *>(igSearchSceneGraph_meta)[0x24/4]&4)) igSearchSceneGraph_arkRegister();
 return igSearchSceneGraph_meta;
}
}
#pragma pop

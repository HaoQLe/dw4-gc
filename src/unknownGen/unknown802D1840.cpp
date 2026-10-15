#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *igLuaState_meta;
}
extern "C" {
void *beLuaState_parentMeta(){return igLuaState_meta;}
}
#pragma pop

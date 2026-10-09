#include <unknownGen.h>
#include <meta/igVertexArray2Helper.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800E3D94(void *,int,int);
void fn_800E6DB8(void *);
void fn_800E6F0C(void *);
}
extern "C" {
void igVertexArray2Helper_virtual60(int p0){
 void *value0=fn_800E3D94(reinterpret_cast<Meta::igVertexArray2Helper *>((void *)p0)->_vertexArray,5,0);
 fn_800E6DB8(value0);
}
void igVertexArray2Helper_virtual64(int p0){
 void *value0=fn_800E3D94(reinterpret_cast<Meta::igVertexArray2Helper *>((void *)p0)->_vertexArray,6,0);
 fn_800E6F0C(value0);
}
}
#pragma pop

#include <unknownGen.h>
#include <meta/igVec3fList.h>
#include <meta/igVertexArray2Helper.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80068128(void *,void *);
void *fn_800E3D94(void *,int,int);
extern void *lbl_80563A14;
}
static inline void *UnknownGenCast800E5588_11(void *q){
 void *value2;
 if((q&&(value2=fn_80068128(q,lbl_80563A14),(unsigned char)(int)value2))) return q;
 return 0;
}
extern "C" {
void *igVertexArray2Helper_virtual84(int p0,int p1){
 void *value1;
 void *value0;
 value1=fn_800E3D94(reinterpret_cast<Meta::igVertexArray2Helper *>((void *)p0)->_vertexArray,3,0);
 value0=UnknownGenCast800E5588_11(*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+12));
 return (void *)(int)((int)reinterpret_cast<Meta::igVec3fList *>(value0)->_data+(p1*12));
}
}
#pragma pop

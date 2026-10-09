#include <unknownGen.h>
#include <meta/igVec2fList.h>
#include <meta/igVertexArray2Helper.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80068128(void *,void *);
void *fn_800E3D94(void *,int,void *);
extern void *lbl_80563A20;
}
static inline void *UnknownGenCast800E6508_11(void *q){
 void *value2;
 if((q&&(value2=fn_80068128(q,lbl_80563A20),(unsigned char)(int)value2))) return q;
 return 0;
}
extern "C" {
void *igVertexArray2Helper_virtualC8(int p0,int p1,int p2){
 void *value1;
 void *value0;
 value1=fn_800E3D94(reinterpret_cast<Meta::igVertexArray2Helper *>((void *)p0)->_vertexArray,4,(void *)p1);
 value0=UnknownGenCast800E6508_11(*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+12));
 return (void *)(int)((int)reinterpret_cast<Meta::igVec2fList *>(value0)->_data+(p2<<3));
}
}
#pragma pop

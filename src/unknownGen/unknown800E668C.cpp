#include <unknownGen.h>
#include <meta/igVec2fList.h>
#include <meta/igVertexArray2Helper.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80068128(void *,void *);
void *fn_800E3D94(void *,int,int);
extern void *lbl_80563A20;
}
static inline void *UnknownGenCast800E668C_14(void *q){
 void *value6;
 if((q&&(value6=fn_80068128(q,lbl_80563A20),(unsigned char)(int)value6))) return q;
 return 0;
}
extern "C" {
void igVertexArray2Helper_virtualD4(int p0,int p1,int p2){
 void *value5;
 void *value0;
 void *value1;
 void *value2;
 float value3;
 float value4;
 value5=fn_800E3D94(reinterpret_cast<Meta::igVertexArray2Helper *>((void *)p0)->_vertexArray,9,0);
 value0=UnknownGenCast800E668C_14(*reinterpret_cast<void **>(reinterpret_cast<char *>(value5)+12));
 value1=(void *)reinterpret_cast<Meta::igVec2fList *>(value0)->_count;
 if((((int)(int)value1!=0&&(int)p1>=0)&&(int)p1<(int)(int)value1)){
  value2=reinterpret_cast<Meta::igVec2fList *>(value0)->_data;
  value3=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p2)+0);
  *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)(int)((int)value2+(p1<<3)))+0)=value3;
  value4=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p2)+4);
  *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)(int)((int)value2+(p1<<3)))+4)=value4;
 }
}
}
#pragma pop

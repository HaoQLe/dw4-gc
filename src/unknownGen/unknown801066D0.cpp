#include <unknownGen.h>
#include <meta/igVertexArray2.h>
#include <meta/igVertexArray2Helper.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void igVertexArray2Helper_virtualDC(int p0){
 void *value0;
 void *value1;
 value0=reinterpret_cast<Meta::igVertexArray2Helper *>((void *)p0)->_vertexArray;
 if(value0){
  value1=(void *)reinterpret_cast<Meta::igVertexArray2 *>(value0)->_refCount;
  reinterpret_cast<Meta::igVertexArray2 *>(value0)->_refCount=(unsigned int)(reinterpret_cast<char *>(value1)+-1);
  if(!((unsigned int)(int)(void *)reinterpret_cast<Meta::igVertexArray2 *>(value0)->_refCount&0x7FFFFF)){
   fn_80066E1C(value0);
  }
 }
 reinterpret_cast<Meta::igVertexArray2Helper *>((void *)p0)->_vertexArray=(Meta::igVertexArray2 *)0;
}
}
#pragma pop

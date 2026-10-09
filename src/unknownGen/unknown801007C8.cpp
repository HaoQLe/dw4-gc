#include <unknownGen.h>
#include <meta/igGamecubeVertexArray1_1.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8012E4F8(void *,int,void *);
void fn_8012EBF4(void *,int);
void fn_8012ECF4(void *,int,void *);
}
extern "C" {
void igGamecubeVertexArray1_1_virtualAC(int p0,int p1){
 void *local0;
 fn_8012ECF4(&local0,0,(void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(reinterpret_cast<Meta::igGamecubeVertexArray1_1 *>((void *)p0)->_vdata)+8))+(p1<<2)));
 fn_8012EBF4(&local0,1);
}
void igGamecubeVertexArray1_1_virtualB0(int p0,int p1,int p2){
 fn_8012E4F8((void *)p2,0,(void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(reinterpret_cast<Meta::igGamecubeVertexArray1_1 *>((void *)p0)->_vdata)+8))+(p1<<2)));
}
}
#pragma pop

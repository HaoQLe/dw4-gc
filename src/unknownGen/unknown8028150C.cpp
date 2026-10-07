#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80281354(void *,void *,void *);
}
struct UnknownGenL8028150C_8 {
 int m08;
 char pad0C[4];
 int m10;
};
extern "C" {
void fn_8028150C(int p0,int p1,int p2,double f0){
 UnknownGenL8028150C_8 local0;
 local0.m10=(int)p2;
 local0.m08=(int)3;
 void *value0=fn_80281354((void *)p0,(void *)p1,&local0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+0)=(void *)2;
 *reinterpret_cast<double *>(reinterpret_cast<char *>(value0)+8)=f0;
}
}
#pragma pop

#include <unknownGen.h>
#include <meta/igSceneInfo.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8005335C(void *,void *);
void *strcmp(void *,void *);
}
extern "C" {
void *igSceneInfo_virtual60(int p0,int p1){
 void *value1;
 void *value0;
 void *value2;
 value1=strcmp((void *)p1,(void *)reinterpret_cast<Meta::igSceneInfo *>((void *)p0)->_name);
 if((int)(int)value1==0){
  value0=reinterpret_cast<Meta::igSceneInfo *>((void *)p0)->_sceneGraph;
  return value0;
 } else {
  value2=fn_8005335C((void *)p0,(void *)p1);
  return value2;
 }
}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8029A718(void *);
void *fn_8029A754(void *);
void *fn_8029AEF4(void *);
}
extern "C" {
void *fn_802A8BB8(int p0,int p1){
 void *value0;
 void *value1;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+44);
 if(value0){
  value1=fn_8029A754(value0);
  return value1;
 } else {
  return value0;
 }
}
void *fn_802A8BE4(int p0){
 void *value0;
 if(!*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+44)){
  return (void *)0;
 } else {
  value0=fn_8029A718(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+44));
  return value0;
 }
}
void *fn_802A8C18(int p0){
 void *value0;
 if(!*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+44)){
  return (void *)-1;
 } else {
  value0=fn_8029AEF4(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+44));
  return value0;
 }
}
}
#pragma pop

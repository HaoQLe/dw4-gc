#include <unknownGen.h>
#include <meta/beTargetObj.h>
#include <meta/igIntList.h>
#include <meta/igVec3fList.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8004155C(void *,int,int);
}
extern "C" {
void beTargetObj_virtual70(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value0;
 void *value1;
 void *value2;
 reinterpret_cast<Meta::igVec3fList *>(reinterpret_cast<Meta::beTargetObj *>((void *)p0)->_playerPosList)->_count=(int)0;
 value0=reinterpret_cast<Meta::beTargetObj *>((void *)p0)->_playerPosList;
 if((int)(int)(void *)reinterpret_cast<Meta::igVec3fList *>(value0)->_count<=0){
  fn_8004155C(value0,0,12);
 }
 reinterpret_cast<Meta::igIntList *>(reinterpret_cast<Meta::beTargetObj *>((void *)p0)->_playerRamNoList)->_count=(int)0;
 value1=reinterpret_cast<Meta::beTargetObj *>((void *)p0)->_playerRamNoList;
 if((int)(int)(void *)reinterpret_cast<Meta::igIntList *>(value1)->_count<=0){
  fn_8004155C(value1,0,4);
 }
 reinterpret_cast<Meta::igVec3fList *>(reinterpret_cast<Meta::beTargetObj *>((void *)p0)->_enemyPosList)->_count=(int)0;
 value2=reinterpret_cast<Meta::beTargetObj *>((void *)p0)->_enemyPosList;
 if((int)(int)(void *)reinterpret_cast<Meta::igVec3fList *>(value2)->_count<=0){
  fn_8004155C(value2,0,12);
  return;
 } else {
  return;
 }
}
}
#pragma pop

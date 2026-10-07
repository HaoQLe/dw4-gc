#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void OSInit();
extern char lbl_80562304[4];
extern char lbl_80562308[1];
extern void *lbl_80562394;
}
class UnknownGenV800779D4_0 {
public:
 virtual void s08();
 virtual void * s0C();
};
extern "C" {
void fn_8007798C(int p0,int p1,int p2,int p3,int p4,int p5){
 if(!(void *)(int)*reinterpret_cast<unsigned char *>((lbl_80562308+0))){
  *reinterpret_cast<unsigned char *>((lbl_80562308+0))=1;
  OSInit();
 }
 if(!lbl_80562394){
  lbl_80562394=lbl_80562304;
 }
}
void *fn_800779D4(){
 void *value1;
 void *value0=lbl_80562394;
 if(value0){
  value1=reinterpret_cast<UnknownGenV800779D4_0 *>(value0)->s0C();
  return value1;
 } else {
  return value0;
 }
}
int fn_80077A0C(){return 6;}
}
#pragma pop

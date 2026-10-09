#include <unknownGen.h>
#include <meta/beFont.h>
#include <meta/igAttrSet.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80071FF4(void *);
void fn_803050A8(void *,void *,void *,int,int);
extern char lbl_80425730[];
}
extern "C" {
void beFont_virtual7C(int p0,int p1,int p2,int p3,int p4,int p5){
 fn_803050A8(reinterpret_cast<Meta::beFont *>((void *)p0)->_messenger,(void *)p1,lbl_80425730,0,-1);
}
void beFont_virtual88(int p0){
 void *value0;
 void *value1;
 value0=reinterpret_cast<Meta::beFont *>((void *)p0)->_root;
 if(value0){
  value1=(void *)reinterpret_cast<Meta::igAttrSet *>(value0)->_refCount;
  reinterpret_cast<Meta::igAttrSet *>(value0)->_refCount=(unsigned int)(reinterpret_cast<char *>(value1)+-1);
  if(!((unsigned int)(int)(void *)reinterpret_cast<Meta::igAttrSet *>(value0)->_refCount&0x7FFFFF)){
   fn_80066E1C(value0);
  }
 }
 reinterpret_cast<Meta::beFont *>((void *)p0)->_root=(Meta::igAttrSet *)0;
 fn_80071FF4(reinterpret_cast<Meta::beFont *>((void *)p0)->_convertData);
}
}
#pragma pop

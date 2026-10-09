#include <unknownGen.h>
#include <meta/igCommonTraversal.h>
#include <meta/igCreateActorBounds.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_801C47E4(void *);
void *igTransform_getMeta();
}
extern "C" {
void *igConvertTransformsToCompressedSequencesQS_virtual8C(){return igTransform_getMeta();}
void *igCreateActorBounds_virtual7C(int p0){
 void *value0;
 void *value1;
 void *value2;
 value0=reinterpret_cast<Meta::igCreateActorBounds *>((void *)p0)->_traversal;
 if(value0){
  value1=(void *)reinterpret_cast<Meta::igCommonTraversal *>(value0)->_refCount;
  reinterpret_cast<Meta::igCommonTraversal *>(value0)->_refCount=(unsigned int)(reinterpret_cast<char *>(value1)+-1);
  if(!((unsigned int)(int)(void *)reinterpret_cast<Meta::igCommonTraversal *>(value0)->_refCount&0x7FFFFF)){
   fn_80066E1C(value0);
  }
 }
 value2=fn_801C47E4((void *)0);
 reinterpret_cast<Meta::igCreateActorBounds *>((void *)p0)->_traversal=(Meta::igCommonTraversal *)value2;
 return (void *)1;
}
int igCreateActorBounds_virtual70(){return 0;}
}
#pragma pop

#include <unknownGen.h>
#include <meta/igPrimLengthArray1_1.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800682A4(void *,void *,void *);
void fn_80068390(void *,void *);
}
extern "C" {
void *igPrimLengthArray1_1_virtual5C(int p0,int p1,int p2){
 void *value0;
 void *value1;
 reinterpret_cast<Meta::igPrimLengthArray1_1 *>((void *)p0)->_dataSize=(unsigned int)(void *)p2;
 reinterpret_cast<Meta::igPrimLengthArray1_1 *>((void *)p0)->_numStrips=(unsigned int)(void *)p1;
 value0=(void *)reinterpret_cast<Meta::igPrimLengthArray1_1 *>((void *)p0)->_numStrips;
 if((int)((int)value0<<2)!=0){
  value1=fn_800682A4((void *)p0,reinterpret_cast<Meta::igPrimLengthArray1_1 *>((void *)p0)->_lengthData,(void *)(int)((int)value0<<2));
  reinterpret_cast<Meta::igPrimLengthArray1_1 *>((void *)p0)->_lengthData=(void *)value1;
 } else {
  if(reinterpret_cast<Meta::igPrimLengthArray1_1 *>((void *)p0)->_lengthData){
   fn_80068390((void *)p0,reinterpret_cast<Meta::igPrimLengthArray1_1 *>((void *)p0)->_lengthData);
  }
  reinterpret_cast<Meta::igPrimLengthArray1_1 *>((void *)p0)->_lengthData=(void *)0;
 }
 return (void *)(int)((int)value0<<2);
}
}
#pragma pop

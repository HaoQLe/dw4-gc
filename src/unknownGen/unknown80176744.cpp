#include <unknownGen.h>
#include <meta/igInterpretedShaderData.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80068128(void *,void *);
extern void *lbl_80564E70;
extern void *lbl_80564E7C;
extern void *lbl_80564E88;
}
static inline void *UnknownGenCast80176744_16(void *q){
 void *value4;
 if((q&&(value4=fn_80068128(q,lbl_80564E70),(unsigned char)(int)value4))) return q;
 return 0;
}
static inline void *UnknownGenCast80176744_22(void *q){
 void *value5;
 if((q&&(value5=fn_80068128(q,lbl_80564E88),(unsigned char)(int)value5))) return q;
 return 0;
}
class UnknownGenV80176744_2 {
public:
 virtual void s08();
 virtual void s0C();
 virtual void s10();
 virtual void s14();
 virtual void s18();
 virtual void s1C();
 virtual void s20();
 virtual void s24();
 virtual void s28();
 virtual void s2C();
 virtual void s30();
 virtual void s34();
 virtual void s38();
 virtual void s3C();
 virtual void s40();
 virtual void s44();
 virtual void s48();
 virtual void s4C();
 virtual void s50();
 virtual void s54();
 virtual void s58();
 virtual void s5C();
 virtual void s60();
 virtual void s64(void *);
};
class UnknownGenV80176744_3 {
public:
 virtual void s08();
 virtual void s0C();
 virtual void s10();
 virtual void s14();
 virtual void s18();
 virtual void s1C();
 virtual void s20();
 virtual void s24();
 virtual void s28();
 virtual void s2C();
 virtual void s30();
 virtual void s34();
 virtual void s38();
 virtual void s3C();
 virtual void s40();
 virtual void s44();
 virtual void s48();
 virtual void s4C();
 virtual void s50();
 virtual void s54();
 virtual void s58();
 virtual void s5C();
 virtual void s60();
 virtual void s64();
 virtual void s68();
 virtual void s6C();
};
extern "C" {
void igInternalizeShader_virtual88(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value2;
 void *value3;
 void *value0;
 void *value1;
 if(((int)p1!=0&&(value3=fn_80068128((void *)p1,lbl_80564E7C),(unsigned char)(int)value3))){
  value2=(void *)p1;
 } else {
  value2=(void *)0;
 }
 value0=UnknownGenCast80176744_16(*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+36));
 value1=UnknownGenCast80176744_22(reinterpret_cast<Meta::igInterpretedShaderData *>(value0)->_factory);
 reinterpret_cast<UnknownGenV80176744_2 *>(value1)->s64((void *)2);
 reinterpret_cast<UnknownGenV80176744_3 *>(value1)->s6C();
}
}
#pragma pop

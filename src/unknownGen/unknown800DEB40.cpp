#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80056378(void *,void *,void *);
void *fn_800607F4(void *);
void *fn_80068430(void *);
void fn_800DD024(void *);
extern void *lbl_80562248;
extern char lbl_80562298[1];
}
class UnknownGenV800DEB40_0 {
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
 virtual void s70();
 virtual void s74();
 virtual void s78();
 virtual void s7C();
 virtual void s80();
 virtual void s84();
 virtual void s88();
 virtual void s8C();
 virtual void s90();
 virtual void s94();
 virtual void s98();
 virtual void s9C();
 virtual void sA0();
 virtual void sA4();
 virtual void sA8();
 virtual void sAC();
 virtual void sB0();
 virtual void sB4();
 virtual void sB8();
 virtual void sBC();
 virtual void sC0();
 virtual void sC4();
 virtual void sC8();
 virtual void sCC();
 virtual void sD0();
 virtual void sD4();
 virtual void sD8();
 virtual void * sDC(void *,void *);
};
extern "C" {
void fn_800DEB40(int p0){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 void *value4;
 void *value5;
 void *value6;
 void *value7;
 void *value8;
 void *value9;
 void *value10;
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+76)>0){
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+76);
 } else {
  value0=(void *)(int)((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+48)/(unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12));
 }
 fn_800DD024((void *)p0);
 if(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+52)){
  if((int)(int)value0!=(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+76)){
   value8=fn_80068430((void *)p0);
   if((void *)(int)*reinterpret_cast<unsigned char *>((lbl_80562298+0))){
    value1=value8;
   } else {
    value9=fn_800607F4(lbl_80562248);
    value1=value9;
   }
   value10=reinterpret_cast<UnknownGenV800DEB40_0 *>(value1)->sDC(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+48),(void *)128);
   value2=(void *)0;
   value3=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+52);
   value4=value10;
   while((unsigned int)(int)value2<(unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12)){
    value5=value3;
    value6=value4;
    value7=(void *)0;
    while((int)(int)value7<(int)(int)value0){
     *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+0)=(unsigned char)(int)(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value5)+0);
     value5=(reinterpret_cast<char *>(value5)+1);
     value6=(reinterpret_cast<char *>(value6)+1);
     value7=(reinterpret_cast<char *>(value7)+1);
    }
    value3=value5;
    value2=(reinterpret_cast<char *>(value2)+1);
    value4=(void *)(int)((int)value6+((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+76)-(int)value0));
   }
   fn_80056378(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+52),value3,value4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+52)=value10;
   return;
  } else {
   return;
  }
 }
}
}
#pragma pop

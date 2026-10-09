#include <unknownGen.h>
#include <meta/igOptInterface.h>
#include <meta/igOptStatistics.h>
#pragma push
#pragma auto_inline off
extern "C" {
void memset(void *,int,void *);
}
class UnknownGenV801845B8_0 {
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
 virtual void s6C(void *);
};
class UnknownGenV801845B8_1 {
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
 virtual void s70(void *);
};
class UnknownGenV801845B8_2 {
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
 virtual void s74(void *);
};
class UnknownGenV8018462C_3 {
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
 virtual void * s80(void *);
};
extern "C" {
void igOptStatistics_virtual94(){}
void igOptStatistics_virtual90(int p0){
 reinterpret_cast<UnknownGenV801845B8_0 *>(reinterpret_cast<Meta::igOptStatistics *>((void *)p0)->_table)->s6C((void *)(int)reinterpret_cast<Meta::igOptStatistics *>((void *)p0)->_sortColumnLeftToRight);
 reinterpret_cast<UnknownGenV801845B8_1 *>(reinterpret_cast<Meta::igOptStatistics *>((void *)p0)->_table)->s70((void *)reinterpret_cast<Meta::igOptStatistics *>((void *)p0)->_sortColumn);
 reinterpret_cast<UnknownGenV801845B8_2 *>(reinterpret_cast<Meta::igOptStatistics *>((void *)p0)->_table)->s74(reinterpret_cast<Meta::igOptInterface *>(reinterpret_cast<Meta::igOptStatistics *>((void *)p0)->_optInterface)->_logInterface);
}
void *igOptStatistics_virtual9C(int p0,int p1){
 void *value0;
 value0=reinterpret_cast<UnknownGenV8018462C_3 *>(reinterpret_cast<Meta::igOptStatistics *>((void *)p0)->_table)->s80((void *)p1);
 if((int)(int)value0>=0){
  memset((void *)p1,45,value0);
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+(int)value0)=(unsigned char)10;
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)(int)(p1+(int)value0))+1)=0;
  return (void *)(int)(p1+(int)value0);
 } else {
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+0)=0;
  return value0;
 }
}
}
#pragma pop

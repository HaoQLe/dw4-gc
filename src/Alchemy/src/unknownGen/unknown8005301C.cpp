#include <unknownGen.h>
#include <meta/igFile.h>
#include <meta/igIGBFile.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80042B1C(void *,void *);
}
class UnknownGenV8005301C_0 {
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
class UnknownGenV8005301C_1 {
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
 virtual void sA4(void *);
};
class UnknownGenV8005301C_2 {
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
 virtual void sDC();
 virtual void sE0();
 virtual void sE4();
 virtual void sE8();
 virtual void sEC();
 virtual void sF0();
 virtual void sF4();
 virtual void sF8();
 virtual void sFC();
 virtual void s100();
 virtual void s104();
 virtual void s108(void *);
};
extern "C" {
void *igIGBFile_virtual88(int p0){
 void *value3;
 void *value0;
 void *value1;
 void *value2;
 void *value4;
 void *value5;
 reinterpret_cast<Meta::igIGBFile *>((void *)p0)->_chunkSize=(int)(void *)reinterpret_cast<Meta::igIGBFile *>((void *)p0)->_forceChunkSize;
 value0=(void *)reinterpret_cast<Meta::igIGBFile *>((void *)p0)->_chunkSize;
 if((int)(int)value0<0){
  value1=reinterpret_cast<Meta::igIGBFile *>((void *)p0)->_file;
  value2=(void *)reinterpret_cast<Meta::igFile *>(value1)->_optimalWriteChunkSize;
  reinterpret_cast<Meta::igIGBFile *>((void *)p0)->_chunkSize=(int)value2;
 }
 if((int)(int)(void *)reinterpret_cast<Meta::igIGBFile *>((void *)p0)->_chunkSize>(int)(int)(void *)reinterpret_cast<Meta::igIGBFile *>((void *)p0)->_memoryRefBufferSize){
  reinterpret_cast<Meta::igIGBFile *>((void *)p0)->_chunkSize=(int)(void *)reinterpret_cast<Meta::igIGBFile *>((void *)p0)->_memoryRefBufferSize;
 }
 value4=reinterpret_cast<UnknownGenV8005301C_0 *>(reinterpret_cast<Meta::igIGBFile *>((void *)p0)->_temporaryMemoryPool)->sDC((void *)reinterpret_cast<Meta::igIGBFile *>((void *)p0)->_chunkSize,(void *)(int)(unsigned short)(int)(void *)reinterpret_cast<Meta::igFile *>(reinterpret_cast<Meta::igIGBFile *>((void *)p0)->_file)->_pageSize);
 reinterpret_cast<Meta::igIGBFile *>((void *)p0)->_chunk=(void *)value4;
 reinterpret_cast<Meta::igIGBFile *>((void *)p0)->_memoryBufferPlace=(int)0;
 reinterpret_cast<Meta::igIGBFile *>((void *)p0)->_memoryBytesCopied=(int)0;
 reinterpret_cast<Meta::igIGBFile *>((void *)p0)->_bytesRemainingInChunk=(int)(void *)reinterpret_cast<Meta::igIGBFile *>((void *)p0)->_chunkSize;
 value3=(void *)0;
 while((int)(int)value3<(int)(int)(void *)reinterpret_cast<Meta::igIGBFile *>((void *)p0)->_count){
  value5=fn_80042B1C((void *)p0,value3);
  reinterpret_cast<UnknownGenV8005301C_1 *>(value5)->sA4((void *)p0);
  value3=(reinterpret_cast<char *>(value3)+1);
 }
 reinterpret_cast<UnknownGenV8005301C_2 *>(reinterpret_cast<Meta::igIGBFile *>((void *)p0)->_temporaryMemoryPool)->s108(reinterpret_cast<Meta::igIGBFile *>((void *)p0)->_chunk);
 reinterpret_cast<Meta::igIGBFile *>((void *)p0)->_chunk=(void *)0;
 return (void *)1;
}
}
#pragma pop

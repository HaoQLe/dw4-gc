#include <unknownGen.h>
#include <meta/beMovie.h>
#include <meta/igMovieManager.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8028A730(void *,void *);
extern char lbl_80534474[];
}
extern "C" {
void beMovie_virtual88(int p0){
 void *value3;
 void *value0;
 void *value1;
 void *value2;
 value3=fn_8028A730(reinterpret_cast<Meta::beMovie *>((void *)p0)->_insight,*reinterpret_cast<void **>((lbl_80534474+0)));
 if((int)(int)value3!=0){
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>(value3)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+4)=(reinterpret_cast<char *>(value0)+1);
 }
 value1=reinterpret_cast<Meta::beMovie *>((void *)p0)->_movie;
 if(value1){
  value2=(void *)reinterpret_cast<Meta::igMovieManager *>(value1)->_refCount;
  reinterpret_cast<Meta::igMovieManager *>(value1)->_refCount=(unsigned int)(reinterpret_cast<char *>(value2)+-1);
  if(!((unsigned int)(int)(void *)reinterpret_cast<Meta::igMovieManager *>(value1)->_refCount&0x7FFFFF)){
   fn_80066E1C(value1);
  }
 }
 reinterpret_cast<Meta::beMovie *>((void *)p0)->_movie=(Meta::igMovieManager *)value3;
}
}
#pragma pop

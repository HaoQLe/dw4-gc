#include <unknownGen.h>
#include <meta/igObjectRefArrayMetaField.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80067E9C(void *,void *);
}
extern "C" {
void *igObjectRefArrayMetaField_virtualB4(int p0,int p1,int p2){
 void *value1;
 void *value2;
 void *value0;
 void *value3;
 value1=(void *)p2;
 value2=(void *)0;
 while((int)(int)value2<(int)(int)(void *)reinterpret_cast<Meta::igObjectRefArrayMetaField *>((void *)p0)->_num){
  value0=(void *)reinterpret_cast<Meta::igObjectRefArrayMetaField *>((void *)p0)->_offset;
  if((unsigned int)*reinterpret_cast<int *>(reinterpret_cast<char *>((void *)p1)+((int)value0+((int)value2<<2)))!=(unsigned int)*reinterpret_cast<int *>(reinterpret_cast<char *>((void *)p2)+((int)value0+((int)value2<<2)))){
   if((!(void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>((void *)p1)+((int)value0+((int)value2<<2)))||!(void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>((void *)p2)+((int)value0+((int)value2<<2))))){
    return (void *)0;
   }
   value3=fn_80067E9C((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>((void *)p1)+((int)value0+((int)value2<<2))),(void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>((void *)p2)+((int)value0+((int)value2<<2))));
   if(!(unsigned char)(int)value3){
    return (void *)0;
   }
  }
  value2=(reinterpret_cast<char *>(value2)+1);
 }
 return (void *)1;
}
}
#pragma pop

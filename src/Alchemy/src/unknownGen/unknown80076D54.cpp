#include <unknownGen.h>
#include <meta/igGamecubeFile.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void *igGamecubeFile_virtual98(int p0,int p1,int p2){
 switch((int)p2){
 case 0:
  reinterpret_cast<Meta::igGamecubeFile *>((void *)p0)->_offset=(int)(void *)p1;
  if((unsigned int)(int)(void *)reinterpret_cast<Meta::igGamecubeFile *>((void *)p0)->_offset<=(unsigned int)(int)(void *)reinterpret_cast<Meta::igGamecubeFile *>((void *)p0)->_size){
   break;
  }
  reinterpret_cast<Meta::igGamecubeFile *>((void *)p0)->_offset=(int)(void *)reinterpret_cast<Meta::igGamecubeFile *>((void *)p0)->_size;
  break;
 case 1:
  reinterpret_cast<Meta::igGamecubeFile *>((void *)p0)->_offset=(int)(void *)(int)((int)(void *)reinterpret_cast<Meta::igGamecubeFile *>((void *)p0)->_offset+p1);
  if((unsigned int)(int)(void *)reinterpret_cast<Meta::igGamecubeFile *>((void *)p0)->_offset<=(unsigned int)(int)(void *)reinterpret_cast<Meta::igGamecubeFile *>((void *)p0)->_size){
   break;
  }
  reinterpret_cast<Meta::igGamecubeFile *>((void *)p0)->_offset=(int)(void *)reinterpret_cast<Meta::igGamecubeFile *>((void *)p0)->_size;
  break;
 case 2:
  reinterpret_cast<Meta::igGamecubeFile *>((void *)p0)->_offset=(int)(void *)(int)((int)(void *)reinterpret_cast<Meta::igGamecubeFile *>((void *)p0)->_size-p1);
  if((int)(int)(void *)reinterpret_cast<Meta::igGamecubeFile *>((void *)p0)->_offset>=0){
   break;
  }
  reinterpret_cast<Meta::igGamecubeFile *>((void *)p0)->_offset=(int)0;
  break;
 default:
  return (void *)-1;
 }
 return (void *)0;
}
}
#pragma pop

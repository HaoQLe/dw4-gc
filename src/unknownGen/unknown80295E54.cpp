#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void *fn_80295E54(int p0,int p1,int p2,int p3){
 if((int)p1<20){
  return (void *)-1;
 }
 if((unsigned int)*reinterpret_cast<unsigned short *>(reinterpret_cast<char *>((void *)p0)+0)!=32768){
  return (void *)-2;
 }
 if((int)*reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p0)+2)<16){
  return (void *)-1;
 }
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p2)+0)=(unsigned char)(int)(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+18);
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p3)+0)=(unsigned char)(int)(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+19);
 return (void *)0;
}
void *fn_80295EA4(int p0,int p1,int p2){
 if((int)p1<18){
  return (void *)-1;
 }
 if((unsigned int)*reinterpret_cast<unsigned short *>(reinterpret_cast<char *>((void *)p0)+0)!=32768){
  return (void *)-2;
 }
 if((int)*reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p0)+2)<14){
  return (void *)-1;
 }
 *reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p2)+0)=(short)(int)(void *)(int)*reinterpret_cast<unsigned short *>(reinterpret_cast<char *>((void *)p0)+16);
 return (void *)0;
}
}
#pragma pop

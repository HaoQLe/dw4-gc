#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void fn_80102600(int p0,int p1){
 *reinterpret_cast<volatile short *>(0xCC008000)=(short)p1;
}
void fn_8010260C(int p0,int p1){
 *reinterpret_cast<volatile unsigned char *>(0xCC008000)=(unsigned char)p1;
}
void fn_80102618(int p0){
 *reinterpret_cast<volatile int *>(0xCC008000)=(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0);
}
void fn_80102628(int p0){
 *reinterpret_cast<volatile short *>(0xCC008000)=(short)*reinterpret_cast<unsigned short *>(reinterpret_cast<char *>((void *)p0)+0);
}
}
#pragma pop

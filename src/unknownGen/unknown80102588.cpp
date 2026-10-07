#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void fn_80102588(int p0,int p1){
 *reinterpret_cast<volatile short *>(0xCC008000)=(short)p1;
}
void fn_80102594(int p0,int p1){
 *reinterpret_cast<volatile unsigned char *>(0xCC008000)=(unsigned char)p1;
}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern char lbl_80532088[];
extern char lbl_8053208C[];
}
extern "C" {
void *fn_802A6A54(int p0,int p1){
 *reinterpret_cast<void * *>((lbl_80532088+0))=(void *)p0;
 *reinterpret_cast<void * *>((lbl_8053208C+0))=(void *)p1;
 return (void *)p0;
}
}
#pragma pop

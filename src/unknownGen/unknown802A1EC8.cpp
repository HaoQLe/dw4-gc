#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802A1C94(int,int,int,int,int);
}
extern "C" {
void fn_802A1EC8(int p0,int p1){
 fn_802A1C94(p0,p1,0,0,1048575);
}
void fn_802A1EF8(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+40)=value;}
}
#pragma pop

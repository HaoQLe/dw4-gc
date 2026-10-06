#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80410044(void *,int);
void fn_80410158(void *);
void fn_804105C4(void *);
}
extern "C" {
void fn_8040E63C(){}
void fn_8040E640(){}
void fn_8040E644(){}
void fn_8040E648(){}
void fn_8040E64C(){}
void fn_8040E650(int p0){
 fn_80410044(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+136),0);
}
void fn_8040E678(int p0){
 fn_80410158(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+136));
}
void fn_8040E69C(int p0){
 fn_804105C4(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+136));
}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066690(void *);
void fn_80066710(void *);
void fn_800667A0();
extern char lbl_80471CEC[];
}
extern "C" {
void *fn_80058AF8(int p0){
 fn_80066710((void *)p0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=lbl_80471CEC;
 return (void *)p0;
}
void *fn_80058B34(int p0){
 fn_80066690((void *)p0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=lbl_80471CEC;
 return (void *)p0;
}
void fn_80058B70(){return fn_800667A0();}
}
#pragma pop

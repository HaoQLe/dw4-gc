#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80294128(void *);
void fn_80294174(void *);
void fn_80296810(void *);
void fn_80296904();
void fn_8029A60C();
void fn_802A1A5C();
}
extern "C" {
int fn_8028FC40(){
 fn_80296904();
 return 0;
}
int fn_8028FC64(){
 fn_8029A60C();
 return 0;
}
int fn_8028FC88(){
 fn_8029A60C();
 fn_80296904();
 fn_802A1A5C();
 return 0;
}
int fn_8028FCB4(){
 fn_802A1A5C();
 return 0;
}
void fn_8028FCD8(int p0,int p1,int p2,int p3,int p4,int p5){
 fn_80296810((void *)p1);
}
void fn_8028FCFC(int p0,int p1,int p2,int p3,int p4,int p5){
 fn_80296810((void *)p1);
}
void fn_8028FD20(int p0){
 fn_80294128(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+4));
}
void fn_8028FD44(int p0){
 fn_80294174(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+4));
}
void *fn_8028FD68(void *object){return reinterpret_cast<char *>(object)+88;}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern char __files[];
void *fn_80273120(void *,int);
void fprintf(void *,...);
extern char lbl_804CA7C0[];
extern char lbl_804CA7D0[];
}
extern "C" {
void *fn_8027E8CC(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value0;
 void *value1;
 value1=fn_80273120((void *)p0,1);
 value0=value1;
 if(!value1){
  value0=lbl_804CA7C0;
 }
 fprintf((reinterpret_cast<char *>(__files)+160),lbl_804CA7D0,value0,__files);
 return (void *)0;
}
}
#pragma pop
